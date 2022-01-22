#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N=10000;
    int arr2[N];
    for(int i=0;i<N;i++){
        arr2[i]=-1;
    }
    int minindex=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr2[arr[i]]!=-1)
            minindex=min(minindex,arr2[arr[i]]);
        else
            arr2[arr[i]]=i;
    }
    if(minindex==INT_MAX)
        cout<<"-1\n";
    else
        cout<<"minindex : \n"<<minindex+1;
    return 0;
}