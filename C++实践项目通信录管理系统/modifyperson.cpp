#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>


void modifyperson(Addressbook *adbooks, string modifyname)
{

	int value = findperson(adbooks, modifyname);
	if (value != -1)  //找到此人
	{
		int i = value;
		
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

		cout << "修改前" << endl;
		cout << "此人,位于通讯录第" << i << "位" << "\t"
			<< "姓名：" << adbooks->personArray[i].name << "\t"
			<< "性别：" << adbooks->personArray[i].sex << "\t"
			<< "年龄：" << adbooks->personArray[i].age << "\t"
			<< "号码：" << adbooks->personArray[i].phone_number << "\t"
			<< "家庭住址：" << adbooks->personArray[i].home_address << endl;

		adbooks->personArray[i].name = addname;
		adbooks->personArray[i].sex = addsex;
		adbooks->personArray[i].age = addage;
		adbooks->personArray[i].phone_number = addphone_number;
		adbooks->personArray[i].home_address = addhome_address;

		cout << "修改后" << endl;
		cout << "此人,位于通讯录第" << i << "位" << "\t"
			<< "姓名：" << adbooks->personArray[i].name << "\t"
			<< "性别：" << adbooks->personArray[i].sex << "\t"
			<< "年龄：" << adbooks->personArray[i].age << "\t"
			<< "号码：" << adbooks->personArray[i].phone_number << "\t"
			<< "家庭住址：" << adbooks->personArray[i].home_address << endl;
		cout << "修改成功" << endl;
	}
	system("pause");  //按任意键继续
	system("cls"); //清屏操作
}