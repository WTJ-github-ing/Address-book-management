#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>
void showperson(Addressbook *adbooks)
{
	if (adbooks->bookSize == 0)//�����ж�ͨѶ¼�Ƿ�Ϊ�գ�
	{
		cout << "ͨѶ¼����ϵ��Ϊ�գ�����ִ����������" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < adbooks->bookSize; i++)
		{
			cout << "��" << i << "λ" << "������" << adbooks->personArray[i].name <<"\t"
				<< "�Ա�" << adbooks->personArray[i].sex << "\t"
				<< "���䣺" << adbooks->personArray[i].age << "\t"
				<< "���룺" << adbooks->personArray[i].phone_number << "\t"
				<< "��ͥסַ��" << adbooks->personArray[i].home_address << endl;
		}
	}
	system("pause");  //�����������
	system("cls"); //��������
}