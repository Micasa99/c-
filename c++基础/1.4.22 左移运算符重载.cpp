#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//左移运算符重载
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
	//1.利用成员函数重载左移运算符  operator<<(cout)  简化版本 p<<cout 反了
	//通常不使用成员函数重载运算符，因为无法实现cout在左侧
	void operator<<(Person& p) {

	}
private:
	int m_A;
	int m_B;
};
//2.利用友元函数重载<<
ostream& operator<<(ostream &cout,Person & p)//本质是  operator<<(cout,p) 简化为cout << p
{                         //cout: 标准输出流对象 ostream
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	return cout;

}               
void test01() {
	Person p(10, 10);
	cout << p;
	cout << p<<endl;//本质为链式编程思想 需在重构时返回 otream& cout 
}
int main(){
	test01();
	return 0;
}
//总结：左移运算符配合友元可以实现输出自定义数据类型