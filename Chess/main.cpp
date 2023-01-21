#include <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define VERTICAL_LINE		(char)179
#define HORIZONTAL_LINE		(char)196	
#define WHITE_BOX			(char)219	
#define BLACK_BOX			(char)32	


void main()
{
	
	int n;
		setlocale(LC_ALL, "");
	cout << "¬ведите размер доски: "; cin >> n;

	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			if (i == 0 || i == n) cout << HORIZONTAL_LINE;
			//if (j == 0 || j == n) cout << VERTICAL_LINE;
		}
		cout << endl;
	}
}

