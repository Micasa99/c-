#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//1.��Ҫ���ؾֲ�����������
int& test01() {

	int a = 0;//�ֲ������洢�������е� ջ��
	return  a;


}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {

	static int a = 0;//static����̬�����ؼ��ʣ���̬���������ȫ������ȫ�����ϵ������ڳ������������ͨ�ͷ�
	return  a;


}
int main() {
	int& ref = test01();
	cout << "ref=" << ref << endl;//��һ�ν����ȷ����ӦΪ���������˱���
	cout << "ref=" << ref << endl;
	int& ref2 = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;//���ν������ȷ
	//2.�����ĵ��ÿ�����Ϊ��ֵ
	test02() = 1000;
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;


}
