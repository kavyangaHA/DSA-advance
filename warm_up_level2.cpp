//The Scenario:Instead of a simple list, you are given $K$ intervals.
//Example: "There are 1,000,000 numbers with the value 5, and 1,000,000 numbers with the value 10."
//Constraints: $K \leq 10^5$, but the total count of numbers $N$ can be $10^{14}$.If you try to use vector<long long> v;
// and push_back $10^{14}$ numbers, your program will crash instantly because it will run out of memory (10^14 integers 
//would require petabytes of RAM).

//How to solve this:Don't expand the numbers. Keep them as a list of pairs: {value, frequency}.
//Sort the pairs by value.Find the "Global Median" by calculating the total frequency $S$,
//then finding which value-interval contains the $(S/2)$-th element.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve();

  int main() {
        solve();
        return 0;
    }

void solve(){
    int k;
    cin >>k;
    vector<pair<ll,ll>>data(k);//{value, frequency}
    ll total_elements = 0;
    for(int i =0;i<k;i++){
        cin >>data[i].first>>data[i].second;
        total_elements +=data[i].second;

    }
    //sort by the value
    sort(data.begin(),data.end());
    //find the median position
    ll target = (total_elements+1)/2;
    ll current_sum = 0;
    ll median_val =0;

    for(int i=0;i<k;i++){
        current_sum+=data[i].second;
        if(current_sum >=target){
            median_val=data[i].first;
            break;
        }
    }

    //Calculate total moves
    ll total_moves =0;
    for (int i=0;i<k;i++){
        //use __int128 if total_moves exceeds 10^18,
        //but long long usually suffices for 10^14 range
        total_moves += abs(data[i].first - median_val)*data[i].second;

    }

    cout <<total_moves <<endl;
  
    






}