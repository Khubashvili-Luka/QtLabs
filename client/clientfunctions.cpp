#include "clientfunctions.h"

bool login(QString login, QString password) {
    QVariantMap request;
    request["method"] = "authentication";
    request["login"] = login;
    request["password"] = password;
    QJsonObject response = Network::getInstance()->doRequest(request);
    QString status = response["status"].toString();
    if (status == "success") {
         qDebug() << "status: is  success1";
        QString token = response["token"].toString();
          qDebug() << "status: is  success2";
        save_setting("login", login);
           qDebug() << "status: is  success3";
        save_setting("token", token);
         qDebug() << "status: is  success4";
        return true;
    }
    else {
         qDebug() << "status: is not success";
        return false;
    }
}

bool register_account(QString login, QString password) {
    QVariantMap request;
    request["method"] = "register";
    request["login"] = login;
    request["password"] = password;
    QJsonObject response = Network::getInstance()->doRequest(request);
    QString status = response["status"].toString();
    if (status == "success") {
        QString token = response["token"].toString();
        save_setting("login", login);
        save_setting("token", token);
        return true;
    }
    else {
        return false;
    }
}

bool save_setting(QString param_name, QString param_value) {
    QSettings settings("settings.conf", QSettings::IniFormat);
    settings.beginGroup("Settings");
    settings.setValue(param_name, param_value);
    return true;
}

QString load_setting(QString param_name) {
    QSettings settings("settings.conf", QSettings::IniFormat);
    settings.beginGroup("Settings");
    QString param = settings.value(param_name, -1 ).toString();
    return param;
}

bool reset_settings() {
    QSettings settings("settings.conf", QSettings::IniFormat);
    settings.clear();
    return true;
}
