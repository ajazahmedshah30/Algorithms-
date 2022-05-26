	//A recursive implementation of 0-1 Knapsack problem 
#include <iostream>
using namespace std;

//returns max of two numbers
int max(int a, int b) { return (a > b) ? a : b; }

//returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
	if (n == 0 || W == 0)
		return 0;

	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}
int main()
{
	int value[] = { 60, 100, 120 };
	int weight[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(value) / sizeof(value[0]);
	cout << knapSack(W, weight, value, n);
	return 0;
}
