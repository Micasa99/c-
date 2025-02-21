#define _CRT_SECURE_NO_WARNINGS 1
//对已有的运算符进行重新定义，赋予其另一种功能，以适应不同的数据类型
#include<iostream>
using namespace std;
#include<string>
//加号运算符的重载
class Person
{
public:
	int m_A;
	int m_B;
//1.成员函数重载加号
	
	/*  Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
};
//2.全局函数重载加号
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//函数重载版本
Person operator+(Person& p1,int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person p3 = p1 + p2;
	//1.成员函数重载本质调用：Person p3=p1.operator+(p2);//也可正常运行
	//2.全局函数重载本质调用：Person p3=operator+(p1,p2);
	//运算符重载也可以发生函数重载
	//Person p3=p1+10
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
}