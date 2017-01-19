#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	int WinningDigits[5];
	int player[5];
	srand((unsigned)time(0));
	for (int i = 0; i < 5; i++)
	{
		WinningDigits[i] = rand()%10;
	}
	for (int i = 0; i < 5; i++)
	{
		do{
			cout << "Enter number #" << i + 1 << ": ";
			cin >> player[i];
		} while (player[i] < 0 || player[i] > 9);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << WinningDigits[i] << endl;
		if (WinningDigits[i] == player[i])
		{
			
			cout << "Congratulations! Number #" << i + 1 << " matches the lottery!\n";
		}
	}
	system("pause");
}