#define _CRT_SECURE_NO_WARNINGS 1
//1.���ñ����ʼ��
//2.����һ����ʼ���󲻿��Ը���
#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int& b = a;
	//1.���ñ����ʼ��
	//int &b���﷨����
//2.����һ����ʼ���󲻿��Ը���
	int c = 20;
	b = c;//��ֵ�������Ϸ�
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;


}
