#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>

void addperson(Addressbook *adbooks) //�����ϵ�˹���
{
	if (adbooks->bookSize == Max)//�����ж�ͨѶ¼�Ƿ��������������
	{
		cout << "ͨѶ¼����ϵ��������1000�ˣ�����ִ����������" << endl;
		return;
	}
	else
	{
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
		
		adbooks->personArray[adbooks->bookSize].name = addname;
		adbooks->personArray[adbooks->bookSize].sex = addsex;
		adbooks->personArray[adbooks->bookSize].age = addage;
		adbooks->personArray[adbooks->bookSize].phone_number = addphone_number;
		adbooks->personArray[adbooks->bookSize].home_address = addhome_address;
		adbooks->bookSize++;
		cout << "*****��ϵ����Ϣ������*****\n" << endl;

		system("pause");  //�����������
		system("cls"); //��������
	}
}