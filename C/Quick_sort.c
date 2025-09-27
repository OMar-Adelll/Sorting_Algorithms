// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
#include <stdio.h>
int Partition(int nums[], int l, int r)
{
    int pivot = nums[r];
    int i = l - 1, j = l;
    for (; j < r; j++)
    {
        if (nums[j] < pivot)
        {
            i++;
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
    }
    i++;
    int temp = nums[j];
    nums[j] = nums[i];
    nums[i] = temp;

    return i;
}

void Quick_sort(int nums[], int l, int r)
{

    if (l >= r)
        return;

    int pivot = Partition(nums, l, r);
    Quick_sort(nums, l, pivot - 1);
    Quick_sort(nums, pivot + 1, r);
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    Quick_sort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}