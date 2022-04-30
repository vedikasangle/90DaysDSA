#include<iostream>
using namespace std ; 

void reverse(int arr[],int n ){
    int low = 0 , high =n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }


}
int main(){
    int arr[] = {2,4,6,9,6} ,  n = 5 ;
    cout<<"before reverse"<<endl;

    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr,n);

    cout<<"after reverse "<<endl;

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}