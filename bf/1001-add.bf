# Take two digits as input
digit1 = int(input("Enter the first digit: "))
digit2 = int(input("Enter the second digit: "))

# Add the digits
total = digit1 + digit2

# Ensure the total is one digit long
total %= 10

# Print the result
print("The sum of the two digits is:", total)
