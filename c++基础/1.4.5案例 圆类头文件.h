#pragma once
#include<iostream>
#include"1.4.5���� ����ͷ�ļ�.h"
using namespace std;
class Circle {
public:
	void setR(int r);
	int getR();
	void setCenter(Point center)
		;
	Point getCenter()
		;
private:
	int m_R;
	Point m_Center;//���п�����һ����������Ա

};

