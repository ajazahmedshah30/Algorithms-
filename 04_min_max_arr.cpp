//This program gives the biggest and smallest element in an array.
#include <iostream>
#define MAX 100
using namespace std;                                                            //Program steps:
int main()                                                                      //1
{
    int i, n;                                                                   //2
    int arr[MAX];                                                               //1
    cout << "Enter size of array: ";                                            //1
    cin >> n;                                                                   //1
    cout << "Enter the elements of array:\n";                                   //1
    for (i = 0; i < n; i++)                                                     //1 + (N+1) + N
    {
        cin >> arr[i];                                                          //N
    }
    int min = arr[0];                                                           //1
    int max = arr[0];                                                           //1
    for (i = 1; i < n; i++)                                                     //1 + N + (N-1)
    {
        if (min > arr[i])                                                       //N - 1
        {
            min = arr[i];                                                       //N - 1
        }
        if (max < arr[i])                                                       //N - 1
        {
            max = arr[i];                                                       //N - 1
        }
    }
    cout << "Biggest item is " << max << "\nSmallest item is " << min << endl;  //1
}                                                                               //Total = 9N + 8
