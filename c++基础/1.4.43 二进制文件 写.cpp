#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 
//�򿪷�ʽָ��Ϊ ios::binary
//д�ļ� �������������³�Ա����write
//����ԭ�ͣ� ostream& write(const cahr* buffer,int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ� len�Ƕ�д���ֽ���

//
class Person {
public:
	char m_Name[64];//��c���Ե��ַ���������ַ���
	int m_Age;
};
void test01() {
	ofstream ofs("person.txt", ios::out | ios::binary);//�ڹ��촦ֱ��ָ��·���ʹ򿪷�ʽ
	//3.���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	//4.д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p,sizeof(Person));/*ǿ������ת��Ϊchar**/
	//5.�ر��ļ�
	ofs.close();



}
int main() {
	test01();
	return 0;
}
