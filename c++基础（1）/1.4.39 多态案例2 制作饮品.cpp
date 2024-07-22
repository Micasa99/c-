#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	//������Ʒ
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//��������
class Coffee :public AbstractDrinking {
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
};
//������Ҷ
class Tea :public AbstractDrinking {
	//��ˮ
	virtual void Boil() {
		cout << "���Ȫˮ" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�������" << endl;
	}
};
//��������
void doWork(AbstractDrinking* abs) {
	abs->makeDrink();//������ͬ��Ʒ��ͬһ�ӿ�
	delete abs;//�ͷ�
}
void test01() {
	//��������
	doWork(new Coffee);//AbstractDringking *abs=new coffee ����ָ��ָ��������� ���õ��Ǹ���dowork���� ���������и�������ʵ�ֶ�������д���� ���Զ�Ӧ�����еľ���ʵ��
	//������ˮ
	doWork(new Tea);

}
int main() {
	test01();
	return 0;
}