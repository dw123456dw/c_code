#include "MyPushButton.h"


MyPushButton::MyPushButton(QWidget* parent):QPushButton(parent)
{
	std::cout << "我的按钮的构造" ;
}

MyPushButton::~MyPushButton()
{
	std::cout << "我的按钮的析构" ;
}