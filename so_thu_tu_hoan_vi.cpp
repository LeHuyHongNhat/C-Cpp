#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> permutation(n);
        for (int &i : permutation)
        {
            cin >> i;
        }

        vector<int> sortedPermutation(permutation);
        sort(sortedPermutation.begin(), sortedPermutation.end());

        int pos = 1;
        // kiểm tra 2 vector nếu bằng nhau - > thoát
        do
        {
            if (permutation == sortedPermutation)
            {
                break;
            }
            pos++;
        }
        // hàm next_permutation sinh cấu hình hoán vi tiếp theo 
        while (next_permutation(sortedPermutation.begin(), sortedPermutation.end()));

        cout << pos << endl;
    }
}