if __name__ == '__main__':
    items = [10, 20, 30, 40, 100, 102]
    items_diff = []
    for item in items:
        abs_diff = abs(50 - item)
        items_diff.append(abs_diff)

    print(items_diff)

