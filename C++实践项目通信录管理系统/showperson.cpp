#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>
void showperson(Addressbook *adbooks)
{
	if (adbooks->bookSize == 0)//首先判断通讯录是否为空；
	{
		cout << "通讯录中联系人为空），请执行其他操作" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < adbooks->bookSize; i++)
		{
			cout << "第" << i << "位" << "姓名：" << adbooks->personArray[i].name <<"\t"
				<< "性别：" << adbooks->personArray[i].sex << "\t"
				<< "年龄：" << adbooks->personArray[i].age << "\t"
				<< "号码：" << adbooks->personArray[i].phone_number << "\t"
				<< "家庭住址：" << adbooks->personArray[i].home_address << endl;
		}
	}
	system("pause");  //按任意键继续
	system("cls"); //清屏操作
}