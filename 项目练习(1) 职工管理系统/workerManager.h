#pragma once
#include<iostream>
using namespace std;
#include"Employee.h"
#include"Manager.h"
#include"Worker.h"
#include"boss.h"
#include <fstream>
#define  FILENAME "empFile.txt"//�ú곣�������������ļ�
class WorkerManager
{
public:
	WorkerManager();

	~WorkerManager();
    //չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();
	//����ְ��
	void Add_Emp();
	//��¼ְ������
	int m_EmpNum;
	//Ա�������ָ��
	Worker** m_EmpArray;
	void save();
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	//ͳ������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾְ��
	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);
	//�޸�ְ��
	void Mod_Emp();
	//����ְ��
	void Find_Emp();
	//����ְ��
	void Sort_Emp();
	//����ļ�
	void Clean_File();
};

