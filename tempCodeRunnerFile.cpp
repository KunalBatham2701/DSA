#include<bits/stdc++.h>
using namespace std;
long calpushups(vector<int> protein){
    long ans = 0;
    sort(protein.begin(), protein.end(), greater<int>());
    for(int i = 0; i < protein.size(); i++){
        long mul = pow(3, i);