#include<iostream>;
#include "Addressbook.h"
#include"Person.h"
#include<string>
using namespace std;

//����������
void showMenu(); //�˵�����ʾ�����Ĵ���
void addperson(Addressbook *adbooks);
void showperson(Addressbook *adbooks);
void delperson(Addressbook *adbooks, string name);
int    findperson(Addressbook *adbooks, string name);
void modifyperson(Addressbook *adbooks, string name);
void cleanperson(Addressbook *adbooks);
