#include <iostream>
using namespace std;


int arr[20];			 // array of intergers to hold values
int cmp_count = 0;		// number of comparasion
int mov_count = 0;		// number of data movement
int n;

void input() {
	while (true)
	{
		cout << "Masukan Panjang Element Array: ";		
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 20" << endl;
	}

	cout << "\n====================" << endl;
	cout << "\n Enter Element Array" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//Swaps the element at index x with the element at index y

