#include <iostream>
using namespace std;                                                    //Program steps:
int main()                                                              //1
{
    int arr[] = {0, 4, 7, 13, 32, 41, 63, 94, 102, 112};                //1
    int element;                                                        //1
    int index = -1;                                                     //1
    int lower = arr[0];                                                 //1
    int upper = sizeof(arr) / sizeof(arr[0]) - 1;                       //1

    cout << "Enter the element you want to search: ";                   //1
    cin >> element;                                                     //1
    while (lower <= upper)                                              //
    {
        int mid = (lower + upper) / 2;                                  //
        if (arr[mid] == element)                                        //
        {
            index = mid;                                                //1
            break;                                                      //1
        }
        else if (arr[mid] > element)                                    //
        {
            upper = mid - 1;                                            //
        }
        else
        {
            lower = mid + 1;                                            //
        }
    }
    if (index == -1)                                                    //1
    {
        cout << "Element not found\n";                                  //1
    }
    else                                                                //1
    {
        cout << "The element is present at index " << index << endl;    //1
    }
