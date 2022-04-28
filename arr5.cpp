#include <iostream>
using namespace std;

//largest element efficient approach 

int getlargest(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[res])
            res = i;
    return res;
}

int main()
{
    int arr[] = {15, 12, 30, 90};
    cout << getlargest(arr, 4);
    return 0;
}
