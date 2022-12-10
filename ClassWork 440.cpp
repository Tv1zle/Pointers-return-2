#include <iostream>


void NewArray(int* arr1, int size1, int* arr2, int size2)
{
	int *ptr = new int[size1 + size2];


	for (int i = 0; i < size1; i++)
	{
		*ptr++ = arr1[i];
	}


	for (int i = 0; i < size2; i++)
	{
		*ptr++ = arr2[i];
	}


	ptr -= 10;
	for (int i = 0; i < size1 + size2; i++)
	{
		std::cout << *ptr++ << " ";
	}
	std::cout << "\n\n";
	
}


void AddToArray(int* arr, int size, int add)
{
	int* ptr = new int[size + 1];


	for (int i = 0; i < size; i++)
	{
		*ptr++ = arr[i];
	}
	*ptr++ = add;


	ptr -= 6;
	for (int i = 0; i < size + 1; i++)
	{
		std::cout << *ptr++ << " ";
	}
	std::cout << "\n\n";
}


void DeleteFromArray(int* arr, int size, int index)
{
	for (int i = index - 1; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;


	for (int i = 0; i < size; i++)
	{
		std::cout << *arr++ << " ";
	}
	std::cout << "\n\n";
}


int main()
{
	// Task 1
	int size1 = 5;
	int* arr1 = new int[size1] {2, 4, 1, 8, 5};


	int size2 = 5;
	int* arr2 = new int[size2] {13, 76, 45, 91, 20};
	NewArray(arr1, size1, arr2, size2);
	

	
	// Task 2
	int sizee = 5;
	int* arrr = new int[sizee] {1, 2, 3, 4, 5};
	AddToArray(arrr, sizee, 7);



	// Task 3
	int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};
	DeleteFromArray(arr, size, 2);
	
}
