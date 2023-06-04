#include <iostream>
using namespace std;
bool checkIfSortedArray(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[]={1,2,3,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool ans=checkIfSortedArray(arr,n);
    if(ans){
        cout<<"Array is Sorted : "<<ans<<endl;
    }
    else{
       cout<<"Array is not Sorted : "<<ans<<endl;
    }
}





