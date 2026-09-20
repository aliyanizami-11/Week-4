#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    int arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout <<
				 "Invalid size! You need at least 2 elements.\n";
        return 0;
    }

    if (n > 100) 
		{
        cout << "Invalid size! Maximum allowed elements is 100.\n";
        return 0;
    }

    cout << "Enter " << n << " integers:\n";

    for (int i = 0; i < n; i++)
		 {
        cin >> arr[i];
    }

    
    sort(arr, arr + n);

    
    int largest = arr[n - 1];
    int secondLargest = -1;

    for (int i = n - 2; i >= 0; i--) 
		{
        if (arr[i] != largest)
				 {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest == -1) 
		{
    	
        cout << "There is no second-largest element.\n";
    } 
		else 
		{
			
        cout << "The second-largest integer is: "
             << secondLargest << "\n";
    }

    return 0;
}

