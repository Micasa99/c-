#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//ʹ�ÿ����������캯����ʱ��
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
// 2.ֵ���ݵķ�ʽ������������ֵ
// 3.ֵ��ʽ���ؾֲ�����
//
class Person
{public:
	Person() {
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "person�ĺ��ι��캯������" << endl;
	}
	Person(const Person &p) {
		m_Age = p.m_Age;
		cout << "person�Ŀ������캯������" << endl;
	}
	~Person() {
		cout << "person��������������" << endl;
	}

	int m_Age;


};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ����һ������
void test01() {
	Person p1(20);
	Person p2(p1);
	cout << "p2������Ϊ" << p2.m_Age << endl;

};
// 2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{
	;
}
void test02(){
	Person p;
	doWork(p);

}
// 3.ֵ��ʽ���ؾֲ�����

Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;

	return p1;

}
void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;

}
int main() {
	test03();
	
	return 0;

}