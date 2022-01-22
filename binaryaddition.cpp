#include<bits/stdc++.h>
using namespace std;
long reverse(long res){
    long rev=0;
    while(res){
        rev=rev*10+res%10;
        res/=10;
    }
    return rev;
}
long addbinary(long a,long b){
    long res=1,prevcarry=0;
    while(a>0 && b>0){
        if(a%10==0 && b%10==0){
            res=res*10+prevcarry;
            prevcarry=0;
        }
        else if((a%10==0 && b%10!=0)||(a%10!=0 && b%10==0)){
            if(prevcarry==0){
                res=res*10+1;
                prevcarry=0;
            }
            else{
                res=res*10+0;
                prevcarry=1;
            }
        }
        else{
            res=res*10+prevcarry;
            prevcarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(a%2==0){
            res=res*10+prevcarry;
            prevcarry=0;
        }
        else{
            if(prevcarry==0){
                res=res*10+1;
                prevcarry=0;
            }
            else{
                res=res*10+0;
                prevcarry=1;
            }
        }
        a/=10;
    }
    while(b>0){
        if(b%2==0){
            res=res*10+prevcarry;
            prevcarry=0;
        }
        else{
            if(prevcarry==0){
                res=res*10+1;
                prevcarry=0;
            }
            else{
                res=res*10+0;
                prevcarry=1;
            }
        }
        b/=10;
    }
    if(prevcarry==1)
        res=res*10+1;
    res=reverse(res);
    res/=10;
    return res;
}
long len(long a){
    long count=0;
    while(a>0){
        a/=10;
        count++;
    }
    return count;
}
int main(){
    long a,b,ans;
    cout<<"enter first no. (in binary)    :  ";
    cin>>a;
    cout<<"enter second no. (in binary)   :  ";
    cin>>b;
    ans=addbinary(a,b);
    if(len(ans)>len(a))
        cout<<"binary add of these two no. is : "<<addbinary(a,b);
    else
        cout<<"binary add of these two no. is :  "<<addbinary(a,b);
    return 0;
}