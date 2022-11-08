#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>

void addperson(Addressbook *adbooks) //添加联系人功能
{
	if (adbooks->bookSize == Max)//首先判断通讯录是否已满，满则不添加
	{
		cout << "通讯录中联系人已满（1000人），请执行其他操作" << endl;
		return;
	}
	else
	{
		//定义参数类型、默认值，当调用添加函数时;
		string addname = "空";
		string addsex = "空";
		int      addage = 0;
		string addphone_number = "空";
		string addhome_address = "空";

		//让用户赋值；
		//姓名
		cout << "请输入联系人姓名" << endl;
		cin >> addname;
		//性别
		cout << "请输入联系人性别(男女)" << endl;
		while (true)
		{
			cin >> addsex;
			if (addsex == "男" || addsex == "女")
			{
				break;
			}
			else
			{
				cout << "请重新输入：男或者女" << endl;
			}
		}
		//年龄
		cout << "请输入联系人年龄(整数)" << endl;
		cin >> addage;
		//电话
		cout << "请输入联系人电话或手机号码(小于20位)" << endl;
		cin >> addphone_number;
		//家庭住址
		cout << "请输入联系人家庭住址" << endl;
		cin >> addhome_address;
		
		adbooks->personArray[adbooks->bookSize].name = addname;
		adbooks->personArray[adbooks->bookSize].sex = addsex;
		adbooks->personArray[adbooks->bookSize].age = addage;
		adbooks->personArray[adbooks->bookSize].phone_number = addphone_number;
		adbooks->personArray[adbooks->bookSize].home_address = addhome_address;
		adbooks->bookSize++;
		cout << "*****联系人信息添加完成*****\n" << endl;

		system("pause");  //按任意键继续
		system("cls"); //清屏操作
	}
}