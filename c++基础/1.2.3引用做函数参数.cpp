#define _CRT_SECURE_NO_WARNINGS 1
//��������ʱ�����������������β�����ʵ��

#include<iostream>
using namespace std;
//��������
//1.ֵ����
void mySwap01(int a, int b) {
	int temp = a;
		a = b;
		b = temp;
		cout << "Swap01a=" << a << endl;
		cout << "Swap01b=" << b << endl;
}
//2.��ַ����
void mySwap02(int*a,int*b) {
	int temp = *a;
		* a = *b;
		*b = temp;
}

//3.���ô���:�βλ�����ʵ��
void mySwap03(int&a,int&b) //�������β�a�����庯����ʵ��a�ı���
{
	int temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 10;
	int b = 20;
	mySwap01;
	mySwap02(&a, &b);
	mySwap03(a, b);//ע�����ò���д��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;

}
