#define _CRT_SECURE_NO_WARNINGS 1
#include"1.4.5案例 圆类头文件.h"


	void Circle::setR(int r) {
		m_R = r;
	}
	int Circle::getR() {
		return m_R;
	}
	void Circle::setCenter(Point center)
	{
		m_Center = center;
	}
	Point Circle::getCenter()
	{
		return m_Center;
	}
