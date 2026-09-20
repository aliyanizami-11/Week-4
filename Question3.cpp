#include <iostream>
using namespace std;

int main()
{
	int m;
	
  cout<<"Enter the length of the array: ";
  cin>>m;
  int arr[m];
  cout<<"The size of the array is: "<< sizeof(arr) / sizeof(arr[0]);
  return 0;
}
