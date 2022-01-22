#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    // int a=sqrt(n);
    // cout<<a;
    n=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int k=1;k<=2*n-2*i;k++)
            cout<<"  ";
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;  
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int k=1;k<=2*n-2*i;k++)
            cout<<"  ";
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;  
    }
}