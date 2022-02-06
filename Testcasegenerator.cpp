#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0;
    string inputfile = "input00" + to_string(i) +".txt";
    string outputfile = "output00" + to_string(i) +".txt";
   ofstream hout(inputfile);
   int random = 300000;//size of array
   hout<<to_string(random)<<endl;
   for (int i = 1; i <= random; i++)
   {
       string st = to_string(rand()%80000+1);//range of elements of array where 10000 is size of range and 1 is starting number of that range
       hout<<st<<endl;
   }
   hout.close();
   ifstream hin(inputfile);
   string s;
   hin>>s;
   int n = stoi(s);
   vector<long> score;
   for(int i=0;i<n;i++){
       hin>>s;
       int a = stoi(s);
       score.push_back(a);
   }
   hin.close();
//    logic
   //    size of input array is N here
// the arrar is A vector
// write your code here
    vector<int> up(n, 1); 
  vector<int> down(n, 1); 
 
  for (int i = 1; i < n; i++) { 
    if (score[i] > score[i - 1]) { 
      up[i] = up[i - 1] + 1; 
    } 
 
    if (score[n - i - 1] > score[n - i]) { 
      down[n - i - 1] = down[n - i] + 1; 
    } 
  } 
 
  long long int ans = 0; 
  for (int i = 0; i < n; i++) { 
    ans += max(up[i], down[i]); 
  } 
 
  cout << ans; 


    // end of logic
 ofstream out(outputfile);
    out<<to_string(ans);
    out.close();
   return 0;
}