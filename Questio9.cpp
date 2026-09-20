#include <iostream>

using namespace std;

int main() 
{
    int n, target;
    int arr[100]; 
    int frequency = 0;

    
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    
    if (n <= 0 || n > 100) 
		{
        cout << "Invalid list size. Please enter a number between 1 and 100.\n";
        return 0;
    }

   
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) 
		{
        cin >> arr[i];
    }

    
    cout << "Enter the number to find its frequency: ";
    cin >> target;
              
  
    for (int i = 0; i < n; ++i) 
		{
        if (arr[i] == target) 
				{
            frequency++;
        }
    }

    
    cout << "\nThe number " << target << " appears " << frequency << " time(s) in the list.\n";

    return 0;
}
