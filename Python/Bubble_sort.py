# بسم الله الرحمن الرحيم
# "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"


# Time complexity: O(n^2)
def Bubble_sort(nums):
    n = len(nums)
    for i in range(n):
        for j in range(n - i - 1):
            if nums[j] > nums[j + 1]:
                nums[j], nums[j + 1] = nums[j + 1], nums[j]


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    Bubble_sort(nums)
    print(*nums)


if __name__ == "__main__":
    main()
