#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[100]; 

   
    int positiveArr[100], negativeArr[100], evenArr[100], oddArr[100];
    
  
    int posCount = 0, negCount = 0, evenCount = 0, oddCount = 0;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) 
		{
        cout << "Invalid array size. Please enter a number between 1 and 100.\n";
        return 0;
    }

    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) 
		{
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; ++i)
		{
        
        if (arr[i] > 0) 
				{
            positiveArr[posCount] = arr[i];
            posCount++;
        } else if (arr[i] < 0) 
				{
            negativeArr[negCount] = arr[i];
            negCount++;
        }

        if (arr[i] % 2 == 0) 
				{
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else
				 {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    cout << "\n--- Classification Results ---\n";

   
    cout << "Positive numbers Count (" << posCount << "): ";
    for (int i = 0; i < posCount; ++i) 
		{
        cout << positiveArr[i] << " ";
    }
    cout << "\n";

    cout << "Negative numbers Count (" << negCount << "): ";
    for (int i = 0; i < negCount; ++i) 
		{
        cout << negativeArr[i] << " ";
    }
    cout << "\n";

    
    cout << "Even numbers Count (" << evenCount << "): ";
    for (int i = 0; i < evenCount; ++i) 
		{
        cout << evenArr[i] << " ";
    }
    cout << "\n";

    
    cout << "Odd numbers Count (" << oddCount << "): ";
    for (int i = 0; i < oddCount; ++i) 
		{
        cout << oddArr[i] << " ";
    }
    cout << "\n";

    return 0;
}
