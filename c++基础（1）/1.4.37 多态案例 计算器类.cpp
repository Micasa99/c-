#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//��ͨʵ��
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
		//�������չ�µĹ��ܣ����޸�Դ��
		//����ʵ�������ᳫ ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�

		else if (oper == "/")
		{
			return m_Num1 /m_Num2;
		}
		

	}
	int m_Num1;
	int m_Num2;
};
//���ö�̬ʵ�ּ�����
//ʵ�ּ����������ࣨ���ࣩ
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalculator :public AbstractCalculator {
public:
	/*�ɴ�virtual�ɲ���*/virtual int getResult() {
		return m_Num1+m_Num2;
	}
};
//������������
class SubCalculator :public AbstractCalculator {
public:

	/*�ɴ�virtual�ɲ���*/virtual int getResult() {
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCalculator :public AbstractCalculator {
public:

	/*�ɴ�virtual�ɲ���*/virtual int getResult() {
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
	//��̬ʹ����������������û�ָ��ָ���������
	AbstractCalculator* p2 = new AddCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "+" << p2->m_Num2 << "=" << p2->getResult() << endl;
	//�����ǵ�����
	delete p2;
	//��������
	p2 = new SubCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "-" << p2->m_Num2 << "=" << p2->getResult() << endl;
	delete p2;
	//�˷�����
	p2 = new MulCalculator;
	p2->m_Num1 = 10;
	p2->m_Num2 = 10;
	cout << p2->m_Num1 << "*" << p2->m_Num2 << "=" << p2->getResult() << endl;

}
//��̬�ŵ㣺������֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չ��ά��
int main() {
	test02();
	return 0;
}