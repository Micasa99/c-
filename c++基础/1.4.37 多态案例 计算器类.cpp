#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//普通实现
class Calculator
{
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想扩展新的功能，需修改源码
		//在真实开发中提倡 开闭原则：对扩展进行开放，对修改进行关闭

		else if (oper == "/")
		{
			return m_Num1 /m_Num2;
		}
		

	}
	int m_Num1;
	int m_Num2;
};
//利用多态实现计算器
//实现计算器抽象类（基类）
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator {
public:
	/*可带virtual可不带*/virtual int getResult() {
		return m_Num1+m_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator {
public:

	/*可带virtual可不带*/virtual int getResult() {
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator {
public:

	/*可带virtual可不带*/virtual int getResult() {
		return m_Num1 * m_Num2;
	}
};
void test01() {
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
}
void test02() {
	//多态使用条件：父类的引用或指针指向子类对象
	AbstractCalculator* p2 = new AddCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "+" << p2->m_Num2 << "=" << p2->getResult() << endl;
	//用完后记得销毁
	delete p2;
	//减法运算
	p2 = new SubCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "-" << p2->m_Num2 << "=" << p2->getResult() << endl;
	delete p2;
	//乘法运算
	p2 = new MulCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "*" << p2->m_Num2 << "=" << p2->getResult() << endl;

}
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展和维护
int main() {
	test02();
	return 0;
}