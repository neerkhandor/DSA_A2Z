#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before left rotate"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<endl;
    cout<<"Array after left rotate"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   

}