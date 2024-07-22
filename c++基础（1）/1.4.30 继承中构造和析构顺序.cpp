#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Base {
public:
	Base()
		{
			cout << "Base 的构造函数" << endl;
		}
	~Base()
	{
		cout << "Base 的析构函数" << endl;
	}
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son 的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son 的析构函数" << endl;
	}

	int m_D;
};
void test01() {
	Son s;
}
//Base 的构造函数
//Son 的构造函数
//Son 的析构函数
//Base 的析构函数
//继承中先调用父类构造函数，再调用子类构造函数，析构顺序与之相反
int main() {
	test01();
	return 0;
}