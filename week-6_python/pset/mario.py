import sys

def main():
    try:
        h = int(input("Height: "))

        while h <= 0:
            h = int(input("Height: "))

        while h >= 9:
            h = int(input("Height: "))

        b = h - 1
        c = 1

        # Principal loop
        for i in range(h):
            # Blank spaces
            for j in range(b):
                print(" ", end="")

            # Hashtags
            for k in range(c):
                print("#", end="")

            # Separation
            print("  ", end="")

            # Final Hashtags
            for l in range(c):
                print("#", end="")

            print()
            b -= 1
            c += 1
    except ValueError:
        main()

if __name__ == "__main__":
    main()
