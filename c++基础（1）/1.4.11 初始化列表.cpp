#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	//传统初始化操作
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/
	//利用初始化列表
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c) 
	{

	}
	int m_A;
	int m_B;
	int m_C;

};
void test01() {
	//Person p(10, 20, 30);
	Person p(30,20,10);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
}
int main() {


}