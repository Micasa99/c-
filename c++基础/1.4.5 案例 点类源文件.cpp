#define _CRT_SECURE_NO_WARNINGS 1
#include"1.4.5案例 点类头文件.h"
		

void Point::setX(int x)//piont作用域下的成员函数
{
	m_X = x;
}
int Point::getX()
{
	return m_X;
}
void Point::setY(int y) {
	m_Y = y;
}
int Point::getY()
{
	return m_Y;
}
