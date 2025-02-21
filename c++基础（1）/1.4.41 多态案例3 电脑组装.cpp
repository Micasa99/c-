#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//抽象不同零件类
//抽象cpu类
class CPU
{
public:
	//抽象计算函数
	virtual void calculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象计算函数
	virtual void display() = 0;
};
//抽象内存条类
class Memory
{
public:
	//抽象计算函数
	virtual void storage() = 0;
};
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作函数
	void work() {
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数释放电脑零件
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;     //CPU的零件指针
	VideoCard* m_vc;//显卡的零件指针
	Memory* m_mem;  //内存条的零件指针


};
//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	virtual void calculate() {
		cout<<"Intel的CPU开始计算"<<endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示" << endl;
	}
};

class IntelMemory : public Memory
{
public:
	virtual void storage() {
		cout << "intel内存条开始存储" << endl;
	}
};
//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算" << endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:

	virtual void dispaly()
	{
		cout << "Lenovo的显卡开始显示" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage() {
		cout << "Lenovo内存条开始存储" << endl;
	}
};
void test01() {
	//第一台电脑零件
	cout << "第一台电脑开始工作" << endl;
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
	//第二胎电脑组装
	cout << "第二台电脑开始工作" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard , new LenovoMemory);
	computer2->work();
	delete computer2;
}
int main() {
	test01();
	return 0;
}