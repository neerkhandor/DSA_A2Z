#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    // int arr1[]={1,1,4,5,6,6};
    // int n1=sizeof(arr1)/sizeof(arr1[0]);
    // int arr2[]={2,3,4,4,5,7,9};
    // int n2=sizeof(arr2)/sizeof(arr2[0]);
    // set<int> st;
    // //O(n1logn)
    // for(int i=0;i<n1;i++){
    //     st.insert(arr1[i]);
    // }
    // //O(n2logn)
    // for(int i=0;i<n2;i++){
    //     st.insert(arr2[i]);
    // }
    // int size1=st.size();
    // int unionArr[size1];
    // int i=0;
    // //O(n1+n2)
    // for(auto itr: st ){
    //     unionArr[i]=itr;
    //     i++;
    // }
    
    // for(int i=0;i<size1;i++){
    //     cout<<unionArr[i]<<" ";
    // }
    
    int arr1[]={1,1,4,5,6,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,3,4,4,5,7,9};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> unionArr;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
            unionArr.push_back(arr1[i]);
            }
        i++;
        }
        else {
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
        }
    }
    while(i<n1){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i])
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for(auto i:unionArr){
       cout<<i<<" "; 
    }
}