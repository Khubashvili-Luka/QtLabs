#ifndef CLIENTFUNCTIONS_H
#define CLIENTFUNCTIONS_H
#include <network.h>
#include <QJsonObject>
#include <QSettings>
#include <QVariantMap>

/*!
 * \brief Класс функций клиента
 */

/*!
 * \brief Функция авторизации
 * \param[in] login
 * \param[in] password
 * \return Статус входа в систему
 */
bool login(QString login, QString password);
/*!
 * \brief Функция регистрации пользователя
 * \param[in] login
 * \param[in] password
 * \return Статус регистрации пользователя
 */
bool register_account(QString login, QString password);
/*!
 * \brief Функция получения статистики пользователя
 * \return Статистику пользователя
 */


bool save_setting(QString param_name, QString param_value);
/*!
 * \brief Функция получения сохранённого параметра
 * \param[in] param_name Название параметра
 * \return Значение параметра
 */
QString load_setting(QString param_name);
/*!
 * \brief Функция сброса сохраненных параметров
 * \return Статус удаления параметра
 */
bool reset_settings();


#endif // CLIENTFUNCTIONS_H
