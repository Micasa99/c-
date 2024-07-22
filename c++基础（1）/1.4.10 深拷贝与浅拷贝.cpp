#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝工作
class Person
{
public:
	Person() {
		cout << "person的默认构造函数调用" << endl;
	}
	Person(int age,int height) {
		m_Age = age;
		m_Height=new int(height);//用new函数在堆区开辟 返回一个指针
		cout << "person的含参构造函数调用" << endl;
	}
	//自己实现拷贝构造函数解决浅拷贝带来的问题
	Person(const Person& p) {
		m_Age = p.m_Age;
	    //m_Height=p.m_Height;//编译器的默认浅拷贝实现
		m_Height = new int(*p.m_Height);//深拷贝操作
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person() //析构代码：将我们在堆区开辟的数据做释放的操作
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;//防止野指针出现
			//栈区先进后出 
			//浅拷贝带来问题 堆区内存重复释放
			//析 p2 p1为指向同一内存空间的两个不同指针，p2析构后p1指针仍指向被释放过了内存的区域，指针不为NULL，在调用析构函数时再次释放
			//利用深拷贝解决
		}
		cout << "person的析构函数调用" << endl;
	}

	int m_Age;
	int*  m_Height;//用指针 将身高的数据开辟到堆区


};
void test01() {
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age <<"身高为："<< *p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p1.m_Age <<"身高为：" << *p2.m_Height<<endl;

}
int main() {
	test01();
	return 0;
}
//总结：如果属性有在堆区开辟的，一定自己提供拷贝构造函数，防止浅拷贝带来的问题