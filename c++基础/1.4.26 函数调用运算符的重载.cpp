#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//���º�����
//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test) {
	cout << test << endl;
}
void test01()
{
	MyPrint myPrint;
	myPrint("hello world!");//����ʹ�������ǳ������ں������� ��˳�Ϊ�º���
	MyPrint02("hello world!");
}
//�º����ǳ���� ����û�й̶���ʹ�÷���
//�ӷ���
class MyAdd {
public:
	int operator()(int num1,int num2) {
		return num1 + num2;

	}
};
void test02() {
	MyAdd myadd;
	int ret =myadd(100, 100);
	cout << "ret=" << ret << endl;
	//������������
	cout << MyAdd()(100, 100)//MyAdd()�������������󣬵�ǰ��ִ������������ͷ�
		<< endl;
}
int main() {
	test01();
	test02();
	return 0;

}