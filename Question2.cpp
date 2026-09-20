#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	int num[5];
	cout<<"Enter the element of the array: "<<'\n';
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
		sum=sum+num[i];
	}
	cout<<sum;
	return 0;
}
