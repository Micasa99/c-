#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//��������ͬ����߸�����
//1��ͬһ�������£�
// 2������������ͬ��
// 3��������������/����/˳��ͬ
//�����ķ���ֵ��������Ϊ�������ص�����
void func(int a) {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "func�ĵ���1" << endl;
}
void func() {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "func�ĵ���2" << endl;
}
void func(double a) {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "func�ĵ���3" << endl;
}
void func(int a,double b) {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "func�ĵ���4" << endl;
}
void func(double b ,int a) {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "func�ĵ���5" << endl;
}
int main() {
	func(10);
	system("pause");
	return 0;
}