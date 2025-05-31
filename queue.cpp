#include <iostream>
#include <queue>
#include <vector>
#include<algoorithm>

using namespace std;
int main(){
    priority_queue<int>maxheap;
    maxheap.push(10);
    maxheap.push(20);
    maxheap.push(122);
    cout<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<maxheap.top()<<endl;

    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(10);
    minheap.push(20);
    minheap.push(122);
    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;
    return 0;
}