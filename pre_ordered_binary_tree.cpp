// https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948?leftPanelTabValue=PROBLEM
//  Preorder Binary Tree solution in c++

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> v;
void preordered(TreeNode<int> *root)
{

    // basecase
    if (root == NULL)
    {
        return;
    }

    v.push_back(root->data);
    preordered(root->left);
    preordered(root->right);
}

vector<int> preOrder(TreeNode<int> *root)
{

    v.clear();

    preordered(root);
    return v;
}
