#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//���� Ĭ�ϵķ���Ȩ�޲�ͬ
//struct Ĭ�Ϸ���Ȩ��Ϊ����
// class Ĭ�Ϸ���Ȩ��Ϊ˽��
class C1
{
	int m_A;//Ĭ��Ȩ��Ϊ˽��


};
struct C2
{

	int m_A;//Ĭ��Ȩ��Ϊ����
};

int main() {
	C1 c1;
	c1.m_A = 100;
	C2 c2;

	c2.m_A = 100;
	return 0;
}