#include<bits/stdc++.h>

using namespace std;

int a[1000005];

struct Node
{
    int val;
    Node *left, *right;
};

typedef Node* binTree;

inline binTree createNode(int val)
{
    binTree res = new Node;
    res -> val = val;
    res -> left = res -> right = NULL;
    return res;
}

inline binTree buildTree(int l, int r)
{
    if(l > r)
        return NULL;
    int mid = (l + r) >> 1;
    binTree res = createNode(a[mid]);
    res -> left = buildTree(l, mid - 1);
    res -> right = buildTree(mid + 1, r);
    return res;
}

inline void order(binTree T)
{
    if(T)
    {
        cout << T -> val << ' ';
        if(T -> left)
            order(T -> left);
        if(T -> right)
            order(T -> right);
    }
}

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        binTree T = buildTree(0, n - 1);
        order(T);
        cout << endl;
    }
    return 0;
}
