#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int el){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high)
{
    int mid=low+(high-low)/2;
    if(arr[mid]==el){
        ans=mid;
        high=mid-1;
    }
    else if(arr[mid]>el){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
return ans;
}
int lastOccurence(int arr[],int n,int el){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high)
{
    int mid=low+(high-low)/2;
    if(arr[mid]==el){
        ans=mid;
        low=mid+1;
    }
    else if(arr[mid]>el){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
return ans;
}
int firstLast(int arr[],int n,int x){
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    return first;
}
int main(){
int arr[]={1,2,5,5,5,5,7,7,9,10};
int n=sizeof(arr)/sizeof(arr[0]);
int el=5;
// int ans=firstOccurence(arr,n,el);
// int ans1=lastOccurence(arr,n,el);
// cout<<"First Occurence of "<<el<<" is "<<ans <<endl;
// cout<<"Last Occurence of "<<el<<" is "<<ans1 <<endl;
pair<int,int> ans;
ans.first=firstOccurence(arr,n,el);
ans.second=lastOccurence(arr,n,el);
cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
int a=firstLast(arr,n,el);
cout<<a<<endl;
}