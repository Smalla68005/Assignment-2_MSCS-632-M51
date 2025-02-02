# Python: Corrected Version - Sum of an Array

def calculate_sum(arr):
    total = 0  # Fixed typo: 'o' -> '0'
    for num in arr:
        total += num  # Fixed missing colon in loop
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)  # Fixed typo in print statement
