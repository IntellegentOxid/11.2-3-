#include <iostream>
#include <math.h>
using namespace std;

const unsigned int ARRSIZE = 10;

int main()
{
	bool fail = false;
	int arr[ARRSIZE];
	for (int i = 0; i < ARRSIZE; i++)
	{
		do
		{
			fail = false;
			cout << "Enter a value for " << i + 1 << " array item: ";
			cin >> arr[i];
			if (cin.fail())
			{
				cout << "\nIncorrect valye has been entered!" << endl << endl;
				fail = true;
			}
			cin.clear();
			cin.ignore();
		} while (fail);
	}
	cout << "\nAn array has been obtained: ";
	for (int i = 0; i < ARRSIZE; i++)
	{
		cout << arr[i] << " ";
	}

	int min_val = arr[0];
	unsigned int min_idx = 0;

	for (int i = 0; i < ARRSIZE; i++)
	{
		if (abs(min_val) > abs(arr[i]))
		{
			min_val = arr[i];
			min_idx = i;
		}
	}
	cout << "\n\nThe minimum moudle element of an array is " << min_val << " and it`s index is " << min_idx << endl;

	unsigned int sum_mod = 0;
	unsigned int n = 0;
	while ((arr[n] != 0) && (n < ARRSIZE))
	{
		n++;
	}
	if (n < (ARRSIZE - 1))
	{
		do
		{
			sum_mod += abs(arr[n]);
			n++;
		} while (n < ARRSIZE);
		cout << "The sum of the modules of the array elements located after the first element with a value of 0 is equal to " << sum_mod << endl;
	}
	else if (arr[ARRSIZE - 1] == 0)
		cout << "The first element with a value of 0 is the last element of the array\n";
	else
		cout << "The are no items in the array with a value of 0\n";

	int conv_arr[ARRSIZE];
	if (ARRSIZE % 2 == 0)
	{
		for (int i = 0; i <= (ARRSIZE / 2) - 1; i++)
		{
			conv_arr[i] = arr[i * 2];
		}
		int n = (ARRSIZE / 2) - 1;
		for (int i = ARRSIZE / 2; i < ARRSIZE; i++)
		{
			conv_arr[i] = arr[i - n];
			n--;
		}
	}
	else
	{
		for (int i = 0; i <= ARRSIZE / 2; i++)
		{
			conv_arr[i] = arr[i * 2];
		}
		int n = ARRSIZE / 2;
		for (int i = (ARRSIZE / 2) + 1; i < ARRSIZE; i++)
		{
			conv_arr[i] = arr[i - n];
			n--;
		}
	}
	cout << "\nConverted array: ";
	for (int i = 0; i < ARRSIZE; i++)
	{
		cout << conv_arr[i] << " ";
	}
	cout << endl;
}