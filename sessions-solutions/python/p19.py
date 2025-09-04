def get_quotient(a, b):
    if b == 0:
        print("Invalid input")
        return
    result = a // b
    print(f"The result is {result}")


if __name__ == '__main__':
    number1 = int(input("Enter a number: "))
    number2 = int(input("Enter another number: "))
    get_quotient(number1, number2)