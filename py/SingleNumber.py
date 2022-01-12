def single_number1(nums: list[int]):
    # using sets, O(n) time, O(n) space
    return 2 * sum(set(nums)) - sum(nums)

def single_number2(nums: list[int]):
    # using bits, O(n) time, O(1) space
    s = 0
    for num in nums:
        s ^= num
    return s

if __name__ == '__main__':
    nums = [25,1,2,1,2]
    num = single_number1(nums)
    print('Using sets+math:', num)
    print('Using bits:', num)