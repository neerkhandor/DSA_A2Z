#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    // int mid=low+(high-low)/2;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        // mid=low+(high-low)/2;
    }
    return -1;
}
int recBinarySearch(int arr[],int low,int high,int target){
   if(low>high){
    return -1;
   }
   int mid=low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return recBinarySearch(arr,low,mid-1,target);
    }
    else{
        return recBinarySearch(arr,mid+1,high,target);
    }
}
int main(){
int arr[]={2,4,5,6,7,9,15};
int n=sizeof(arr)/sizeof(arr[0]);
int target=15;
int ans=recBinarySearch(arr,0,n-1,target);
cout<<target<<" is found at index "<<ans<<endl;
}