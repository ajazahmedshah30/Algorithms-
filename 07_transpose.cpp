//This program gives transpose of a matrix with program steps.
#include <iostream>
#define MAXROWS 10
#define MAXCOLS 10
using namespace std;                                            //Program steps:
int main()                                                      //1
{
    int a[MAXROWS][MAXCOLS];                                    //1
    int b[MAXROWS][MAXCOLS];                                    //1
    int m, n, i, j;                                             //4

    cout << "Enter the row and coloumn size of the matrix:\n";  //1
    cin >> m >> n;                                              //2

    cout << "Enter the elements of the matrix(row-wise):\n";    //1
    for (i = 0; i < m; i++)                                     //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                 //M + M(N+1) + M*N
        {
            cin >> a[i][j];                                     //M*N
        }
    }
    //Transpose of the matrix.
    for (i = 0; i < m; i++)                                     //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                 //M + M(N+1) + M*N
        {   
            b[j][i] = a[i][j];                                  //M*N
        }
    }

    cout << "Transpose of matrix is:\n";                        //1
    for (i = 0; i < n; i++)                                     //1 + (N+1) + N
    {
        for (j = 0; j < m; j++)                                 //N + N(M+1) + N*M 
        {
            cout << b[i][j] << "   ";                           //N*M
        }
        cout << endl;                                           //N
    }
}                                                               //Total: 9(M*N) + 8M + 5N + 18
