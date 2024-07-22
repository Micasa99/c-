#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//递增运算符
 //int a=10;
 //cout<<++a<<endl;//11
 //cout << a << endl;//11
 //int b = 10;
 //cout << b++ << endl;//10
 //cout << b << endl;//11
//重载递增运算符
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
public:
	//重载前置++运算符
	MyInteger& operator++()//&的使用为满足链式法则 返回引用一直对一个数据进行递增操作
	{
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}
	//重载后置++运算符
	MyInteger//后置递增返回值！否则temp局部变量释放
		operator++(int)//无法重载仅按返回类型区分的函数
		                //int代表占位参数，用于区分前置和后置递增
	{
		//先 记录返回结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};
//重载<<运算符：
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;
	return cout;
}


void test01() {
	MyInteger myint;
	cout<< myint<<endl;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint++ << endl;
	cout << myint << endl;
	//cout << (myint++)++ << endl;未实现
}
int main() {
	test01();
	return 0;
}