function calculateTip() {
  // Get input values
  let billAmount = parseFloat(document.getElementById("billAmount").value);
  let tipPercentage = parseFloat(document.getElementById("tipPercentage").value);
  let split = parseInt(document.getElementById("split").value);

  // Basic validation
  if (billAmount <= 0 || tipPercentage < 0 || split <= 0 || isNaN(billAmount) || isNaN(tipPercentage) || isNaN(split)) {
    document.getElementById("result").textContent = "Please enter valid values.";
    return;
  }

  // Calculate tip and total amount
  let totalTip = (billAmount * tipPercentage) / 100;
  let tipPerPerson = totalTip / split;
  let totalPerPerson = (billAmount + totalTip) / split;

  // Display results
  document.getElementById("result").innerHTML = `
    Total Tip: $${totalTip.toFixed(2)}<br>
    Tip per Person: $${tipPerPerson.toFixed(2)}<br>
    Total per Person: $${totalPerPerson.toFixed(2)}
  `;
}