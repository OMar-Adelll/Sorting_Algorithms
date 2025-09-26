// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)x.size()
#define nl '\n'

// Time complexity : O( n log(n) )
int partition(vector<int> &nums, int l, int r)
{
    int pivot = nums[r];
    int i = l - 1, j = l;
    for (; j < r; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    i++;
    swap(nums[i], nums[j]);

    return i;
}
void Quick_sort(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return; // base case

    int pivot = partition(nums, l, r);
    Quick_sort(nums, l, pivot - 1);
    Quick_sort(nums, pivot + 1, r);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Quick_sort(nums, 0, n - 1); // you should pass the array and the start index and the end index

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    cout << nl;

    return 0;
}