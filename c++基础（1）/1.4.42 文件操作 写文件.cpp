#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
#include<fstream> //�����ļ���
//�ļ����ͷ�Ϊ���֣�
// 1.�ı��ļ�:�ļ����ĵ�ASCLL����ʽ�洢�ڼ������
//2.�������ļ����ļ����ı��Ķ�������ʽ�����ڼ�����У��û�һ�㲻��ֱ�Ӷ�ȡ
//�����ļ�������
//1. <ofstream>:д����
//2.<ifstream>:������
//3.<fstream>:��д����

//�ı��ļ���
//д�ļ�
//����
//1.����ͷ�ļ���
//#include<ftream>
//2.����������
//ofstream ofs;
//3.���ļ�
//ofs.open("�ļ�·��", �򿪷�ʽ)
// �򿪷�ʽ��
// ios::in              Ϊ���ļ������ļ�  
// ios::out             Ϊд�ļ������ļ�  
// ios::ate             ����λ�ã��ļ�β
// ios::app             ׷�ӷ�ʽд�ļ�
// ios::trunc           ����ļ�������ɾ�����ٴ���
// ios::binary          �������ļ�
// ע�⣺�ļ��򿪷�ʽ�������ʹ�ã���|������
// EX�� �ö����Ʒ�ʽд�ļ� ios::binary| ios::out
// 
//4.д����
//ofs << "д�������"
//5.�ر��ļ�
//ofs.close();

//�ı��ļ���д�ļ�
void test01() {
	//����������
	ofstream ofs;
	//ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	//�ر��ļ�
	ofs.close();
	//��ָ��Ĭ�ϴ�������Ŀ�ļ���
}
int main() {
	test01();
	system("pause");
	return 0;
}