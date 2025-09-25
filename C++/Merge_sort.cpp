// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

// Time complexity : O( n log(n) )
void Merge(vector<int> &left, vector<int> &right, vector<int> &nums) // Merge section
{
    int ls = sz(nums) / 2, rs = sz(nums) - ls;
    int i = 0, l = 0, r = 0;
    while (l < ls && r < rs)
    {
        if (left[l] < right[r])
            nums[i] = left[l], i++, l++;
        else
            nums[i] = right[r], i++, r++;
    }
    while (l < ls)
        nums[i] = left[l], i++, l++;

    while (r < rs)
        nums[i] = right[r], i++, r++;
}

void Merge_sort(vector<int> &nums) // divide section
{
    int n = sz(nums);
    if (n <= 1)
        return;

    int mid = n / 2;
    vector<int> left(mid), right(n - mid);
    for (int i = 0, j = 0; i < n; i++)
    {
        if (i < mid)
            left[i] = nums[i];
        else
            right[j] = nums[i], j++;
    }

    Merge_sort(left);
    Merge_sort(right);
    Merge(left, right, nums);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Merge_sort(nums);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << nl;

    return 0;
}