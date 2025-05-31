#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(int start,vector<vector<int>>&graph,int n){
    vector<bool>visited(n+1,false);
    queue<int>q;

    q.push(start);
    visited[start]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor:graph[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}

int main(){
    int n=3;
    int m=3;
    vector<vector<int>>graph(n+1);
    graph[1].push_back(2);
    graph[2].push_back(1);
    graph[1].push_back(3);
    graph[3].push_back(1);
    graph[2].push_back(3);
    graph[3].push_back(2);

    cout<<"BFS starting from node 1:"<<endl;
    bfs(1,graph,n);
    cout<<endl;
    return 0;
    
}