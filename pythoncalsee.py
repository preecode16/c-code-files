num1 = float(input("Enter number 1: "))
num2 = float(input("Enter number 2: "))

print("Choose the operation:")
print("1 - Addition (+)")
print("2 - Subtraction (-)")
print("3 - Multiplication (*)")
print("4 - Division (/)")

choice = input("Choose the operation (1/2/3/4): ")

if choice == '1':
    result = num1 + num2
    print("Result:", result)

elif choice == '2':
    result = num1 - num2
    print("Result:", result)

elif choice == '3':
    result = num1 * num2
    print("Result:", result)

elif choice == '4':
    if num2 != 0:
        result = num1 / num2
        print("Result:", result)
    else:
        print("Invalid division by zero!")

else:
    print("Invalid choice! Please select 1, 2, 3, or 4.")
