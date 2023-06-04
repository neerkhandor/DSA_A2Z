#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,0,1,1,2,3,0,0,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int *temp =new int[10];
    vector<int> temp;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    // for(int i=0;i<cnt;i++){
    //     cout<<temp[i]<<" ";
    // }
    int j=0;
    for(int i=0;i<cnt;i++){
        arr[i]=temp[j];
        j++; 
    }
    for(int i=cnt;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl<<endl;
    //method -2 : two pointer approach
    //tc:O(n)
    //sc:O(1) if no extra space is said
    int arr1[]={0,0,1,1,2,0,1,1,2,3,0,0,1,3,0,0};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int j1=-1;
    for(int i=0;i<n1;i++){
        if(arr1[i]==0){
            j1=i;
            break;
        }
    }
    for(int i=j1+1;i<n1;i++){
        if(arr1[i]!=0){
            swap(arr1[i],arr1[j1]);
            j1++;
        }
    }
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
}