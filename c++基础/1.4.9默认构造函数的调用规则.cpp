#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//���캯���ĵ��ù���
// 1.����һ���� ���������ÿ���඼�����������������
// ��1��Ĭ�Ϲ��� ��ʵ��
// ��2������ ��ʵ��
// ��3���������� ֵ����
class Person
{
public:
	Person() {
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "person�ĺ��ι��캯������" << endl;
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "person�Ŀ������캯������" << endl;
	}
	~Person() {
		cout << "person��������������" << endl;
	}

	int m_Age;


};
void test01() {
	Person p;
	p.m_Age = 18;
	Person p2(p);
	cout << "p2 age:" << p2.m_Age << endl;
}
//����û������вι��캯����c++�����ṩĬ���޲ι��죬�����ṩĬ�Ͽ������쿽������
// ����û����忽�����캯�� c++�������ṩ�������캯��
// 
// 
void test02() {
	Person p2(28);
	Person p3(p2);
}
int main() {

	test01();
}
