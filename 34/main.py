# Class to represent the Grocery Store Billing System
class GroceryStore:
    def __init__(self):
        # Initialize an empty cart and item prices
        self.cart = {}
        self.prices = {"Apple": 50, "Banana": 10, "Milk": 40, "Bread": 30, "Eggs": 5}

    def add_to_cart(self, item, quantity):
        # Add items to the cart
        if item in self.prices:
            self.cart[item] = self.cart.get(item, 0) + quantity
            print(f"Added {quantity} {item}(s) to the cart.")
        else:
            print(f"Sorry, {item} is not available.")

    def remove_from_cart(self, item, quantity):
        # Remove items from the cart
        if item in self.cart:
            if quantity >= self.cart[item]:
                del self.cart[item]
                print(f"Removed all {item}(s) from the cart.")
            else:
                self.cart[item] -= quantity
                print(f"Removed {quantity} {item}(s) from the cart.")
        else:
            print(f"{item} is not in the cart.")

    def view_cart(self):
        # View items in the cart
        if not self.cart:
            print("Your cart is empty.")
        else:
            print("Items in your cart:")
            for item, quantity in self.cart.items():
                print(f"{item}: {quantity} @ ₹{self.prices[item]} each")

    def calculate_total(self):
        # Calculate the total bill
        total = sum(self.prices[item] * quantity for item, quantity in self.cart.items())
        print(f"Total bill: ₹{total}")

# Example Usage
store = GroceryStore()
store.add_to_cart("Apple", 2)
store.add_to_cart("Milk", 1)
store.view_cart()
store.calculate_total()
store.remove_from_cart("Apple", 1)
store.view_cart()
store.calculate_total()
