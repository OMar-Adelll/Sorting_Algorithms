// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

// Time complexity : O(n ^ 2)
void Bubble_sort(vector<int> &nums)
{
    int n = sz(nums);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Bubble_sort(nums);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << nl;

    return 0;
}