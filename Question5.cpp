#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5];
    cout<<"Enter 5 elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    reverse(num, num + 5);
    for (int i = 0; i < 5; i++) 
    {
        cout << num[i] << " "; 
    }
    return 0;
    
}
