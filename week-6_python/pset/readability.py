def main():
    text = input("Text: ")

    letters = letters_count(text)
    words = words_count(text)
    sentences = sentences_count(text)

    l = (letters / words) * 100
    s = (sentences / words) * 100

    index = round(0.0588 * l - 0.296 * s - 15.8)

    if (index < 1):
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")

def letters_count(text):
    count = 0
    for char in text:
        if char.isalpha():
            count += 1
    return count

def words_count(text):
    words = 1
    for char in text:
        if char.isspace():
            words += 1
    return words

def sentences_count(text):
    sentences = 0
    for char in text:
        if char == '.' or char == '!' or char == '?':
            sentences += 1
    return sentences

if __name__ == "__main__":
    main()