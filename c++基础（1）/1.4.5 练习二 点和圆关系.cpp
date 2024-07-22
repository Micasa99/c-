#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include"1.4.5案例 圆类头文件.h"
#include"1.4.5案例 点类头文件.h"
//class Point
//{
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//
//};
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;//类中可用另一类做函数成员
//
//};
void isInCircle(Circle &c,Point &p) {
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	if(distance==rDistance)
	{
		cout << "点在圆上" << endl;
	}
	if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	if (distance < rDistance)
	{
		cout << "点在园内" << endl;
	}

}
int main() {
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	Point p;
	p.setX(10);
	p.setY(10);
	isInCircle(c, p);
}