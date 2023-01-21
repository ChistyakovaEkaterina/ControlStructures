#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
void main() 
{
setlocale(LC_ALL, "ru");
#ifdef WHILE_1
int i = 0; // счетчик цикла
int n; // количество операций
cout<< "¬ведите количество операций:"; cin >> n;
while (i<n)
{
	cout << ++i<<"Hello\n";
	
}
#endif //WHILE_1
#ifdef WHILE_2
int n; // количество итераций
cout << "¬ведите количество итераций:"; cin >> n;
while (--n)
{
	cout << n << "\t";
}
cout << endl;
cout << n << endl;
#endif //WHILE_2


char key;
do
{

	key = _getche();
	cout << (int)key << "\t" << key << endl;
    } 
while (key!=27);
}