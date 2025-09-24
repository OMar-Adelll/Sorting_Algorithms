// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

// Time Complexity : O(n ^ 2)
void Selection_sort(vector<int> &nums)
{
    int n = sz(nums);
    for (int i = 0; i < n - 1; i++)
    {
        int M = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[M])
                M = j;
        }
        swap(nums[M], nums[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Selection_sort(nums);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << nl;

    return 0;
}