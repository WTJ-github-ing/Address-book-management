#pragma once
#include<iostream>;
using namespace std;
#include "Person.h"  

//ͨѶ¼�ṹ��
#define Max 1000 //�������  ����
struct Addressbook
{
	struct Person personArray[Max];  //ͨѶ¼�������ϵ������
	int bookSize; //ͨѶ¼��ǰ����
};
