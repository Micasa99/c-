#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;
class Goodgay
{
public:
	void visit() {
		//参观函数
	}
	Building* building;

};
class Building
{
	friend void goodGay(Building* building);//goodGay全局函数是Building的好朋友，可以访问Building中的私有成员
public:
	Building()
	{
		m_SettingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SettingRoom;
private:
	string m_BedRoom;

};
//1.全局函数做友元
void goodGay(Building* building)
{
	cout << "好基友全局函数 正在访问："<<building->m_SettingRoom<<endl;
	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}
void test01() {

	Building building;
	goodGay(&building);


}