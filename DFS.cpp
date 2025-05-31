#include <iostream>
#include<stack>
#include<vector>

void DFS(int start,vector<vector<int>>&graph,vector<bool>&visited){
    stack<int>s;
    s.push(start);

    visited[start]=true;
    while(!s.empty()){
        int node =s.top();
        s.pop();
        couty<<node<<" ";
        for(int i=graph[node].size-1;i>=0;i++){
            int neighbor=graph[node][i];
            if(!visited[neighbor]){
                visitedd[neighbor]=true;
                s.push(neighbor);
            }
        }

    }





}