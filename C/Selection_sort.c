// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <stdio.h>

// Time Complexity O(n ^ 2)
void Selection_sort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int M = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[M])
                M = j;
        }

        int temp = nums[i];
        nums[i] = nums[M];
        nums[M] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    Selection_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}