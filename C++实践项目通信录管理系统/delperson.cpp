#include"voidfunction.h" 
#include"Addressbook.h"
#include<string>
/*
����������
������������ɾ��ָ����ϵ��
ʵ�ֲ��裺
��װ�����ϵ���Ƿ���ڣ�������ϵ����ͨѶ¼�е�λ�ã�����-1
��װɾ����ϵ�˺���
���Թ���
*/
void delperson(Addressbook *adbooks, string delname)
{

	int value=findperson(adbooks, delname);
	if (value != -1)  //�ҵ�����
	{
		for (int i = value; i < adbooks->bookSize; i++)
		{
			//����ǰ��
			adbooks->personArray[i] = adbooks->personArray[i + 1];
		}
		cout << "ɾ���ɹ�" << endl;
		adbooks->bookSize--;
	}
	system("pause");  //�����������
	system("cls"); //��������
}