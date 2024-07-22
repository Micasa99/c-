#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//立方体类
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}
	int calculateS() {

		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
	}
	int calculateV() {

		return  m_L * m_W *m_H;
	}
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == m_L && c.getW() == m_W && c.getH() == m_H)
		{
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
	
};
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}
int main() {
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	cout << c1.calculateS() << endl;
	cout << c1.calculateV() << endl;
	Cube c2;
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "same" << endl;

	}
	else
	{
		cout << "diffenet" << endl;
	}
	ret = c1.isSameByClass(c2);//利用成员函数判断
	if (ret)
	{
		cout << "same" << endl;

	}
	else
	{
		cout << "diffenet" << endl;
	}
}