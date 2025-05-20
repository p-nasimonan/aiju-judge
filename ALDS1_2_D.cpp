#include<iostream>

using namespace std;

int a[100], n;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1) { cout << a[i] << endl; }
        else { cout << a[i] << " "; }
    }
}

void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
        printArray(a, n);
	}
}


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	printArray(a, n);
	insertionSort(a, n);
    return 0;
}

