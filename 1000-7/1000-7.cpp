#include <iostream>
#include "windows.h"
#include <random>

using namespace std;

int main()
{
	srand(time(0));
	int random = rand();




	setlocale(LC_ALL, "Russian");
	for (int i = 1000; i > 6; i = i - 7)
	{
		cout << i << " - 7 = " <<(i - 7) << '\n';
		Sleep(100);
	};


	cout << "Я гуль" << '\n';

	if (random % 2 == 0)
	{
		cout << "Гуль советует вам проебать еще одну катку" << '\n';
	}

	else

	{
		cout << "Гуль советует вам пойти отдохнуть" << '\n';
	}

	cout << "Made by DanilaBaxBax" << '\n';
	system("pause");

}
