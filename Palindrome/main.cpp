#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int number{}; //число, введенное с клавиатуры
	cout << "Введите число:"; cin >> number;
	int reverse = 0; // число, записанное наоборот
	int copy= number; //копируем значение number, чтобы введенное пользователемчисло осталось неизменным, 
	//а в процессе деления будем изменять copy
	while (copy)
	{
		reverse *= 10;        // освобождаем место для следующего младшего разряда
		reverse += copy % 10; //сохраняем младший разряд исходногочисла
		copy /=10;            // убираем младший разряд изисходного числа
	
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Полиндром";
	}
	else
	{
		cout << "Обычное число";
	}
}