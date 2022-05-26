//Searching for an element in an array linearly.
#include <iostream>
using namespace std;
int main()
{
    bool flag = false;
    int element, i;
    int arr[10] = {1, 2, 44, 12, 41, 21, 4, 0, 9, 10};

    cout << "Enter the element you want to search: ";
    cin >> element;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "The element is present at index " << i << endl;
    }
    else
    {
        cout << "The element is not present in the array.\n";
    }
    return 0;
}
