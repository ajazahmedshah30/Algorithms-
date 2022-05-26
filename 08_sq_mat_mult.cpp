	//This program gives the multiplication matrix of two square matricies with program steps.
#include <iostream>
#define MAX 10
using namespace std;                            //Program steps:
int main()                                      //1
{
    int a[MAX][MAX];                            //1
    int b[MAX][MAX];                            //1
    int m[MAX][MAX];                            //1
    int i, j, k, n;                             //4

    cout << "Enter the size of matricies: ";    //1
    cin >> n;                                   //1

    cout << "Enter mat A(row-wise):\n";         //1
    for (i = 0; i < n; i++)                     //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                 //N + N(N+1) + N*N
        {
            cin >> a[i][j];                     //N*N
        }
    }

    cout << "Enter mat B(row-wise):\n";         //1
    for (i = 0; i < n; i++)                     //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                 //N + N(N+1) + N*N
        {
            cin >> b[i][j];                     //N*N
        }
    }
    //Set elements of multiplication mat to 0.
    for (i = 0; i < n; i++)                     //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                 //N + N(N+1) + N*N
        {
            m[i][j] = 0;                        //N*N
        }
    }
    //Multiplying.
    for (i = 0; i < n; i++)                     //1 + (N+1) + N
    {
        for (k = 0; k < n; k++)                 //N + N(N+1) + N*N
        {
            for (j = 0; j < n; j++)             //N*N + N*N(N+1) + N*N*N 
            {
                m[i][k] += a[i][j] * b[j][k];   //N*N*N
            }
        }
    }

    cout << "The multiplication matrix is:\n";  //1
    for (i = 0; i < n; i++)                     //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                 //N + N(N+1) + N*N
        {
            cout << m[i][j] << "  ";            //N*N
        }
        cout << endl;                           //N

    }                                          //Total: 3(N*N*N) + 16(N*N) + 21N + 23
