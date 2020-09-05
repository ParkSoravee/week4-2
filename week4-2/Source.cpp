//0032
#include<iostream>
using namespace std;

void getVals(int *, int);
void showVals(int*, int);
void sortVals(int*, int);
void checkZero(int *);

int main()
{
	int nums[1000];
	int n;
	int *pNum = &nums[0];
	
	cin >> n;

	getVals(pNum, n);
	sortVals(pNum, n);
	checkZero(pNum);
	showVals(pNum, n);

	return 0;
}

void getVals(int *pNum, int n)
{
	for (int i=0;i<n;i++)
	{
		cin >> *(pNum + i);
	}
}
void showVals(int* pNum, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(pNum + i);
	}
}
void sortVals(int* pNum, int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(pNum+i) > *(pNum+j))
			{
				temp = *(pNum + i);
				*(pNum + i) = *(pNum + j);
				*(pNum + j) = temp;
			}
		}
	}
}
void checkZero(int* pNum)
{
	int i = 0;
	while (*pNum == 0)
	{
		if (*(pNum + i) == 0) i++;
		else {
			*pNum = *(pNum + i);
			*(pNum + i) = 0;
		}
	}
}