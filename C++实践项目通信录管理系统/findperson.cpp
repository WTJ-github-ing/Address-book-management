#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>

int findperson(Addressbook *adbooks, string findname)
{
	for (int i = 0; i < adbooks->bookSize; i++)
	{
		if (adbooks->personArray[i].name == findname)
		{
			cout << "�ҵ�����,λ��ͨѶ¼��" << i << "λ" << "\t"
				<< "������" << adbooks->personArray[i].name << "\t"
				<< "�Ա�" << adbooks->personArray[i].sex << "\t"
				<< "���䣺" << adbooks->personArray[i].age << "\t"
				<< "���룺" << adbooks->personArray[i].phone_number << "\t"
				<< "��ͥסַ��" << adbooks->personArray[i].home_address << endl;
			return i;
		}
	}
	cout << "���޴���" << endl;
	return -1;
	system("pause");  //�����������
	system("cls"); //��������
}