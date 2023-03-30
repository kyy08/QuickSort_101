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
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_sort(int low, int high)
{
	int pivot, i, j;
	if (low > high) //langkah algoritma no.1
		return;

	//Partition the list into two part:
	//One containing elements les that or equal to pivot
	//Outher containing elements greather than pivot

	pivot = arr[low];	//Langkah Algoritma no.2

	i = low + 1;		//Langkah Algoritma no.3

	j = high;			//Langkah Algoritma no.4

while (i <= j)		//Langkah Algoritma no.10
{
		//Search for an element greather than pivot
	while ((arr[i] <= pivot) && (i <= high))	//Langkah Algortima no.5
	{
		i++;									//Langkah Algoritma no.6
		cmp_count++;
	}
	cmp_count++;

	//Search for an element less than or equal to pivot
	while ((arr[j] > pivot) && (j >= low))		//Langkah Algoritma no.7
	{
		j--;									//Langkah Algoritma no.8
		cmp_count++;
	}

	//if the greather element is on the left of the element
	if (i < j)									//Langkah Algoritma no.9
	{
		//swaps the element at index i with the element at index j
		swap(i, j);
		mov_count++;
	}
}
	//Now containt the index of the last element in the sorted list
	if (low < j);									//Langkah Algoritma no.11
	{
		//Move the pivot to its correct position in the list
		swap(low, j);
		mov_count++;
	}
	//Sort the list on the left of pivot using quick sort
	q_sort(low, j - 1);								//langkah Algoritma no.12
	//sort the list on the right of pivot using quick sort
	q_sort(j + 1, high);							//Langkah Algoritma no.13
