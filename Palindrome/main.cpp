#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int number{}; //�����, ��������� � ����������
	cout << "������� �����:"; cin >> number;
	int reverse = 0; // �����, ���������� ��������
	int copy= number; //�������� �������� number, ����� ��������� ������������������ �������� ����������, 
	//� � �������� ������� ����� �������� copy
	while (copy)
	{
		reverse *= 10;        // ����������� ����� ��� ���������� �������� �������
		reverse += copy % 10; //��������� ������� ������ ��������������
		copy /=10;            // ������� ������� ������ ����������� �����
	
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������";
	}
	else
	{
		cout << "������� �����";
	}
}