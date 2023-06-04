#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int arr[100]={7,4,2,8,9,6,7,9,9,9,9,8,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    //method -1 sorting
    sort(arr,arr+n);
    int largest=arr[n-1];
    int secondLargest=arr[0];//if all elements are same
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            secondLargest=arr[i];
            break;
        }
    }
    cout<<"Largest Element is "<<largest<<" and Second Largest is "<<secondLargest<<endl;
    //method -2
    int lar=arr[0];
    int secondLar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondLar && arr[i]!=lar){
            secondLar=arr[i];
        }
    }
    cout<<"Second Largest "<<secondLar<<endl;

    //optimal
    int a=arr[0];//largest
    int b=-1;//secondLargest
//O(N)
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            b=a;
            a=arr[i];
        }
        else if(arr[i]<a && arr[i]>b){
            b=arr[i];
        }
    }
    cout<<b<<endl;
    int arr1[]={1,3,4};
    int c=arr1[0];
    int d=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr1[i]<c){
            d=c;
            c=arr1[i]; 
        }
        else if(arr1[i]!=c && arr1[i]<d){
            d=arr1[i];
        }
    }
    cout<<d<<endl;
}