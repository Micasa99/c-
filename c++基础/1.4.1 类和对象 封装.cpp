#define _CRT_SECURE_NO_WARNINGS 1
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*3.14*r
#include<iostream>
using namespace std;
const double PI = 3.14;
//class �������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
public:
	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
	;


};
int main() {
	//ͨ��Բ�� ���������Բ
	//ʵ���� ��ͨ��һ���ഴ��һ������
	Circle c1;
	//��Բ��������Խ��и�ֵ����
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

}
