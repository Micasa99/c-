#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
//ͷ�ļ���ֻ���� Դ�ļ���ʵ��
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