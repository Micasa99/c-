#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//����
// 1���в� �޲� 
// 2����ͨ���� ��������
//
class Person
{
public:
	//���캯��
	Person() {
		cout << "Person���޲Σ�Ĭ�ϣ����캯���ĵ���" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person &p) {
		//������������ϵ��������ԣ�������������
		age = p.age;
	cout << "Person�Ŀ������캯���ĵ���" << endl;
}
	//��������
	~Person() {
		cout << "Person��������������" << endl;
	}
	int age;
};
//����
void test01() {
	//1.���ŷ�
	Person p1;//Ĭ�Ϲ��캯������
	Person p2(10);//�вι��캯������
	Person p3(p2);//�������캯������
	cout << "p2������Ϊ" << p2.age << endl;
	cout << "p3������Ϊ" << p3.age << endl;
	//ע������
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	//��Ϊ�������д���,����������Ϊ��һ��������������������Ϊ�ڴ�������
	// Person p1();
	//2.��ʾ��
	Person p1;
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������
	           //�Ⱥ��Ҳࣺ��������
	Person(10);//��ǰ�н�����ϵͳ���������յ���������
	//ע��2.  ��Ҫ���ÿ������캯�� ��ʼ����������
	Person(p3);//����������Ϊ Peron(p3)==Person p3;���������

	//3.��ʽת����
	Person p4 = 10;//�൱��д�� Person p4=person(10)//�вι���
	Person p5 = p4;//��������
	
}
int main() {
	test01();
	//system("pause");
	return 0;


}