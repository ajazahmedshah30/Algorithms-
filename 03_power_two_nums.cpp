//This program gives the power of a number (a) raised to another number (b). 
#include <iostream>
using namespace std;                                                //Program steps:
int main()                                                          //1
{
    int a;                                                          //1
    int b;                                                          //1
    cout << "Enter a and b respectively:\n";                        //1
    cin >> a >> b;                                                  //1
    int power = 1, i;                                               //1
    for (i = 0; i < b; i++)                                         //1 + (N + 1) + N
    {
        power *= a;                                                 //N
    }
    cout << a << " raised to " << b << " is " << power << endl;     //1
}                                                                   //Total steps: 3N + 9
