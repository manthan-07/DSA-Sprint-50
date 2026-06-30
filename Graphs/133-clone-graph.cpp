// LeetCode 133: Clone Graph

class Solution {
public:
    void DFS(Node* node, Node* clone_node, unordered_map<Node*,Node*>& mp){
        for(Node* n: node->neighbors){
            if(mp.find(n) == mp.end()){
                Node* clone = new Node(n->val);
                mp[n] = clone;
                clone_node->neighbors.push_back(clone);
                DFS(n,clone,mp);
            } else clone_node->neighbors.push_back(mp[n]);
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;

        unordered_map<Node*, Node*> mp;

        Node* clone_node = new Node(node->val);
        mp[node] = clone_node;
        DFS(node, clone_node, mp);

        return clone_node;
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
