
//This program gives the sum matrix of two square matricies (A and B).
#include <iostream>
#define MAX 10
using namespace std;                                        //Program steps:
int main()                                                  //1
{
    int a[MAX][MAX];                                        //1
    int b[MAX][MAX];                                        //1
    int c[MAX][MAX];                                        //1
    int n, i, j;                                            //3

    cout << "Enter the size of square matricies: ";         //1
    cin >> n;                                               //1

    cout << "Enter the elements of array A(row-wise):\n";   //1
    for (i = 0; i < n; i++)                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                             //N + N(N+1) + N*N
        {
            cin >> a[i][j];                                 //N*N
        }
    }

    cout << "Enter the elements of array B(row-wise):\n";   //1
    for (i = 0; i < n; i++)                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                             //N + N(N+1) + N*N
        {
            cin >> b[i][j];                                 //N*N
        }
    }

    //Adding the matricies
    for (i = 0; i < n; i++)                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                             //N + N(N+1) + N*N
        {
            c[i][j] = a[i][j] + b[i][j];                    //N*N
        }
    }

    cout << "The sum matrix is:\n";                         //1
    for (i = 0; i < n; i++)                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                             //N + N(N+1) + N*N
        {
            cout << c[i][j] << "  ";                         //N*N
        }
        cout << endl;                                       //N
    }
}                                                           //Total steps: 12(N*N) + 17N + 20
