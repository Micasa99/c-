#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//ռλ����
//����ֵ���� ���������������ͣ�{}
void func(int a,int/*ռλ*/) {
	//Ĭ��ֵֻ�ܷ��ں���
	cout << "this is func" <<endl;


}
//Ŀǰ�׶�ռλ�����ò���
//ռλ������������Ĭ�ϲ���
int main() {
	func(10,10);
	system("pause");
	return 0;
}