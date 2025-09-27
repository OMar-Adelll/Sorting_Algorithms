// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <stdio.h>

// Time Complexity O(n ^ 2)
void Insertion_sort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int val = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > val)
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
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    Insertion_sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}