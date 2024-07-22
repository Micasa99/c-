#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;//提前声明
class GoodGay
{
public:
	GoodGay();
	void visit01();//可以访问Building中的私有成员
	void visit02();//不可以访问Building中的私有成员
	Building* building;

};
class Building
{
	friend void GoodGay::visit01(); //类中成员函数做友元
	Building();

public:
	string m_SettingRoom;
private:
	string m_BedRoom;

};
Building::Building() {
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
};
GoodGay::GoodGay() {
	//创建建筑物对象
	building = new Building;
};
//类外实现成员函数：

void GoodGay::visit01() {
	cout << "好基友正在访问：" << building->m_SettingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;

};
void GoodGay::visit02() {
	cout << "好基友正在访问：" << building->m_SettingRoom << endl;

};

void test01() {
	GoodGay gg;
	gg.visit01();

}
int main() {
	test01();
}
