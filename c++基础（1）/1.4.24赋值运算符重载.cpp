#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//c++编译器至少给一个类添加4个函数
//
//1. 默认构造函数(无参，函数体为空)
//2. 默认析构函数(无参，函数体为空)
//3. 默认拷贝构造函数，对属性进行值拷贝
//4. 赋值运算符 operator=, 对属性进行值拷贝
class Person
{
public:
	Person(int age)
	{
		m_Age=new int(age);
	}
	int* m_Age;
	~Person()
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载
	Person&//返回引用即为本身
		operator=(Person& p)
	{//编译器提供浅拷贝
		//m_Age=p.m_Age;

		//应该先判断是否有属性在堆区，如果有，先释放干净
		if(m_Age!=NULL)
		{
			delete m_Age;
		}
		m_Age = new int(*p.m_Age);//即实现深拷贝
		return *this;
	}
};


void test01() {
	Person p1(18);
	cout << "p1 age:" << *p1.m_Age << endl;//创建在堆区
	Person p2(20);
	cout << "p2 age:" << *p2.m_Age << endl;
	p2 = p1;//赋值操作
	cout << "p1 age:" << *p1.m_Age << endl;
	cout << "p2 age:" << *p2.m_Age << endl;//重复释放同一堆区内存空间  解决方案：利用深拷贝解决浅拷贝带来的问题
	Person p3(30);
	cout << "p3 age:" << *p3.m_Age << endl;
	p3 = p2 = p1;//从右向左
	cout << "p3 age:" << *p3.m_Age << endl;


}
int main() {
	test01();
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//a = b = c;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//cout << "c=" << c << endl;
	return 0;
}