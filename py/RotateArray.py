def rotate_array1(nums: list[int], k: int):
    # O(n) time, O(n) space
    n = len(nums)
    tmp = [None] * n
    for i in range(n):
        idx = (i + k) % n
        tmp[idx] = nums[idx]
        if tmp[i] is None:
            nums[idx] = nums[i]
        else:
            nums[idx] = tmp[i]

def _reverse(nums: list[int], start: int, end: int):
    while(start < end):
        tmp = nums[start]
        nums[start] = nums[end]
        nums[end] = tmp
        start += 1
        end -= 1

def rotate_array2(nums: list[int], k: int):
    n = len(nums)
    k  = k % n
    _reverse(nums, 0, n - 1)
    _reverse(nums, 0, k - 1)
    _reverse(nums, k, n - 1)

if __name__ == '__main__':
    # nums = [1, 2, 3, 4, 5, 6, 7]
    k = 3
    # rotate_array1(nums, k)
    # print(nums)

    nums = [1, 2, 3, 4, 5, 6, 7]
    rotate_array2(nums, k)
    print(nums)