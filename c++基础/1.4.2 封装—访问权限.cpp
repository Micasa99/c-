#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//����Ȩ��
//����
// ����Ȩ�� public  ��Ա������������ɷ���
// ����Ȩ�� protected ��Ա���ڿ��Է��� ���ⲻ�ɷ��� ���ӿ��Է��ʸ����еı�������
// ˽��Ȩ�� private  ��Ա���ڿ��Է��ʣ����ⲻ�ɷ��� ���Ӳ���
// 
// 
class Person
{
public:
	//����Ȩ��
	string m_name;
protected:
	string m_car;
	//
private:
	int m_Password;
public:
	void func() {
		m_name = "����";
		m_car = "������";
		m_Password = 123456;


	}
	//


};
int main() {
	//ʵ����
	Person p1;
	p1.m_name = "����";
	p1.m_car = "benz";//������˽��Ȩ�޳�Ա�����޷�����
	p1.m_Password = 123;
	return 0;

}