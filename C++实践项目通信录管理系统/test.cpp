#include<iostream>
using namespace std;
int main() 
{
	int  select;	//创建用户选择输入的变量

	//select = 'a';  //ASCII  97

	cout << "操作代号" <<select<< endl;
	system("pause");
	return 0;
}
/*
遇到的bug，当给select从命令行赋值为a,汉字的时候，会执行case0;

*/
