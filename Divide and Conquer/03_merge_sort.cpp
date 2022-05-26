//This is a program the hardcoded array is sorted in ascending order using merge sort.
#include <iostream>
using namespace std;
//This function displays array based on its upper limit.
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
//This function merges the two arrays which we divided by middle using merge_sort function.
void merge(int a[], int left, int mid, int right)
{
    //Creating a temporary array b to store the elements in sorted order.
    int i = left, j = mid + 1, k = left, b[50];
    while (i <= mid || j <= right)
    {
        if (i > mid)                //if the elements of left sub-array have exhausted, we enter all elements of right sub-array.
        {
            b[k++] = a[j++];
            continue;
        }
        if (j > right)              //if the elements of right sub-array have exhausted, we enter all elements of left sub-array.
        {
            b[k++] = a[i++];
            continue;
        }
        //Checking whether the elements in left sub-array are bigger or smaller than right sub-array and entering the elements appropriately.
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else if (a[i] > a[j])
        {
            b[k++] = a[j++];
        }
        else
        {
            b[k++] = a[i++];
            b[k++] = a[j++];
        }
    }
    //Entering the elements back from the sorted array to the original array.
    for(k = left; k <=right; k++){
        a[k] = b[k];
    }
}
//This function is used to divide the array into sub-arrays by the middle (i.e (upperbound + lowerbound) / 2)
void merge_sort(int a[], int lb, int ub)
{
    if (lb < ub)                                //when lb == ub, theres only only one element in the array.
    {
        int mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);                 //sub-array from lowerbound upto middle
        merge_sort(a, mid + 1, ub);             //sub-array from mid + 1 to upperbound
        merge(a, lb, mid, ub);                  
    }
}
int main()
{
    int arr[] = {12, 1, 5, 7, 9, 0, 6, 15, 3, 4};
    int lb = 0;
    int ub = sizeof(arr) / sizeof(arr[0]) - 1;
    printArray(arr, ub + 1);
    merge_sort(arr, lb, ub);
    printArray(arr, ub + 1);
}
