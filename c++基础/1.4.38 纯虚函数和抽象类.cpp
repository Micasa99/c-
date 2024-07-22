#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//纯虚函数语法： virtual 返回值类型 函数名 (参数列表)=0;
//当类中有了纯虚函数，称为抽象类
//抽象类特点：1.无法实例化对象  2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//
class Base {
public:
	virtual void func() = 0;//纯虚函数语法： virtual 返回值类型 函数名 (参数列表)=0;


};
class Son :public Base
{
public:
	virtual void func() {
	//2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
		cout << "func函数的调用" << endl;
	}
};


void test01() {
	//Base b;
	//new Base;//抽象类无法实例化对象
	Base* base = new Son;
	base->func();

}
int main() {
	test01();
	return 0;
}