#include <iostream>
using namespace std;

bool issorted(int arr[], int n)
{
    for (int i = 1; i < n; i++) //why false when i = 0 put ??
        if (arr[i] < arr[i - 1])
            return false ;
        return true;
}

int main (){
    int arr[] = {3,5,7,9,10} , n =5;
    printf("%s", issorted(arr , n)? "true" : "false");  //syntax
    return 0;
}