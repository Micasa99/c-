#pragma once
#include<iostream>
using namespace std;
#include"Employee.h"
#include"Manager.h"
#include"Worker.h"
#include"boss.h"
#include <fstream>
#define  FILENAME "empFile.txt"//用宏常量表明操作的文件
class WorkerManager
{
public:
	WorkerManager();

	~WorkerManager();
    //展示菜单
	void Show_Menu();
	//退出系统
	void ExitSystem();
	//增加职工
	void Add_Emp();
	//记录职工人数
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray;
	void save();
	//标志文件是否为空
	bool m_FileIsEmpty;
	//统计人数
	int get_EmpNum();
	//初始化员工
	void init_Emp();
	//显示职工
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);
	//修改职工
	void Mod_Emp();
	//查找职工
	void Find_Emp();
	//排序职工
	void Sort_Emp();
	//清空文件
	void Clean_File();
};

