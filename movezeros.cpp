#include<iostream>
using namespace std ;

//efficient approach 


void movezeros(int arr[],int n ){
    int count = 0 ;
    for(int i = 0 ; i<n ; i ++ ){
        if(arr[i]!=0)
        {
            swap (arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    int arr[] = {10,2,30,0,0,34,45} ,n = 7;
    cout<<"Before removing zeroes";

    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"After removing zeroes";

    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
}
