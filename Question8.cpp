#include <iostream>

using namespace std;

int main() 
{
    int n1, n2;
    int arr1[100], arr2[100], arr3[200];

    
    cout << "Enter number of elements for first sorted array: ";
    cin >> n1;
    cout << "Enter elements (must be in sorted order):\n";
    for (int i = 0; i < n1; ++i) 
		{
        cin >> arr1[i];
    }

    
    cout << "Enter number of elements for second sorted array: ";
    cin >> n2;
    cout << "Enter elements (must be in sorted order):\n";
    for (int i = 0; i < n2; ++i) 
		{
        cin >> arr2[i];
    }

   
    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < n1 && j < n2) 
		{
        if (arr1[i] <= arr2[j]) 
				{
            arr3[k] = arr1[i];
            i++;
        } 
				else 
				{
					
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) 
		{
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    
    while (j < n2) 
		{
        arr3[k] = arr2[j];
        j++;
        k++;
    }

   
    cout << "\nMerged sorted array:\n";
    for (int m = 0; m < (n1 + n2); ++m)
		 {
        cout << arr3[m] << " ";
    }
    cout << "\n";

    return 0;
}
