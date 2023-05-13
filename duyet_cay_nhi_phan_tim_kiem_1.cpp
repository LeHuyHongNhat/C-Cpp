#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *left, *right;
};

typedef Node* binTree;

binTree createNode(int val)
{
    binTree res = new Node;
    res -> val = val;
    res -> left = res -> right = NULL;
    return res;
}

void buildTree(binTree &T, int val)
{
    if(T == NULL)
    {
        T = createNode(val);
        return;
    }
    if(T -> val > val)
        buildTree(T -> left, val);
    else
        buildTree(T -> right, val);
}

void order(binTree T)
{
    if(T -> left)
        order(T -> left);
    if(T -> right)
        order(T -> right);
    cout << T -> val << ' ';
}

int main()
{
    int t = 1, n, val;
    cin >> t;
    while(t--)
    {
        cin >> n;
        binTree T = NULL;
        while(n--)
        {
            cin >> val;
            buildTree(T, val);
        }
        order(T);
        cout << endl;
    }
    return 0;
}
