// JavaScript: Corrected Version - Sum of an Array

function calculateSum(arr) {
    let total = 0;  // Fixed typo: 'o' -> '0'
    for (let num of arr) {
        total += num;  // Added missing curly braces
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculateSum(numbers);  // Fixed space in function name
console.log("Sum in JavaScript:", result);
