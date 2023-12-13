# Take two digits as input
digit1 = int(input("Enter the first digit: "))
digit2 = int(input("Enter the second digit: "))

# Multiply the digits
result = digit1 * digit2

# Ensure the result is one digit long
result %= 10

# Print the result
print("The product of the two digits is:", result)
