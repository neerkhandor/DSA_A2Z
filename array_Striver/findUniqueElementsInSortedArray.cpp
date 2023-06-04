#include <iostream>
#include <set>
using namespace std;

int main(){
    int arr[]={1,1,1,2,2,2,3,3,3,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    //method 1 using set data structure
    //tc:O(nlogn)+O(n)
    set<int>st;
    //tc:O(nlongn)
    //sc:O(n) if all the elements were unique
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int counter=0;
    //tc:O(n)
    for(auto i : st){
        // cout<<i<<" ";
        counter++;
    }
    cout<<endl;
    cout<<"Total no of unique elements is the sorted array is "<<counter<<endl;
    
    //method -2: using 2 pointer approach
    // TC:O(N)
    // SC:O(1)
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    //now total no of unique values will be present in the 1 location
    //ahead than i position
    cout<<"Total no of unique elements is the sorted array is "<<(i+1)<<endl;

}