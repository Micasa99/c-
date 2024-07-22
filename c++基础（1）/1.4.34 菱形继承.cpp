#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Animal {
	
public:
	int m_Age;

};
//利用虚继承解决菱形继承的问题：在继承前加关键字virtual
class Sheep :virtual public Animal//成为虚基类---->继承内容变为 vbptr：虚基类指针  v-virtual  b -base  ptr-pointer
	                                                           //指向vbtable:虚基类表 记录偏离量  

{

};
class Tuo:virtual public Animal
{


};
class SheepTuo :public Sheep, public Tuo {


};
void test01(){
	SheepTuo st;
	st.Sheep::m_Age = 18;//不明确
	st.Tuo::m_Age = 28;
	cout << st.Sheep::m_Age << endl;//需要加以作用域区分
	//virtual:28
	//菱形继承导致数据有两份 浪费！
}