/********************************************************************************
** Form generated from reading UI file 'taskform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFORM_H
#define UI_TASKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskForm
{
public:
    QLabel *taskText;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *YourAnswerlabel;
    QLineEdit *AnswerLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *TryButton;
    QPushButton *LoseButton;
    QLabel *statusLabel;

    void setupUi(QWidget *TaskForm)
    {
        if (TaskForm->objectName().isEmpty())
            TaskForm->setObjectName("TaskForm");
        TaskForm->resize(729, 525);
        taskText = new QLabel(TaskForm);
        taskText->setObjectName("taskText");
        taskText->setGeometry(QRect(0, 10, 721, 371));
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(18);
        taskText->setFont(font);
        layoutWidget = new QWidget(TaskForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 370, 361, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        YourAnswerlabel = new QLabel(layoutWidget);
        YourAnswerlabel->setObjectName("YourAnswerlabel");

        horizontalLayout->addWidget(YourAnswerlabel);

        AnswerLineEdit = new QLineEdit(layoutWidget);
        AnswerLineEdit->setObjectName("AnswerLineEdit");

        horizontalLayout->addWidget(AnswerLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        TryButton = new QPushButton(layoutWidget);
        TryButton->setObjectName("TryButton");

        horizontalLayout_2->addWidget(TryButton);

        LoseButton = new QPushButton(layoutWidget);
        LoseButton->setObjectName("LoseButton");

        horizontalLayout_2->addWidget(LoseButton);


        verticalLayout->addLayout(horizontalLayout_2);

        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName("statusLabel");

        verticalLayout->addWidget(statusLabel);


        retranslateUi(TaskForm);

        QMetaObject::connectSlotsByName(TaskForm);
    } // setupUi

    void retranslateUi(QWidget *TaskForm)
    {
        TaskForm->setWindowTitle(QCoreApplication::translate("TaskForm", "Form", nullptr));
        taskText->setText(QCoreApplication::translate("TaskForm", "\320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        YourAnswerlabel->setText(QCoreApplication::translate("TaskForm", "\320\222\320\260\321\210 \320\276\321\202\320\262\320\265\321\202:", nullptr));
        TryButton->setText(QCoreApplication::translate("TaskForm", "\320\241\320\264\320\260\321\202\321\214", nullptr));
        LoseButton->setText(QCoreApplication::translate("TaskForm", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TaskForm: public Ui_TaskForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFORM_H
