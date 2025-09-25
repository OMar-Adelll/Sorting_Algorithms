// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

// Time complexity : O(n ^ 2)
void Insertion_sort(vector<int> &nums)
{
    int n = sz(nums);
    for (int i = 1; i < n; i++)
    {
        int val = nums[i];
        int j = i - 1;
        while (j >= 0 && val < nums[j])
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = val;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Insertion_sort(nums);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << nl;

    return 0;
}