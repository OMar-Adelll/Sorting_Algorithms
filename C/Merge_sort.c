// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <stdio.h>

// Time complexity : O( n log(n) )

void Merge(int l_nums[], int ls, int r_nums[], int rs, int nums[]) // Merge section
{
    int i = 0, l = 0, r = 0;
    while (l < ls && r < rs)
    {
        if (l_nums[l] < r_nums[r])
            nums[i] = l_nums[l], l++, i++;
        else
            nums[i] = r_nums[r], r++, i++;
    }

    while (l < ls)
        nums[i] = l_nums[l], l++, i++;

    while (r < rs)
        nums[i] = r_nums[r], r++, i++;
}

void Merge_sort(int nums[], int n) // divide section
{

    if (n <= 1)
        return;

    int mid = n / 2;
    int l_nums[mid], r_nums[n - mid];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < mid)
            l_nums[i] = nums[i];
        else
            r_nums[j] = nums[i], j++;
    }

    Merge_sort(l_nums, mid);
    Merge_sort(r_nums, n - mid);
    Merge(l_nums, mid, r_nums, n - mid, nums);
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    Merge_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}