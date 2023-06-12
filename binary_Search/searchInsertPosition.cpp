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
    return low;
}

int main(){
int arr[]={2,4,5,6,7,9,15};
int n=sizeof(arr)/sizeof(arr[0]);
int target=8;
int ans=binarySearch(arr,n,target);
cout<<target<<" is found at index "<<ans<<endl;
}