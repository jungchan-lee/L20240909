#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

	char input;
	char map[10][10];
	int w = 5;
	int s = 5;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			map[i][j] = ' ';
		}
	}
	map[w][s] = '*';

	while (1)
	{
		system("cls");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
		cin >> input;
		if (input == 'w')
		{
			map[w][s] = ' ';
			w--;
			map[w][s] = '*';
		}
		else if (input == 's')
		{
			map[w][s] = ' ';
			w++;
			map[w][s] = '*';
		}
		else if (input == 'a')
		{
			map[w][s] = ' ';
			s--;
			map[w][s] = '*';
		}
		else if (input == 'd')
		{
			map[w][s] = ' ';
			s++;
			map[w][s] = '*';
		}


	}

	return 0;
}