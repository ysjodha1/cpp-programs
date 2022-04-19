#include <iostream>
using namespace std;
 
int main()
{
 
    const int SIZE = 100;
    int r, c, a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE], i, j;
 
    cout << "Enter number of rows: ";
    cin >> r;
 
    cout << "Enter number of columns: ";
    cin >> c;
 
    cout << endl << "---Enter elements of 1st matrix---" << endl;
 
    // Getting first matrix values from user
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "\tEnter element a(" << i + 1 << j + 1 << ") : ";
           cin >> a[i][j];
       }
 
    // Getting second matrix values from user
    cout << endl << "---Enter elements of 2nd matrix---" << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "\tEnter element b(" << i + 1 << j + 1 << ") : ";
           cin >> b[i][j];
       }
 
    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
 
    // Displaying sum of the matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
 
    return 0;
}
