# Grocery Bill Calculator

# Function to display the menu
def display_menu():
    print("\nOptions:")
    print("1. Add an item")
    print("2. View cart")
    print("3. Calculate total")
    print("4. Exit")


# Function to calculate the total bill
def calculate_total(cart):
    total = 0
    for item, details in cart.items():
        total += details['price'] * details['quantity']
    return total


# Main function
def main():
    print("Welcome to the Grocery Bill Calculator!")
    cart = {}  # Dictionary to store items
    budget = 1000  # Example budget limit

    while True:
        display_menu()
        choice = input("Enter your choice (1-4): ").strip()

        if choice == "1":
            # Adding an item
            item_name = input("Enter item name: ").strip()
            if item_name in cart:
                print(f"{item_name} is already in the cart.")
                continue

            try:
                quantity = int(input("Enter quantity: "))
                price = float(input("Enter price per unit: "))
                cart[item_name] = {'quantity': quantity, 'price': price}
                print(f"Added {quantity} of {item_name} at {price} per unit.")
            except ValueError:
                print("Invalid input. Please enter numeric values for quantity and price.")

        elif choice == "2":
            # Viewing the cart
            if not cart:
                print("Your cart is empty.")
            else:
                print("\nYour Cart:")
                for item, details in cart.items():
                    print(
                        f"- {item}: {details['quantity']} x {details['price']} = {details['quantity'] * details['price']}")

        elif choice == "3":
            # Calculating the total bill
            total = calculate_total(cart)
            print(f"\nTotal Bill: {total}")
            if total > budget:
                print(f"Warning: Your total exceeds the budget of {budget}!")

        elif choice == "4":
            # Exiting the program
            print("Thank you for using the Grocery Bill Calculator. Goodbye!")
            break

        else:
            print("Invalid choice. Please choose a valid option.")


# Run the main function
if __name__ == "__main__":
    main()
