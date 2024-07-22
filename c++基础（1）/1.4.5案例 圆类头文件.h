#pragma once
#include<iostream>
#include"1.4.5案例 点类头文件.h"
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
	Point m_Center;//类中可用另一类做函数成员

};

