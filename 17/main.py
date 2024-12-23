# A simple banking system using classes in Python

class BankAccount:
    """
    A class to represent a bank account with basic operations.
    """
    def __init__(self, account_holder, initial_balance=0):
        """
        Initialize the bank account with an account holder's name and an optional initial balance.
        """
        self.account_holder = account_holder
        self.balance = initial_balance

    def deposit(self, amount):
        """
        Add money to the account balance.
        """
        if amount > 0:
            self.balance += amount
            print(f"₹{amount} deposited successfully!")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        """
        Subtract money from the account balance if funds are sufficient.
        """
        if 0 < amount <= self.balance:
            self.balance -= amount
            print(f"₹{amount} withdrawn successfully!")
        elif amount > self.balance:
            print("Insufficient funds.")
        else:
            print("Withdrawal amount must be positive.")

    def check_balance(self):
        """
        Display the current account balance.
        """
        print(f"Account Balance: ₹{self.balance}")

    def account_summary(self):
        """
        Provide a summary of the account details.
        """
        print("\n--- Account Summary ---")
        print(f"Account Holder: {self.account_holder}")
        print(f"Balance: ₹{self.balance}")


# Demonstrate the use of the BankAccount class
def main():
    print("Welcome to the Simple Banking System!")

    # Create a new bank account
    name = input("Enter your name: ")
    initial_deposit = float(input("Enter an initial deposit amount: ₹"))
    account = BankAccount(account_holder=name, initial_balance=initial_deposit)
    print("\nAccount created successfully!")

    # Menu for account operations
    while True:
        print("\nChoose an option:")
        print("1. Deposit Money")
        print("2. Withdraw Money")
        print("3. Check Balance")
        print("4. Account Summary")
        print("5. Exit")

        choice = input("Enter your choice (1-5): ")
        if choice == "1":
            amount = float(input("Enter deposit amount: ₹"))
            account.deposit(amount)
        elif choice == "2":
            amount = float(input("Enter withdrawal amount: ₹"))
            account.withdraw(amount)
        elif choice == "3":
            account.check_balance()
        elif choice == "4":
            account.account_summary()
        elif choice == "5":
            print("Thank you for using the Simple Banking System. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

# Run the banking system
if __name__ == "__main__":
    main()
