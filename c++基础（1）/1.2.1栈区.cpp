#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//ջ�����ݵ�ע������
//ջ���������ɱ�����������ͷ�
// ��Ҫ���ؾֲ������ĵ�ַ
//
int* func( int b )//�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ������������ջ����ջ����������ִ������Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ

}
int main() {
	int* p = func(10);
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
	cout << *p << endl;//ջ�����������δ����
	system("pause");
	return 0;



}