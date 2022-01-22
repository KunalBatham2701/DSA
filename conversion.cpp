#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(long long n){
    long long i=0,sum=0;
    while(n!=0){
        sum+=(n%10*pow(2,i));
        n/=10;
        i++;
    }
    return sum;
}
int hexadecimaltodecimal(string s){
    long long x=1,sum=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            sum+=x*(s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F'){
            sum+=x*(s[i]-'A'+10);
        }
        x*=16;
    }
    return sum;
}
int decimaltobinary(long long n){
    long long sum=0,rev=0;
    while(n>0){
        sum=sum*10+(n%2);
        n/=2;
    }
    while(sum>0){
        rev=rev*10+sum%10;
        sum/=10;
    }
    return rev;
}
string decimaltohexadecimal(long long n){
    string hex="",s="";
    while(n>0){
        if(n%16<=9)
            hex+=to_string(n%16);
        else{
            char c='A'+(n%16-10);
            hex.push_back(c);
        }
        n/=16;
    }
    for(int i=hex.size()-1;i>=0;i--){
        s.push_back(hex[i]);
    }
    return s;
}
int main(){
    long long n,x;
    cout<<"enter your binary no. : ";
    cin>>n;
    cout<<"enter binary no. in string : ";
    string s;
    // cin>>s;
    x=binarytodecimal(n);
    cout<<"converted decimal no. is "<<x<<endl;
    // cout<<"converted Hexadecimal no. is "<<hexadecimaltodecimal(s)<<endl;
    cout<<"decimal to binay is "<<decimaltobinary(x)<<endl;
    cout<<"decimal to hexadecimal is "<<decimaltohexadecimal(x)<<endl;
}