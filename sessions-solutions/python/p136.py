if __name__ == '__main__':
    numbers = [10, 20, 30, 40, 100, 102]
    closest_diff = 9999
    closest_number = None
    for num in numbers:
        abs_diff = abs(100 - num)
        if abs_diff < closest_diff:
            closest_diff = abs_diff
            closest_number = num

    print(closest_number)

