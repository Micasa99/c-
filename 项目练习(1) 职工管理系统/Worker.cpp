#include "Worker.h"
class Employee :
    public Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDepName() = 0;


};