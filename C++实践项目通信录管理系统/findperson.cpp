#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>

int findperson(Addressbook *adbooks, string findname)
{
	for (int i = 0; i < adbooks->bookSize; i++)
	{
		if (adbooks->personArray[i].name == findname)
		{
			cout << "找到此人,位于通讯录第" << i << "位" << "\t"
				<< "姓名：" << adbooks->personArray[i].name << "\t"
				<< "性别：" << adbooks->personArray[i].sex << "\t"
				<< "年龄：" << adbooks->personArray[i].age << "\t"
				<< "号码：" << adbooks->personArray[i].phone_number << "\t"
				<< "家庭住址：" << adbooks->personArray[i].home_address << endl;
			return i;
		}
	}
	cout << "查无此人" << endl;
	return -1;
	system("pause");  //按任意键继续
	system("cls"); //清屏操作
}