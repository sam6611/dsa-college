#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <string>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

class Solution {
  public:

    int solve(Node* node, int target, int level) {
        if (node == NULL)
            return 0;

        // If target found
        if (node->data == target)
            return level;

        // Search left subtree
        int left = solve(node->left, target, level + 1);
        if (left != 0)
            return left;

        // Search right subtree
        return solve(node->right, target, level + 1);
    }

    int getLevel(struct Node *node, int target) {
        return solve(node, target, 1);
    }
};
