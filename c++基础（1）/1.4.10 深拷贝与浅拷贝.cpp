#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������
class Person
{
public:
	Person() {
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age,int height) {
		m_Age = age;
		m_Height=new int(height);//��new�����ڶ������� ����һ��ָ��
		cout << "person�ĺ��ι��캯������" << endl;
	}
	//�Լ�ʵ�ֿ������캯�����ǳ��������������
	Person(const Person& p) {
		m_Age = p.m_Age;
	    //m_Height=p.m_Height;//��������Ĭ��ǳ����ʵ��
		m_Height = new int(*p.m_Height);//�������
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person() //�������룺�������ڶ������ٵ��������ͷŵĲ���
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;//��ֹҰָ�����
			//ջ���Ƚ���� 
			//ǳ������������ �����ڴ��ظ��ͷ�
			//�� p2 p1Ϊָ��ͬһ�ڴ�ռ��������ָͬ�룬p2������p1ָ����ָ���ͷŹ����ڴ������ָ�벻ΪNULL���ڵ�����������ʱ�ٴ��ͷ�
			//����������
		}
		cout << "person��������������" << endl;
	}

	int m_Age;
	int*  m_Height;//��ָ�� ����ߵ����ݿ��ٵ�����


};
void test01() {
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age <<"���Ϊ��"<< *p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2������Ϊ��" << p1.m_Age <<"���Ϊ��" << *p2.m_Height<<endl;

}
int main() {
	test01();
	return 0;
}
//�ܽ᣺����������ڶ������ٵģ�һ���Լ��ṩ�������캯������ֹǳ��������������