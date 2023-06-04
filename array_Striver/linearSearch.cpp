#include<iostream>
#include<vector>
using namespace std;
bool linearSearch(int arr[],int n,int key,int &index){
for(int i=0;i<n;i++){
        if(arr[i]==key){
            index = i;
            return true;
            break;
        }
    }
    return false;
}
bool RevlinearSearch(int arr[],int n,int key,int &index){
for(int i=n;i>0;i--){
        if(arr[i]==key){
            index = i;
            return true;
            break;
        }
    }
    return false;
}
vector<int> storeLinearSearch(int arr[],int n,int key,vector<int>&ans){
for(int i=0;i<n;i++){
        if(arr[i]==key){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    int arr[]={0,10,3,5,7,2,1,6,5,6,7,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    int index=-1;
    bool ans=linearSearch(arr,n,key,index);
    if(ans){
        cout<<"from starting "<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not present."<<endl;
    }
    bool ans1=RevlinearSearch(arr,n,key,index);
    if(ans1){
        cout<<"from ending "<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not present."<<endl;
    }
    vector<int>b;
    vector<int> a=storeLinearSearch(arr,n,key,b);
    for(auto i:a){
        cout<<i<<" ";
    }
}