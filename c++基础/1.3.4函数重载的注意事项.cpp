#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//1.������Ϊ�������ص�����

void func(int &a) {
	
	cout << "func��int &a������" << endl;


}
void func(const int& a) //���Ͳ�ͬ������
{

	cout << "func��const int &a������" << endl;
}

//2.������������Ĭ�ϲ���
void func2(int a,int b=10) {
	cout << "func2(int a)�ĵ���" << endl;
}
void func2(int a) {
	cout << "func2(int a)�ĵ���" << endl;
}
int main() {
	int a = 10;
	func(a);//���õ�Ϊ func(int &a)
	func(10);//���õ�Ϊfunc(const int& a)     const int &a=10;��const��������Զ��Ż�


	func2(10);
	system("pause");
	return 0;
}