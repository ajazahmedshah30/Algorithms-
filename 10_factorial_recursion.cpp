	//This program gives the factorial of a number using recursion.
#include <iostream>
using namespace std;
int factorial(int n)                                                
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;                                                          
    cout << "Enter a number: ";                                     
    cin >> n;                                                       
    int fact = factorial(n);                                        
    cout << "The factorial of " << n << " is " << fact << endl;     
}
