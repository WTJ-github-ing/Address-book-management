#include<iostream>;
#include "Addressbook.h"
#include"Person.h"
#include<string>
using namespace std;

//函数的声明
void showMenu(); //菜单，显示操作的代号
void addperson(Addressbook *adbooks);
void showperson(Addressbook *adbooks);
void delperson(Addressbook *adbooks, string name);
int    findperson(Addressbook *adbooks, string name);
void modifyperson(Addressbook *adbooks, string name);
void cleanperson(Addressbook *adbooks);
