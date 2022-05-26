//Program for finding a factorial of a number.
#include <iostream>
using namespace std;                                //Program steps:
int main()                                          //1
{
    int n;                                          //1
    int fact = 1;                                   //1
    int i;                                          //1
    cout << "Enter a number: ";                     //1
    cin >> n;                                       //1
    for (i = 1; i <= n; i++)                        //1 + (N + 1) + N
    {              
        fact *= i;                                  //N
    }
    cout << "Factorial of " << n << " is " << fact; //1
}                                                   //Total steps: 3N + 9
