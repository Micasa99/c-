#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//��̬ʹ��ʱ����������������Կ����ڶ�������ô����ָ�����ͷ�ʱ�޷������������������
//����������������е�����������Ϊ���������ߴ�������
//�������ʹ�����������:
//1.���Խ������ָ���ͷ��������
//2.����Ҫ�о���ĺ���ʵ��
//�������ʹ�����������
//����Ǵ����������������ڳ����࣬�޷�ʵ��������
//
//
//
class Animal
{
public:
	Animal() {
		cout << "Animal�Ĺ��캯���ĵ���" << endl;
	}
	//virtual ~Animal()//������ �������ָ���ͷ�������󲻸ɾ�������
	//{
	//	cout << "Animal�������������ĵ���" << endl;
	//}
	virtual ~Animal() = 0;//��������---->��������޷��������ⲿ����  ȱ�����������ľ���ʵ��
	                      //����������Ҫ����Ҳ��Ҫ����ʵ��
	                      //���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual void speak() = 0;

};
Animal:: ~Animal() 
{
	cout << "Animal�Ĵ������������ĵ���" << endl;
}
class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat�Ĺ��캯���ĵ���" << endl;
		m_Name =new string(name);//�ڶ�������������

	}
	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat�����������ĵ���" << endl;  
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void speak() {
		cout <<*m_Name <<"Сè��˵��" << endl;
	}
	string* m_Name;

};
void test01() {
	Animal* animal = new Cat("Tom");
	//δ����Cat���������� ��Ϊ�Ǹ���ָ��ָ��������� ����ָ��������ʱ�������������������������������������ж������ԣ������ڴ�й©
	//�����������Animal����������Ϊ������
	animal->speak();
	delete animal;
}
int main() {
	test01();
	return 0;
}