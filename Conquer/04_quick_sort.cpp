//This is a program the hardcoded array is sorted in ascending order using quick sort.
#include <iostream>
using namespace std;
// This function displays array based on its upper limit.
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
void quick_sort(int a[], int left, int right)
{
    int i = left, j = right;
    int pivot = i;                  //Pivot is selected from the left.
    while (i < j)
    {
        //Pivot is on left
        if (pivot == i)
        {
            if (a[pivot] > a[j])
            {
                //Pivot is greater than right element. So, swapping the positions. 
                int tmp = a[pivot];
                a[pivot] = a[j];
                a[j] = tmp;
                pivot = j;
            }
            else
            {
                j--;
            }
        }
        //Pivot is on right
        else
        {
            if (a[pivot] < a[i])
            {
                //Pivot is lesser than left element. So, swapping the positions.
                int tmp = a[pivot];
                a[pivot] = a[i];
                a[i] = tmp;
                pivot = i;
            }
            else
            {
                i++;
            }
        }
    }
    //The argument of left and right should not go outside the array. 
    if (pivot + 1 <= right && pivot - 1 >= left)
    {
        quick_sort(a, left, pivot - 1);
        quick_sort(a, pivot + 1, right);
    }
    else if (pivot + 1 <= right)
    {
        quick_sort(a, pivot + 1, right);
    }
    else if (pivot - 1 >= left)
    {
        quick_sort(a, left, pivot - 1);
    }
}
int main()
{
    int arr[] = {12, 1, 5, 7, 9, 0, 6, 15, 3, 4};
    int lb = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    quick_sort(arr, lb, n - 1);
    printArray(arr, n);
}
