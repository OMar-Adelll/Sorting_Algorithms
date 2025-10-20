# بسم الله الرحمن الرحيم
# "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"


# Time complexity: O(n long(n) )
def Merge(left, right, nums):
    ls = len(left)
    rs = len(right)
    i = l = r = 0
    while l < ls and r < rs:
        if left[l] < right[r]:
            nums[i] = left[l]
            l += 1
        else:
            nums[i] = right[r]
            r += 1
        i += 1

    while l < ls:
        nums[i] = left[l]
        i += 1
        l += 1

    while r < rs:
        nums[i] = right[r]
        i += 1
        r += 1


def Merge_sort(nums):
    n = len(nums)
    if n <= 1:
        return
    mid = n // 2
    left = [0] * mid
    right = [0] * (n - mid)

    j = 0
    for i in range(n):
        if i < mid:
            left[i] = nums[i]
        else:
            right[j] = nums[i]
            j += 1

    Merge_sort(left)
    Merge_sort(right)
    Merge(left, right, nums)


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    Merge_sort(nums)
    print(*nums)


if __name__ == "__main__":
    main()
