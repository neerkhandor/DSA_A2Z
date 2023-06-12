#include<iostream>
using namespace std;
int lowerBound(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int UpperBound(int arr[],int n,int x){
     int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
int arr[]={2,4,5,6,7,8,9,15};
int n=sizeof(arr)/sizeof(arr[0]);
int x=8;
int ans=lowerBound(arr,n,x);
cout<<x<<" is lower bound of index "<<ans<<endl;
// int lb=lower_bound(arr,arr+n,x);
// int ans1=lb-arr[0];
// cout<<ans1<<endl;
int ans1=UpperBound(arr,n,x);
cout<<x<<" is Upper bound of index "<<ans1<<endl;

}