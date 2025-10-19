# بسم الله الرحمن الرحيم
# "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"


# Time complexity: O(n^2)
def Selection_sort(nums):
    n = len(nums)
    for i in range(n - 1):
        mn = i
        for j in range(i + 1, n):
            if nums[j] < nums[mn]:
                mn = j
        nums[mn], nums[i] = nums[i], nums[mn]


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    Selection_sort(nums)
    print(*nums)


if __name__ == "__main__":
    main()
