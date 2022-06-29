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

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        map<int, Node*> mp;
        queue<Node*> q,q2;
        Node* t=new Node(node->val);
        mp[t->val]=t;
        for(Node* it: node->neighbors)
        {
            Node *p=new Node(it->val);
            mp[it->val]=p;
            (t->neighbors).push_back(p);
            q.push(p);
            q2.push(it);
        }
        while(!q.empty())
        {
            Node* p=q.front();
            Node* qt=q2.front();
            q.pop();
            q2.pop();
            for(Node* it: qt->neighbors)
            {
                if(mp.find(it->val)==mp.end())
                {
                    Node* x=new Node(it->val);
                    mp[x->val]=x;
                    (p->neighbors).push_back(x);
                    q.push(x);
                    q2.push(it);
                }
                else
                {
                    (p->neighbors).push_back(mp[it->val]);
                }
            }
            
        }
        return t;
            
    }
};