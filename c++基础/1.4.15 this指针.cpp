#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//��;
//1.���βκͳ�Աͬ��ʱ ����thisָ��������

// 2.����ķǾ�̬��Ա�з��ض�������ʹ��return *this


//1.������Ƴ�ͻ
class Person
{
public:
	Person(int age) {
		this->age = age;
		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
	}
	int age;
// 2.����ķǾ�̬��Ա�з��ض�������ʹ��return *this
	
	Person& PersonAddAge(Person &p)//���ر����������õķ�ʽ����
	{
		this->age += p.age;
		return *this;
		//thisΪָ��p2��ָ�룬��*thisָ��ľ���p2�������
	}
	Person PersonAddAge2(Person& p)//����Person ����ÿ������캯�� ��ʽ���ú�����Ϊ20
	{
		this->age += p.age;
		return *this;
		//thisΪָ��p2��ָ�룬��*thisָ��ľ���p2�������
	}
};
void test01() {
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;

}
void test02() {
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ���˼�룡
	cout << "p2������Ϊ��" << p2.age << endl;
}




int main() {
	test02();

}