#include <iostream>
using namespace std;
#include<string>

#include "Addressbook.h" //ͨѶ¼�ṹ��д��ͷ�ļ���
#include "Person.h"  //��ϵ�˽ṹ��д��ͷ�ļ�������������ļ���������

#include"voidfunction.h" //�������ܵ�������ͷ�ļ���

int main() 
{
	Addressbook adbooks;//����ͨѶ¼�ṹ�����
	adbooks.bookSize = 0;//��ʼ��ͨѶ¼�е�ǰ��Ա����

	

	while (true)  //ά�����������
	{
		showMenu();
		int  select;	//�����û�ѡ������ı���
		cout << "������Ҫѡ��Ĳ�������" << endl;
		cin >> select;
		switch (select)
		{
		case 1://1.���
			addperson(&adbooks); //��ַ���ݣ�����ʵ��
			break;
		case 2://2.��ʾ
			showperson(&adbooks);
			break;
		case 3://3.ɾ��
		{
			cout << "������Ҫɾ������ϵ��������" << endl;
			string delname;
			cin >> delname;
			delperson(&adbooks, delname);
		}
			break;
		case 4://����
		{
			cout << "������Ҫ���ҵ���ϵ��������" << endl;
			string findname;
			cin >> findname;
			findperson(&adbooks, findname);
		}
			break;
		case 5://�޸�
		{
			cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
			string modifyname;
			cin >> modifyname;
			modifyperson(&adbooks, modifyname);
		}
			break;
		case 6://���
		{
			//����¼����ϵ��������Ϊ0���߼���ռ���
			cleanperson(&adbooks);
		}
			break;
		case 0://�˳�
		{
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");//���������
			return 0;//����������˳�
		}
			break;
		default:
		{
			cout << "��������������0��1��...��6֮һ" << endl;
		}
			break;
		}
	}
	system("pause");
	return 0;
}