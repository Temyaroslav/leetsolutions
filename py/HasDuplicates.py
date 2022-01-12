def has_duplicates(nums: list[int]):
    nums.sort()
    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1]:
            return True
    return False

if __name__ == '__main__':
    nums = [1,1,1,3,3,4,3,2,4,2]
    print(has_duplicates(nums))