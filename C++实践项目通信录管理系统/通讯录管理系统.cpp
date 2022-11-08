#include <iostream>
using namespace std;
#include<string>

#include "Addressbook.h" //通讯录结构体写在头文件里
#include "Person.h"  //联系人结构体写在头文件里，方便其他分文件函数调用

#include"voidfunction.h" //几个功能的声明，头文件。

int main() 
{
	Addressbook adbooks;//创建通讯录结构体变量
	adbooks.bookSize = 0;//初始化通讯录中当前人员个数

	

	while (true)  //维持在这个界面
	{
		showMenu();
		int  select;	//创建用户选择输入的变量
		cout << "请输入要选择的操作代号" << endl;
		cin >> select;
		switch (select)
		{
		case 1://1.添加
			addperson(&adbooks); //地址传递，修饰实参
			break;
		case 2://2.显示
			showperson(&adbooks);
			break;
		case 3://3.删除
		{
			cout << "请输入要删除的联系人姓名：" << endl;
			string delname;
			cin >> delname;
			delperson(&adbooks, delname);
		}
			break;
		case 4://查找
		{
			cout << "请输入要查找的联系人姓名：" << endl;
			string findname;
			cin >> findname;
			findperson(&adbooks, findname);
		}
			break;
		case 5://修改
		{
			cout << "请输入要修改的联系人姓名：" << endl;
			string modifyname;
			cin >> modifyname;
			modifyperson(&adbooks, modifyname);
		}
			break;
		case 6://清空
		{
			//将记录的联系人数量置为0，逻辑清空即可
			cleanperson(&adbooks);
		}
			break;
		case 0://退出
		{
			cout << "欢迎下次使用" << endl;
			system("pause");//任意键继续
			return 0;//按任意键后退出
		}
			break;
		default:
		{
			cout << "输入有误，请输入0、1、...、6之一" << endl;
		}
			break;
		}
	}
	system("pause");
	return 0;
}