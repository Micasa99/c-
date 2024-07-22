#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
//头文件中只声明 源文件中实现
class Point
{
public:
	void setX(int x);

	int getX();
	void setY(int y);
	int getY();
private:
	int m_X;
	int m_Y;
};