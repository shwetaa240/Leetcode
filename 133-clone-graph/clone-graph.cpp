/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     vector<Node*> neighbors;
 *     Node(int val) {
 *         this->val = val;
 *         neighbors = vector<Node*>();
 *     }
 * };
 */
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) {
            return nullptr;
        }

        unordered_map<Node*, Node*> visited;
        queue<Node*> q;

        visited[node] = new Node(node->val);

        q.push(node);

        while (!q.empty()) {
            Node* currNode = q.front();
            q.pop();

            for (Node* neighbor : currNode->neighbors) {
                if (!visited.count(neighbor)) {
                    visited[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }

                visited[currNode]->neighbors.push_back(visited[neighbor]);
            }
        }

        return visited[node];
    }
};