// JS Variables and Let/Const
let num1 = 10; 
let num2 = 5;

// JS Comments
// Display initial message in the paragraph
document.getElementById('output').innerText = "Click the buttons below to perform arithmetic operations!";

// JS Operators and Arithmetic
const add = () => num1 + num2;
const subtract = () => num1 - num2;
const multiply = () => num1 * num2;
const divide = () => num1 / num2;

// Event listeners to display results
document.getElementById("addBtn").addEventListener("click", () => {
  alert(`Sum: ${add()}`);
});

document.getElementById("subtractBtn").addEventListener("click", () => {
  alert(`Difference: ${subtract()}`);
});

document.getElementById("multiplyBtn").addEventListener("click", () => {
  alert(`Product: ${multiply()}`);
});

document.getElementById("divideBtn").addEventListener("click", () => {
  alert(`Quotient: ${divide()}`);
});

