#include<iostream>
using namespace std;

void setAllVals(int *);

int main()
{
	int nums[1000];
	int n;
	int *pNum = &nums[0];
	
	cin >> n;
	cout << pNum << endl;
	setAllVals(pNum);
	

	return 0;
}

void setAllVals(int *pNum)
{
	for (int i=0;i<1000;i++)
	{
		*(pNum + i) = -1;
	}
}