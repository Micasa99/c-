#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//1��new�Ļ����﷨
int* func() {
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;

}
void test01() {

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����٣������ͷţ�������ͷ��ùؼ���delete
	//delete p;
	//cout << *p << endl;//��ȡ����Ȩ�޳�ͻ���ڴ��Ѿ����ͷ�
}
//2���ڶ�����new��������
int* func()
{
	int* a = new int(10);
	return a;
}
void test02() {
	//����10���������ݵ����飬�ڶ���
	int*arr = new int[10];//10����������ʮ��Ԫ��
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;//��ʮ��Ԫ�ظ�ֵ100��109
	}
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<endl;
		//�����ͷ�����
		//�ͷ�����ʱҪ��[]
		delete[] arr;


	}

}
int main() {
	test01;
	test02;

}