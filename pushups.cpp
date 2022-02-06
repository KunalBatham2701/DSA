#include<bits/stdc++.h>
using namespace std;
long calpushups(vector<int> protein){
    long ans = 0;
    sort(protein.begin(), protein.end(), greater<int>());
    for(int i = 0; i < protein.size(); i++){
        long mul = pow(3, i);
        ans+=mul*protein[i];
    }
    return ans;
}
int main(){
     #ifndef ONLINE_JUDGE
        freopen("input00.txt","r", stdin);
        freopen("output00.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> protein(n);
    for(int i=0;i<n;i++){
        cin>>protein[i];
    }
    long result=calpushups(protein);
    cout<<result<<"\n";
    return 0;
}