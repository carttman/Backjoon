#include <iostream>

constexpr int COUNT = 5; //다섯 개의 자연수가 주어질 때 


void Sort(int arr[], const int size)
{
	// 배열을 인수로 받아 정렬해 봅시다.

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[COUNT] = {};

	int sum = 0;
	for (int i = 0; i < COUNT; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	Sort(arr, COUNT);

	int avg = sum / COUNT;
	int midIndex = COUNT / 2;

	std::cout << avg << std::endl;
	std::cout << arr[midIndex] << std::endl;


	return 0;
}
