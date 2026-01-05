//Given an array of $N$ integers, you can perform one move: choose any element 
//and increase or decrease it by 1. What is the minimum number of moves to make 
//all elements in the array equal?Constraints: $N \leq 10^5$. Each element $\leq 10^9$.
//Think: If you have numbers [1, 2, 10], what value should you bring them all to? (Average? Median? Something else?)


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector <long long>v;
   for (int i=0;i<n;i++){
    long long x;
    cin>>x;
    v.push_back(x);
   }
   sort(v.begin(),v.end());

   long long median = v[n/2];
   long long total_moves=0;
   for(int j=0;j<n;j++){
    total_moves+=abs(v[j]-median);
   }
   cout<<total_moves<<endl;
}