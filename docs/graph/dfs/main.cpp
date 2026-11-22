#include <iostream>
#include <vector>

using namespace std;

void dfs(int v, const vector<vector<int>>& graph, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";

    for (int neighbor : graph[v]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},
        {3, 4}, 
        {5}, 
        {},    
        {5}, 
        {} 
    };

    vector<bool> visited(graph.size(), false);
    dfs(0, graph, visited);

    return 0;
}