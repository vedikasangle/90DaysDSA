#include<iostream>
using namespace std ;

//largest element in an array 
int getlargest(int arr[],int n ){
    for(int i = 0 ; i<n ; i++){
    bool flag = true;
    for(int j = 0 ;j < n ; j++){
    if (arr[j]>arr[i]){
        flag = false;
        break;
    }
    }
    if (flag == true)
    return i ; 
    }
    return -1;
}
int main(){
    int arr[] = {5,8,20,10};
    cout<<getlargest(arr,4);
    return 0 ;
}