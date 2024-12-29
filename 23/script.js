// Character sets for password generation
const lowercase = "abcdefghijklmnopqrstuvwxyz";
const uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const numbers = "0123456789";
const symbols = "!@#$%^&*()_+[]{}|;:,.<>?";

// DOM elements
const passwordField = document.getElementById("password");
const generateBtn = document.getElementById("generateBtn");
const includeUppercase = document.getElementById("includeUppercase");
const includeNumbers = document.getElementById("includeNumbers");
const includeSymbols = document.getElementById("includeSymbols");

// Password generator function
function generatePassword(length = 12) {
  let characterPool = lowercase;

  if (includeUppercase.checked) characterPool += uppercase;
  if (includeNumbers.checked) characterPool += numbers;
  if (includeSymbols.checked) characterPool += symbols;

  let password = "";
  for (let i = 0; i < length; i++) {
    const randomIndex = Math.floor(Math.random() * characterPool.length);
    password += characterPool[randomIndex];
  }

  return password;
}

// Event listener for the generate button
generateBtn.addEventListener("click", () => {
  const password = generatePassword();
  passwordField.value = password;
});
