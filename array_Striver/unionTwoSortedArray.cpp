#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr1[]={1,1,4,5,6,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,3,4,4,5,7,9};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    set<int> st;
    //O(n1logn)
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    //O(n2logn)
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int size1=st.size();
    int unionArr[size1];
    int i=0;
    //O(n1+n2)
    for(auto itr: st ){
        unionArr[i]=itr;
        i++;
    }
    
    for(int i=0;i<size1;i++){
        cout<<unionArr[i]<<" ";
    }






}