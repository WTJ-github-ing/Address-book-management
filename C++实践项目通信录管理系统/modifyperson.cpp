#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>


void modifyperson(Addressbook *adbooks, string modifyname)
{

	int value = findperson(adbooks, modifyname);
	if (value != -1)  //�ҵ�����
	{
		int i = value;
		
		//����������͡�Ĭ��ֵ����������Ӻ���ʱ;
		string addname = "��";
		string addsex = "��";
		int      addage = 0;
		string addphone_number = "��";
		string addhome_address = "��";

		//���û���ֵ��
		//����
		cout << "��������ϵ������" << endl;
		cin >> addname;
		//�Ա�
		cout << "��������ϵ���Ա�(��Ů)" << endl;
		while (true)
		{
			cin >> addsex;
			if (addsex == "��" || addsex == "Ů")
			{
				break;
			}
			else
			{
				cout << "���������룺�л���Ů" << endl;
			}
		}
		//����
		cout << "��������ϵ������(����)" << endl;
		cin >> addage;
		//�绰
		cout << "��������ϵ�˵绰���ֻ�����(С��20λ)" << endl;
		cin >> addphone_number;
		//��ͥסַ
		cout << "��������ϵ�˼�ͥסַ" << endl;
		cin >> addhome_address;

		cout << "�޸�ǰ" << endl;
		cout << "����,λ��ͨѶ¼��" << i << "λ" << "\t"
			<< "������" << adbooks->personArray[i].name << "\t"
			<< "�Ա�" << adbooks->personArray[i].sex << "\t"
			<< "���䣺" << adbooks->personArray[i].age << "\t"
			<< "���룺" << adbooks->personArray[i].phone_number << "\t"
			<< "��ͥסַ��" << adbooks->personArray[i].home_address << endl;

		adbooks->personArray[i].name = addname;
		adbooks->personArray[i].sex = addsex;
		adbooks->personArray[i].age = addage;
		adbooks->personArray[i].phone_number = addphone_number;
		adbooks->personArray[i].home_address = addhome_address;

		cout << "�޸ĺ�" << endl;
		cout << "����,λ��ͨѶ¼��" << i << "λ" << "\t"
			<< "������" << adbooks->personArray[i].name << "\t"
			<< "�Ա�" << adbooks->personArray[i].sex << "\t"
			<< "���䣺" << adbooks->personArray[i].age << "\t"
			<< "���룺" << adbooks->personArray[i].phone_number << "\t"
			<< "��ͥסַ��" << adbooks->personArray[i].home_address << endl;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");  //�����������
	system("cls"); //��������
}