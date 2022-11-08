#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>

void cleanperson(Addressbook *adbooks) 
{
	adbooks->bookSize = 0;
	cout << "通讯录已经清空"<<endl;
	system("pause");  //按任意键继续
	system("cls"); //清屏操作
}