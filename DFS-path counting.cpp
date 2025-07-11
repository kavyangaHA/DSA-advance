#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int dest, vector<vector<int>> &graph,
         vector<bool> &visited, int &count,vector<bool>&stack) {
    
    // If destination is reached, 
    // increment count
    if (node == dest) {
        count++;
        return true;
    }

    // Mark current node as visited
    visited[node] = true;
    stack[node]=true;

    // Explore all unvisited neighbors
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, dest, graph, visited, count,stack);
        }
        else if(stack[node]=true){
            return false;
        }
    }

    // Backtrack: unmark the node 
    // before returning
    visited[node] = false;
    return true;

}

int countPaths(int n, vector<vector<int>> &edgeList,
               int source, int destination) {

    // Create adjacency list(1 - based indexing)
    vector<vector<int>> graph(n + 1); 
    for (auto &edge : edgeList) {
        int u = edge[0];
        int v = edge[1];
        graph[u].push_back(v);
    }

    // Track visited nodes
    vector<bool> visited(n + 1, false);
    vector<bool>stack(n+1,false);

    int count = 0;

    // Start DFS from source
    bool p=dfs(source, destination, graph, visited, count,stack);
    if(p==true){
    cout<< count;
    }
    else{
        cout<<"INFINITY";
    }
}
