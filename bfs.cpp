#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int v, vector<int> adj[]){
    //visited array to keep track of the nodes
    int visited[v] = {0};
    visited[0]=1;
    //to keep track of traversal sequence
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        
        //for traversing the next level adjacent nodes thru adj list
        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] =1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main() {
    int v = 5; 
    vector<int> adj[v]; 

    //undirected graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[4].push_back(1);

    vector<int> result = bfs(v, adj);

    cout << "BFS Traversal: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}