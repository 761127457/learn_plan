#include<iostream>
using namespace std;

void printFunc(int i)
{
	cout << "i=" << i << endl;
}

int getMaxNum(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int a = 10;
	int b = 20;
	printFunc(a);
	printFunc(b);
	cout << getMaxNum(a, b) << endl;
	return 0;
}