#pragma once
#include<iostream>;
using namespace std;
#include "Person.h"  

//通讯录结构体
#define Max 1000 //最大人数  容量
struct Addressbook
{
	struct Person personArray[Max];  //通讯录保存的联系人数组
	int bookSize; //通讯录当前人数
};
