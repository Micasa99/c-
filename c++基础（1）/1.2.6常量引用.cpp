#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//�������ã�ʹ�ó��������������βΣ���ֹ�����
void showValue(const int &val) {
	val = 1000;
	cout << "val=" << val << endl;

}
int main() {
	int a = 10;
	int& ref = 10;//����
	int& ref = a;//���ñ�����һ��Ϸ����ڴ�ռ�
	const int& ref = 10;//����const֮�󣬱������������޸�Ϊ int temp =10;
	 //                              int &ref=temp;
	int a = 100;
    showValue(a);

	system("pause");
	return 0;


}