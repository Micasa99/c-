#define _CRT_SECURE_NO_WARNINGS 1
//设计一个圆类，求圆的周长
//圆求周长的公式：2*3.14*r
#include<iostream>
using namespace std;
const double PI = 3.14;
//class 代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
public:
	//属性
	//半径
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
	;


};
int main() {
	//通过圆类 创建具体的圆
	//实例化 （通过一个类创造一个对象）
	Circle c1;
	//给圆对象的属性进行赋值操作
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;

}
