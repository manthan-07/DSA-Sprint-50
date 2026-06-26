// LeetCode 1971: Find if Path Exists in Graph

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        
        for(auto& edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        queue<int> q;
        unordered_set<int> visited;

        q.push(source);
        visited.insert(source);

        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(node == destination) return true;
            for(int x: graph[node]){
                if(visited.find(x) == visited.end()){
                    q.push(x);
                    visited.insert(x);
                }
            }
        }

        return false;

    }
};