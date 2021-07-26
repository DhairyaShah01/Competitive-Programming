#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node* newNode(int data)
{
    struct node *temp = new struct node;
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
 
    return temp;
}

struct node * makeTree(int arr[], node* root, int i, int j) {
    int max = 0;
    int pos = 0;
    for(int k=i;k<j;k++) {
        if(arr[k] > max) {
            max = arr[k];
            pos = k;
        }
    }
    struct node* temp = newNode(max);
    root = temp;

    root->data = max;
    root->left = makeTree(arr,root->left,i,pos-1);
    root->right = makeTree(arr,root->right,pos+1,j);

    return root;
}

int getLevelUtil(struct node *node, 
                 int data, int level)
{
    if (node == NULL)
        return 0;
 
    if (node -> data == data)
        return level;
 
    int downlevel = getLevelUtil(node -> left, 
                                 data, level + 1);
    if (downlevel != 0)
        return downlevel;
 
    downlevel = getLevelUtil(node->right, 
                             data, level + 1);
    return downlevel;
}
 
/* Returns level of given data value */
int getLevel(struct node *node, int data)
{
    return getLevelUtil(node, data, 1);
}

int main() 
{
    int t, n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int arr[n];
        int pos;
        int max = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i] > max){
                max = arr[i];
                pos = i;
            }
        }
        struct node * root = makeTree(arr, root, 0, n);
        for(int i=0;i<n;i++) {
            cout << getLevel(root, arr[i]) << " ";
        }
    }
    return 0;
}