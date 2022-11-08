#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>
/*
功能描述：
按照姓名进行删除指定联系人
实现步骤：
封装检测联系人是否存在，返回联系人在通讯录中的位置，或者-1
封装删除联系人函数
测试功能
*/
void delperson(Addressbook *adbooks, string delname)
{

	int value=findperson(adbooks, delname);
	if (value != -1)  //找到此人
	{
		for (int i = value; i < adbooks->bookSize; i++)
		{
			//数据前移
			adbooks->personArray[i] = adbooks->personArray[i + 1];
		}
		cout << "删除成功" << endl;
		adbooks->bookSize--;
	}
	system("pause");  //按任意键继续
	system("cls"); //清屏操作
}