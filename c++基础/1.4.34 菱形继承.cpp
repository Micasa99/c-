#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Animal {
	
public:
	int m_Age;

};
//������̳н�����μ̳е����⣺�ڼ̳�ǰ�ӹؼ���virtual
class Sheep :virtual public Animal//��Ϊ�����---->�̳����ݱ�Ϊ vbptr�������ָ��  v-virtual  b -base  ptr-pointer
	                                                           //ָ��vbtable:������ ��¼ƫ����  

{

};
class Tuo:virtual public Animal
{


};
class SheepTuo :public Sheep, public Tuo {


};
void test01(){
	SheepTuo st;
	st.Sheep::m_Age = 18;//����ȷ
	st.Tuo::m_Age = 28;
	cout << st.Sheep::m_Age << endl;//��Ҫ��������������
	//virtual:28
	//���μ̳е������������� �˷ѣ�
}