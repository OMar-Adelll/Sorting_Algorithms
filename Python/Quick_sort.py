# بسم الله الرحمن الرحيم
# "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"


# Time complexity: O(n log (N))
def Partition(nums, l, r):
    pivot = nums[r]
    i = l - 1
    j = l
    while j < r:
        if nums[j] < pivot:
            i += 1
            nums[i], nums[j] = nums[j], nums[i]
        j += 1
    i += 1
    nums[i], nums[j] = nums[j], nums[i]
    
    return i
         
    


def Quick_sort(nums, l, r):
    if l >= r:
        return
    pivot = Partition(nums, l, r)
    Quick_sort(nums, l, pivot - 1)
    Quick_sort(nums, pivot + 1, r)


def main():
    n = int(input())
    nums = list(map(int, input().split()))
    Quick_sort(nums, 0 , n - 1)
    print(*nums)


if __name__ == "__main__":
    main()
