/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonParse;
    QPushButton *pushButtonXml;
    QTextBrowser *textBrowserStruct;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtons2c;
    QRadioButton *radioButtonc2s;
    QPushButton *pushButtonclear;
    QTextEdit *textEditPath;
    QLabel *label_4;
    QRadioButton *radioButtonCB;
    QRadioButton *radioButtonB;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(830, 512);
        pushButtonParse = new QPushButton(Widget);
        pushButtonParse->setObjectName(QStringLiteral("pushButtonParse"));
        pushButtonParse->setGeometry(QRect(170, 470, 75, 31));
        pushButtonXml = new QPushButton(Widget);
        pushButtonXml->setObjectName(QStringLiteral("pushButtonXml"));
        pushButtonXml->setGeometry(QRect(90, 20, 101, 31));
        textBrowserStruct = new QTextBrowser(Widget);
        textBrowserStruct->setObjectName(QStringLiteral("textBrowserStruct"));
        textBrowserStruct->setGeometry(QRect(300, 20, 511, 471));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 150, 267, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setMargin(1);

        horizontalLayout_2->addWidget(label);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 230, 281, 231));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 81, 16));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 210, 181, 16));
        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 150, 91, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtons2c = new QRadioButton(layoutWidget1);
        radioButtons2c->setObjectName(QStringLiteral("radioButtons2c"));
        radioButtons2c->setMaximumSize(QSize(41, 16777215));

        horizontalLayout->addWidget(radioButtons2c);

        radioButtonc2s = new QRadioButton(layoutWidget1);
        radioButtonc2s->setObjectName(QStringLiteral("radioButtonc2s"));

        horizontalLayout->addWidget(radioButtonc2s);

        pushButtonclear = new QPushButton(Widget);
        pushButtonclear->setObjectName(QStringLiteral("pushButtonclear"));
        pushButtonclear->setGeometry(QRect(30, 470, 75, 31));
        textEditPath = new QTextEdit(Widget);
        textEditPath->setObjectName(QStringLiteral("textEditPath"));
        textEditPath->setGeometry(QRect(10, 70, 281, 71));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 180, 121, 16));
        radioButtonCB = new QRadioButton(Widget);
        radioButtonCB->setObjectName(QStringLiteral("radioButtonCB"));
        radioButtonCB->setGeometry(QRect(140, 180, 89, 16));
        radioButtonB = new QRadioButton(Widget);
        radioButtonB->setObjectName(QStringLiteral("radioButtonB"));
        radioButtonB->setGeometry(QRect(230, 180, 61, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonParse->setText(QApplication::translate("Widget", "Parse", nullptr));
        pushButtonXml->setText(QApplication::translate("Widget", "Select xml path", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">Select Protocol Type</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">The path is:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">Input binary string:</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtons2c->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>sc</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtons2c->setText(QApplication::translate("Widget", "S2C", nullptr));
        radioButtonc2s->setText(QApplication::translate("Widget", "C2S", nullptr));
        pushButtonclear->setText(QApplication::translate("Widget", "Clear", nullptr));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">Select Data Type</span></p></body></html>", nullptr));
        radioButtonCB->setText(QApplication::translate("Widget", "Prefix+Body", nullptr));
        radioButtonB->setText(QApplication::translate("Widget", "Body", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
