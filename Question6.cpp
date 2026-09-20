#include <iostream>

using namespace std;

int main()
 {
    int choice;
    int r1, c1, r2, c2;
    
    int matA[100][100];
    int matB[100][100];

    cout << "Select Operation:\n";
    cout << "1. Addition of two matrices\n";
    cout << "2. Multiplication of two matrices\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice != 1 && choice != 2) 
		{
        cout << "Invalid choice!\n";
        return 0;
    }

    if (choice == 1) 
		{
        cout << "Enter rows and columns for both matrices: ";
        cin >> r1 >> c1;
        
     
        r2 = r1;
        c2 = c1;
    } 
    
    else 
		{
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;

       
        if (c1 != r2)
				{
            cout << "\nMatrix multiplication not possible! Columns of first (" 
                 << c1 << ") must equal rows of second (" << r2 << ").\n";
            return 0;
        }
    }


    cout << "Enter elements for first matrix:\n";
    for (int i = 0; i < r1; ++i) 
		{
    	 for (int j = 0; j < c1; ++j) 
			 {
            cin >> matA[i][j];
        }
    }

    cout << "Enter elements for second matrix:\n";
    for (int i = 0; i < r2; ++i) 
		{
        for (int j = 0; j < c2; ++j) 
				{
            cin >> matB[i][j];
        }
    }

    
    if (choice == 1) 
		{
        cout << "\nAddition result:\n";
        for (int i = 0; i < r1; ++i)
				 {
            for (int j = 0; j < c1; ++j) 
						{
                cout << (matA[i][j] + matB[i][j]) << " ";
            }
            cout << "\n";
        }
    } 
		else 
    
        cout << "\nMultiplication result:\n";
        for (int i = 0; i < r1; ++i) 
				{
            for (int j = 0; j < c2; ++j) 
						{
                int sum = 0;
                for (int k = 0; k < c1; ++k) 
								{
                    sum += matA[i][k] * matB[k][j];
                }
                cout << sum << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
