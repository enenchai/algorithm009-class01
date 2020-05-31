/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > ans;
        if(root==NULL) {return ans;}
        queue<Node*> q;
        q.push(root);
        vector<int> a;
        while(!q.empty())
        {
            a.clear();
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                a.push_back(q.front()->val);
                for(int j=0;j<q.front()->children.size();j++)
                {
                    q.push(q.front()->children[j]);
                }
                q.pop();
            }
            ans.push_back(a);
        }
        return ans;
    }
};
