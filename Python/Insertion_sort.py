# بسم الله الرحمن الرحيم
# "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"


# Time complexity: O(n^2)
def Insertion_sort(nums):
    n = len(nums)
    for i in range(1, n):
        val = nums[i]
        j = i - 1
        while j >= 0 and val < nums[j]:
            nums[j + 1] = nums[j]
            j -= 1
        nums[j + 1] = val


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    Insertion_sort(nums)
    print(*nums)


if __name__ == "__main__":
    main()
