#define _CRT_SECURE_NO_WARNINGS 1
//�����β�
#include<iostream>
using namespace std;
//������Ĭ�ϲ���
int func(int a, int b=20, int c=30) {
	//Ĭ��ֵֻ�ܷ��ں���
	return a + b + c;
	

}
//1)���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ����������Ҷ�������Ĭ�ϲ���
//2�����������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ��һ����Ĭ�ϲ���
int func2(int a=10, int b=10);
int func2(int a=10, int b=10) //�ض����Ĭ�ϲ����������ԡ�
{

	return a + b;


}
int main() {
	cout << func(10) << endl;
	cout << func(10,30) << endl;//����Լ����������ô��������
	cout << func2(10) << endl;

	system("pause");
	return 0;
}