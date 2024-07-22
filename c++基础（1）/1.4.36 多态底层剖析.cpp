#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
public:
	virtual/*�麯���ؼ���*/ void speak() {
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal {
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;

	}
};
void doSpeak(Animal& animal)
{
	animal.speak();
}
void test01() {
	Cat cat;
	doSpeak(cat);
}

int main() {
	test01();
	return 0;
}
void test02() {
	cout << "sizeof Animal" << sizeof(Animal) << endl;
	//��������� ��СΪ1�ֽ�
	//+virtual�� ��СΪ4�ֽ�--->ָ���СΪ4�ֽ�
	//
}
//Animal���ڲ��ṹ��    vfptr  virtual function pointer �麯������ָ��
//                        |
                          /*|
                        vftable     virtual function table �麯����  ���ڲ���¼һ���麯���ĵ�ַ
							                               &Animal::speak*/
//Cat���ڲ��ṹ��       vfptr  virtual function pointer �麯������ָ��
//                        |
                          |
//                        vftable     virtual function table �麯����  ���ڲ���¼һ���麯���ĵ�ַ
//							                               &Animal::speak------->&Cat::speak
//                                    ��д����������д�ĸ�����麯����������麯�����ڲ����滻��������麯����ַ
                                             �������ָ�������ָ������Ķ����ǣ��ͷ����˶�̬
							                  
							                        Animal & animal=cat
							                        animal.speak()
