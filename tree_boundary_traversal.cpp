bool isLeaf(Node *root)
    {
        if(root && (root->left == NULL) && (root->right == NULL))
            return true;
        else
            return false;
    }
    
    void addLeft(Node *root, vector < int > &res)
    {
        Node *curr = root->left;
        while(curr != NULL)
        {
            if(!isLeaf(curr))
                res.push_back(curr->data);
            if(curr->left != NULL)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }
    
    void addLeaf(Node *root, vector<int> &res)
    {
        if(isLeaf(root))
        {
            res.push_back(root->data);
            return;
        }
        addLeaf(root->left,res);
        addLeaf(root->right,res);
    }
    
    void addRight(Node *root, vector < int > &res)
    {
        Node *curr = root->right;
        stack <int> st;
        while(curr != NULL)
        {
            if(!isLeaf(curr))
                st.push(curr->data);
            if(curr->right != NULL)
                curr = curr->right;
            else
                curr = curr->left;
        }
        
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
    }
    
    
    vector <int> printBoundary(Node *root)
    {
        vector < int > res;
        if(root == NULL)
            return res;
        if(!isLeaf(root))
            res.push_back(root->data);
        addLeft(root,res);
        addLeaf(root,res);
        addRight(root,res);
        return res;
    }
