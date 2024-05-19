//登陆界面 下级界面为管理员界面(adminwindow)和用户界面（userwindow)//
#ifndef SIGNWINDOW_H
#define SIGNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include <QMessageBox>
#include <QDebug>

#include "mycfsql.h"
#include "adminwindow.h"
#include "userwindow.h"

QT_BEGIN_NAMESPACE

class SignUi
{
public:
	QWidget* centralwidget;
	QVBoxLayout* verticalLayout;
	QGridLayout* gridLayout;
	QLabel* label_psw;
	QSpacerItem* horizontalSpacer_4;
	QSpacerItem* horizontalSpacer;
	QSpacerItem* horizontalSpacer_3;
	QLineEdit* lineEdit_2;
	QLineEdit* lineEdit;
	QSpacerItem* horizontalSpacer_2;
	QLabel* label_user;
	QHBoxLayout* horizontalLayout;
	QSpacerItem* horizontalSpacer_5;
	QPushButton* pushButton_login;
	QSpacerItem* horizontalSpacer_7;
	QPushButton* pushButton_signup;
	QSpacerItem* horizontalSpacer_6;
	QComboBox* comboBox;

	void setupUi(QMainWindow* MainWindow)
	{
		if (MainWindow->objectName().isEmpty())
			MainWindow->setObjectName("MainWindow");
		MainWindow->resize(361, 180);
		//声明 
		centralwidget = new QWidget(MainWindow);
		centralwidget->setObjectName("centralwidget");
		verticalLayout = new QVBoxLayout(centralwidget);
		verticalLayout->setObjectName("verticalLayout");

		gridLayout = new QGridLayout(centralwidget);
		gridLayout->setObjectName("gridLayout");
		gridLayout->setContentsMargins(0, 10, 0, 10);
		label_user = new QLabel(centralwidget);
		label_user->setObjectName("label_user");
		label_psw = new QLabel(centralwidget);
		label_psw->setObjectName("label_psw");
		label_psw->setMargin(10);
		lineEdit_2 = new QLineEdit(centralwidget);
		lineEdit_2->setObjectName("lineEdit_2");
		lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

		lineEdit = new QLineEdit(centralwidget);
		lineEdit->setObjectName("lineEdit");

		//ui大师，不排除一键生成
		horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
		horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

		gridLayout->addItem(horizontalSpacer,
			0, 0, 1, 1);
		gridLayout->addWidget(label_user,
			0, 1, 1, 1);
		gridLayout->addWidget(lineEdit,
			0, 2, 1, 1);
		gridLayout->addItem(horizontalSpacer_2,
			0, 3, 1, 1);

		gridLayout->addItem(horizontalSpacer_3,
			1, 0, 1, 1);
		gridLayout->addWidget(label_psw,
			1, 1, 1, 1);
		gridLayout->addWidget(lineEdit_2,
			1, 2, 1, 1);
		gridLayout->addItem(horizontalSpacer_4,
			1, 3, 1, 1);

		horizontalLayout = new QHBoxLayout(centralwidget);
		horizontalLayout->setObjectName("horizontalLayout");

		pushButton_login = new QPushButton(centralwidget);
		pushButton_login->setObjectName("pushButton_login");
		pushButton_signup = new QPushButton(centralwidget);
		pushButton_signup->setObjectName("pushButton_signup");

		horizontalLayout->addItem(horizontalSpacer_5);
		horizontalLayout->addWidget(pushButton_login);
		horizontalLayout->addItem(horizontalSpacer_7);
		horizontalLayout->addWidget(pushButton_signup);
		horizontalLayout->addItem(horizontalSpacer_6);

		comboBox = new QComboBox(centralwidget);
		comboBox->addItem(QString());
		comboBox->addItem(QString());
		comboBox->setObjectName("comboBox");

		verticalLayout->addLayout(gridLayout);
		verticalLayout->addLayout(horizontalLayout);
		verticalLayout->addWidget(comboBox, 0, Qt::AlignRight);

		MainWindow->setCentralWidget(centralwidget);

		retranslateUi(MainWindow);

		QMetaObject::connectSlotsByName(MainWindow);
	} // setupUi

	void retranslateUi(QMainWindow* MainWindow)
	{
		//全是不明意义的转义字符 *magic_num*
		//您写代码像混淆器
		MainWindow->setWindowTitle(QCoreApplication::translate(
			"MainWindow",
			"\346\225\231\345\256\244\347\263\273\347\273\237\347\231\273\345\275\225",
			nullptr));//改这里并不会影响窗口名称，可能有奇怪的耦合
		label_psw->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
		label_user->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
		pushButton_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
		pushButton_signup->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
		comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267", nullptr));
		comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));

	} // retranslateUi


};

QT_END_NAMESPACE


class SignWindow : public QMainWindow
{
	Q_OBJECT
private:
	MyCfSql cf;
	AdminWindow* adminWindow;
	UserWindow* userWindow;
public:
	SignWindow(QMainWindow* parent = nullptr);
	~SignWindow();

public slots:
	void logIn();   //登录函数
	void logOn();   //注册函数
};

#endif // SIGNWINDOW_H
