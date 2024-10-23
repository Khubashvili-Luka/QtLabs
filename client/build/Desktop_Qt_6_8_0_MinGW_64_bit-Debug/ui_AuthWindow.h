/********************************************************************************
** Form generated from reading UI file 'AuthWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QHBoxLayout *LoginPasswordLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *LoginLabel;
    QLabel *PasswordLabel;
    QLabel *passwordLabel_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *LoginTextEdit;
    QLineEdit *PasswordTextEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *passwordTextEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ChangeModeLabel;
    QPushButton *ChangeModeButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(582, 386);
        centralwidget = new QWidget(AuthWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 571, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 100, 311, 176));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        LoginPasswordLayout = new QHBoxLayout(layoutWidget1);
        LoginPasswordLayout->setObjectName("LoginPasswordLayout");
        LoginPasswordLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        LoginLabel = new QLabel(layoutWidget1);
        LoginLabel->setObjectName("LoginLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(18);
        LoginLabel->setFont(font1);
        LoginLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(LoginLabel);

        PasswordLabel = new QLabel(layoutWidget1);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setFont(font1);
        PasswordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(PasswordLabel);

        passwordLabel_2 = new QLabel(layoutWidget1);
        passwordLabel_2->setObjectName("passwordLabel_2");
        passwordLabel_2->setFont(font1);
        passwordLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(passwordLabel_2);


        LoginPasswordLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        LoginTextEdit = new QLineEdit(layoutWidget1);
        LoginTextEdit->setObjectName("LoginTextEdit");
        LoginTextEdit->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(LoginTextEdit);

        PasswordTextEdit = new QLineEdit(layoutWidget1);
        PasswordTextEdit->setObjectName("PasswordTextEdit");
        PasswordTextEdit->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(PasswordTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        passwordTextEdit_2 = new QLineEdit(layoutWidget1);
        passwordTextEdit_2->setObjectName("passwordTextEdit_2");
        passwordTextEdit_2->setMaximumSize(QSize(16777215, 35));

        horizontalLayout->addWidget(passwordTextEdit_2);


        verticalLayout->addLayout(horizontalLayout);


        LoginPasswordLayout->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ChangeModeLabel = new QLabel(layoutWidget);
        ChangeModeLabel->setObjectName("ChangeModeLabel");

        horizontalLayout_2->addWidget(ChangeModeLabel);

        ChangeModeButton = new QPushButton(layoutWidget);
        ChangeModeButton->setObjectName("ChangeModeButton");
        ChangeModeButton->setStyleSheet(QString::fromUtf8("color: RED;"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        ChangeModeButton->setIcon(icon);
        ChangeModeButton->setFlat(true);

        horizontalLayout_2->addWidget(ChangeModeButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        AuthWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuthWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 582, 24));
        AuthWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AuthWindow);
        statusbar->setObjectName("statusbar");
        AuthWindow->setStatusBar(statusbar);

        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("AuthWindow", "\320\242\321\200\320\265\320\275\320\260\320\266\320\265\321\200 \320\277\320\276 \320\234\320\233\320\242\320\220", nullptr));
        LoginLabel->setText(QCoreApplication::translate("AuthWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("AuthWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("AuthWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        ChangeModeLabel->setText(QCoreApplication::translate("AuthWindow", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260? ", nullptr));
        ChangeModeButton->setText(QCoreApplication::translate("AuthWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("AuthWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
