def check_character(ch):
    if len(ch) != 1:
        print("Invalid input")
        return
    if ch.isdigit():
        print("It is a Digit")
        return
    if ch.isalpha():
        if ch in "aeiouAEIOU":
            print("It is a vowel")
            return
        else:
            print("It is a consonant")
            return
    print("It is a special character")
    return

def check_character_using_ascii(ch):
    if len(ch) != 1:
        print("Invalid input")
        return
    ascii_value = ord(ch)
    if 48 <= ascii_value <= 57:
        print("It is a Digit")
        return
    if (65 <= ascii_value <= 90) or (97 <= ascii_value <= 122):
        if ch in "aeiouAEIOU":
            print("It is a vowel")
            return
        else:
            print("It is a consonant")
            return
    print("It is a special character")
    return


if __name__ == '__main__':
    ch = input("Enter a character : ")
    check_character(ch)
    check_character_using_ascii(ch)