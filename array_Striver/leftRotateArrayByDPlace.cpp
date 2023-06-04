#include<iostream>
using namespace std;
void reverse1(int arr[],int s,int e){
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
void leftRotateByD(int arr[],int n,int d){
    reverse1(arr,0,d-1);
    reverse1(arr,d,n-1);
    reverse1(arr,0,n-1);
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n1=sizeof(a)/sizeof(a[0]);
    int d=13;
    d=d%n1;
    //sc:O(d)
    int* temp1=new int[d];
    
    //tc:O(d)
    for(int i=0;i<d;i++){
        temp1[i]=a[i];
    }
    // for(int i=0;i<d;i++){
    //     cout<<temp1[i]<<" ";
    // }
    // cout<<endl;
    for(int i=d;i<n1;i++){
        a[i-d]=a[i];
    }
    //tc:O(n-d)
    // int j=0;
    for(int i=n1-d;i<n1;i++){
        // a[i]=temp1[j];
        // j++;
        a[i]=temp1[i-(n1-d)];
    }
    // for(int i=d;i<n1;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl<<endl;
    
    // for(int i=d;i<n1;i++){
    //     cout<<a[i]<<" ";
    // }
    // for(int i=n1-d;i<n1;i++){
    //     cout<<temp1[i]<<" ";
    // }
    for(int i=0;i<n1;i++){
        cout<<a[i]<<" ";
    }


    cout<<endl<<endl;
    leftRotateByD(a,n1,d);

    for(int i=0;i<n1;i++){
        cout<<a[i]<<" ";
    }


}