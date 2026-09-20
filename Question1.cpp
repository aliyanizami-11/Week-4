#include <iostream>
using namespace std;

int main()
{
	int num[5];
	cout<<"Enter 5 elemnts of the array: "<<'\n';
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
	}
	cout<<"The elements of the array are: "<<'\n';
	for(int j=0;j<5;j++)
	{
		cout<<num[j]<<'\n';
	}
	return 0;
}
