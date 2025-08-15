def max_min(nums):
    maximum = -99999
    minimum = 99999
    for num in nums:
        if num > maximum:
            maximum = num
        if num < minimum:
            minimum = num
    return maximum, minimum

if __name__ == '__main__':
    arr = [15, 10, 2, 49, 35, 30, 5, 17, 37, 9]
    maximum, minimum = max_min(arr)
    print(maximum)
    print(minimum)