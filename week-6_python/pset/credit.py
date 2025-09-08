# Get input from the user
card = input("Card: ")
sum = 0
double = False

# Validate card using Luhn's Algorithm
for i in range(len(card) - 1, -1, -1):
    digit = int(card[i])

    if double:
        digit *= 2
        if digit >= 10:
            sum += (digit // 10) + (digit % 10)
        else:
            sum += digit
    else:
        sum += digit

    double = not double

# Check if the total is valid and identify the card type
if sum % 10 == 0:
    if len(card) == 15 and (card.startswith("34") or card.startswith("37")):
        print("AMEX")
    elif len(card) == 16 and (card.startswith("51") or card.startswith("52") or card.startswith("53") or card.startswith("54") or card.startswith("55")):
        print("MASTERCARD")
    elif (len(card) == 13 or len(card) == 16) and card.startswith("4"):
        print("VISA")
    else:
        print("INVALID")
else:
    print("INVALID")
