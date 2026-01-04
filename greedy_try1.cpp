#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int coinChange(vector<int>& coins, int amount){
    priority_queue<int>maxHeap;
    int count=0;
    while(amount>0){
        if(amount>=maxHeap.top() && !maxHeap.empty()){
            amount=amount-maxHeap.top();
            count++;
            cout<<maxHeap.top()<<"count= "<<count<<endl;
        }
        else{
            maxHeap.pop();
            if(maxHeap.empty()){
                return -1;
            }
        }
    }
    return count;

}

int main(){
    vector<int>coins1={5,2,1};
    vector<int>coins2={5,2};
    int amount=11;
    int result=coinChange(coins1,11);
    cout<<"minimum # of coins= "<<result;

    return 0;
}