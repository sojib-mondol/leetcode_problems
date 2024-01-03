// https://www.codingninjas.com/studio/problems/name_2035933?leftPanelTabValue=PROBLEM
//  Postorder Traversal solutin in c++

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
void postordered(TreeNode *root)
{

    // basecase
    if (root == NULL)
    {
        return;
    }

    postordered(root->left);
    postordered(root->right);
    v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    v.clear();
    postordered(root);
    return v;
}