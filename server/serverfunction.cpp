#include "serverfunction.h"

QByteArray parse(QByteArray request) {
    QJsonObject json_request = QJsonDocument::fromJson(request).object();
    qDebug() << json_request;
    QString response;
    QString method = json_request["method"].toString();
    if (method == QString("authentication")) {
        response = auth(json_request);
    }
    else if (method == QString("register")) {
        response = reg(json_request);
    }
    else {
        QVariantMap error_response;
        error_response["error"] = QString("Function is not defined");
        response = QJsonDocument::fromVariant(error_response).toJson(QJsonDocument::Compact);
    }
    return QByteArray((response + "\r\n").toUtf8());
}

QByteArray auth(QJsonObject request) {
    QVariantMap response;
    QString login = request["login"].toString();
    QString input_password = request["password"].toString();
    QString query = QString("SELECT * FROM Users WHERE login = \"%1\"").arg(login);
    QSqlQuery queryResult = Database::getInstance()->doSQLQuery(query);
    QSqlRecord record = queryResult.record();
    queryResult.next();
    QString dbPassword = queryResult.value(record.indexOf("password")).toString();
    if (dbPassword == input_password) {
        QString token = queryResult.value(record.indexOf("token")).toString();
        response["status"] = "success";
        response["token"] = token;
    }
    else {
        response["status"] = "fail";
    }

    qDebug() << QString("Autherisation with login %1 and password %2").arg(login, input_password);
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}

QByteArray reg(QJsonObject request) {
    QVariantMap response;
    QString login = request["login"].toString();
    QString password = request["password"].toString();
    QString token = QString(QCryptographicHash::hash(((login+password).toUtf8()), QCryptographicHash::Md5).toHex());
    QString query = QString("INSERT INTO Users(login, password, token) "
                            "VALUES (\"%1\", \"%2\", \"%3\", false)")
                            .arg(login, password, token);
    Database::getInstance()->doSQLQuery(query);
    response["token"] = token;
    response["status"] = "success";
    return QJsonDocument::fromVariant(response).toJson(QJsonDocument::Compact);
}



