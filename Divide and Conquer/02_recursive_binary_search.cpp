//This program searches an element in a sorted ascending array using binary search.
#include <iostream>
using namespace std;
int binary_search(int arr[], int lb, int ub, int element)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            return binary_search(arr, lb, mid - 1, element);
        }
        else
        {
            return binary_search(arr, mid + 1, ub, element);
        }
    }
    return -1;
}
int main()
{
    int element;
    int arr[10] = {0, 1, 2, 4, 9, 10, 12, 21, 41, 44};

    cout << "Enter the element you want to search: ";
    cin >> element;

    int lowerb = arr[0];
    int upperb = sizeof(arr) / sizeof(arr[0]) - 1;
    int pos = binary_search(arr, lowerb, upperb, element);
    if (pos == -1)
    {
        cout << "Item not found\n";
    }
    else
    {
        cout << "The element is at index " << pos << endl;
    }
    return 0;
}
