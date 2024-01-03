// https://www.codingninjas.com/studio/problems/inorder-traversal_3839605?leftPanelTabValue=PROBLEM
// Inorder Traversal solution in c++

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

vector<int> v;

void inordered(TreeNode *root)
{
    // basecase
    if (root == NULL)
    {
        return;
    }

    inordered(root->left);
    v.push_back(root->data);
    inordered(root->right);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    inordered(root);
    return v;
}