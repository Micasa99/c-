#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//��Ա��������Ϊ˽���ŵ㣺
// 1�������Լ����ƶ�дȨ��
//2�����Լ�����ݵ���Ч��
						
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_name = name;
	}
	//������
	string getName() {
		return m_name;
	}
	//������
	int getage() {


		return m_age;
	}
	//д����
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "���丳ֵ���󣬸�ֵʧ��" << endl;
			return;

		}
		m_age = age;


	 }
	//дż��
	void setIdol(string idol)
	{
		m_Idol = idol;

	}
private:
	string m_name;//���� �ɶ���д
	int m_age=18;   //���� ֻ�� ��0-100��Χ�ڿ�д
	string m_Idol;//ż�� ֻд

};
int main() {
	Person p1;
	//��������
	p1.setName("����");
	cout << p1.getName() << endl;
	cout << p1.getage() << endl;
	p1.setIdol("С��");
}

