#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	//���е����Ժ���Ϊͳһ��Ϊ��Ա��
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
public:
	//����
	string m_name;
	int m_Id;

	//��Ϊ
	void showStudent()
	{
		cout << "name:" << m_name << "id:" << m_Id << endl;

	}
	//��ʾ������ѧ��
	//��������ֵ
	void setName(string name)
	{
		m_name = name;


	}

	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{
		m_Id = id;


	}
};
//ͨ���ഴ��һ������ѧ�� ��ʵ��������
int main() {
	Student s1;
	s1.m_name = "����";
	s1.m_Id = 1;
	s1.showStudent();
	Student s2;
	s2.setName("����");//ͨ����Ϊ�����Ը�ֵ
	s2.m_Id = 2;
	s2.showStudent();
	return 0;



}