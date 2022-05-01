//efficient approach 

#include<iostream>
using namespace std ;

int remdups(int arr[],int n ){
    int res = 1 ;
    for(int i = 1; i <n ; i++){
        if (arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res ;

}

int main(){
    //int arr[]= {40,40,50,40,60,70} , n =6 ;  third 40 not removed? why??! , okayy yess sorted array! :)

    int arr[]= {40,40,50,50,60,70} , n =6 ; 

    cout<<"Before applying the function"<<endl;
    for(int i = 0 ;  i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    n = remdups(arr, 6 ); 

    cout<<"after applying the function "<<endl;
    for(int i = 0 ; i <n ; i ++){
        cout<<arr[i]<<" ";
    }

    return 0 ; 
}