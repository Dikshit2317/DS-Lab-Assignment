//a)
#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {3, 4, 2, 1, 6};
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        brr[4 - i] = arr[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        cout << brr[i] << endl;
    }

    return 0;
}


//b)
#include <iostream>
using namespace std;
int main() 
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) 
    {
        cout << "Matrix multiplication is not possible! " << endl;
        return 0;
    }
    int A[r1][c1], B[r2][c2], C[r1][r2];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            for (int k = 0; k < c1; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//c)
#include <iostream>
using namespace std;
int main() 
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrix[rows][cols], transpose[cols][rows];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

