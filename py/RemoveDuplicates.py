def remove_duplicates(nums: list[int]):
    n = len(nums)
    j = 0
    # tmp = ['_'] * n
    if n == 0 or n == 1:
        return n

    for i in range(n - 1):
        if nums[i] != nums[i + 1]:
            nums[j] = nums[i]
            j += 1
    
    # insert the last element
    nums[j] = nums[n - 1]

    # for i in range(j + 1):
    #     nums[i] = tmp[i]

    return j + 1

if __name__ == '__main__':
    # nums = [1, 1, 2]
    nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]

    k = remove_duplicates(nums)
    print(k, nums[:k])
