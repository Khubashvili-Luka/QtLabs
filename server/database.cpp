#include "database.h"
#include <QCoreApplication>
#include <QVariant>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>


Database::Database()
{
    initDB();
}

void Database::initDB() {
    this->dbInstance = QSqlDatabase::addDatabase("QSQLITE");
    this->dbInstance.setDatabaseName("db2.sql");
    if (!this->dbInstance.open()) {
        qDebug() << this->dbInstance.lastError().text();
    }
    this->doSQLQuery("CREATE TABLE IF NOT EXISTS Users (userID INTEGER PRIMARY KEY, login VARCHAR (255) UNIQUE NOT NULL, password VARCHAR (255) NOT NULL, token VARCHAR (255) UNIQUE NOT NULL)");
    this->doSQLQuery("INSERT INTO Users (userID, login, password, token) VALUES (1, 'admin', 'admin', 'admin_token') ON CONFLICT (userID) DO NOTHING;");
};

Database::~Database() {
    this->dbInstance.close();
};

QSqlQuery Database::doSQLQuery(QString stringQuery) {
    QSqlQuery query(this->dbInstance);
    bool status = query.exec(stringQuery);
    qDebug().noquote() << QString("Query %1, status %2").arg(stringQuery).arg(status);
    if (!status) {
      this->dbInstance.rollback();
    }
    else {
        this->dbInstance.commit();
    }
    return query;
}

Database* Database::pInstance = nullptr;
QSqlDatabase Database::dbInstance;
DatabaseDestroyer Database::destroyer;