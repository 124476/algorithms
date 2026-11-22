#include <iostream>
#include <queue>

using namespace std;

void bfs(int start, const vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int neighbor : graph[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
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
    bfs(0, graph);

    return 0;
}