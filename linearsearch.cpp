#include <iostream>
using namespace std;

//array1.cpp

//linear search 
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
} 
