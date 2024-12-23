function calculateBudget() {
    // Get input values and ensure they are numbers
    let income = Number(document.getElementById("income").value);
    let expenses = Number(document.getElementById("expenses").value);

    let balance = income - expenses;

    // Display result
    const balanceElement = document.getElementById("balance");

    if (balance >= 0) {
      balanceElement.textContent = `You have a balance of $${balance}`;
      balanceElement.className = "positive";
    } else {
      balanceElement.textContent = `You're in debt by $${Math.abs(balance)}`;
      balanceElement.className = "negative";
    }
  }