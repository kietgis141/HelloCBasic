#include<conio.h>
#include<stdio.h>
#define MAX 100

//Function input size of array
void InputSizeOfArray(int &numbers)
{
	printf("Please input size of array: ");
	scanf("%d", &numbers);
}

//Function input array.
void InputArray(float array1[],int numbers)
{
	for (int i=0;i<numbers;i++)
	{
		printf("\n array[%d]: %d",i, array1[i]);
		scanf("%d", &array1[i]);
	}
}

//Function output array.
void OutputArray(float array1[], int numbers)
{
	printf("Output of array:");
	for (int i = 0;i<numbers;i++)
	{
		printf("\n array[%d]: %d", i, array1[i]);
	}

}

void main()
{
	InputSizeOfArray(numbers);
	InputArray(array1, numbers);
	OutputArray(array1, numbers);

	getch();
}