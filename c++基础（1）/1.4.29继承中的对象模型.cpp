#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base1
{
public:

	int m_D;
};
void test02() {
	
	cout << "size of Son =" << sizeof(Son) << endl;
               //16    �ڸ��������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ��ռ���ڴ�ռ�
	           //      �������е�˽�����Ա������������أ��޷����ʣ����̳���ռ�ÿռ�
}
//���ÿ�����Ա������ʾ���߲鿴����ģ��  //Developer Command Promt for vs2022
// ��ת�̷�
// ��ת�ļ�·��
// cd ����·��
// cl /d1 reportSingleClassLaout���� �ļ���
