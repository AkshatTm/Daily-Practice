#include <iostream>
#include <string>
using namespace std;

// Constants
const int MAX_PRODUCTS = 5; // Max products I can handle in this program

// Function declarations
void displayInventory(string products[], int stock[], double prices[], int size); // Shows what's in stock
void updateStock(string products[], int stock[], int size); // Updates stock levels if something changes
void calculateProfitMargins(string products[], double costPrice[], double sellPrice[], int size); // Calculates how much profit I'm making
void salesForecast(string products[], int stock[], double prices[], int size); // Guessing how much money I'll make based on stock
void handleBulkDiscount(string products[], double prices[], int size); // Apply discounts when someone buys in bulk

// Main function
int main() {
    string products[MAX_PRODUCTS] = {"Apples", "Bananas", "Milk", "Bread", "Eggs"}; // List of items
    int stock[MAX_PRODUCTS] = {50, 30, 20, 40, 60}; // How much of each item I have
    double costPrice[MAX_PRODUCTS] = {0.5, 0.2, 1.5, 0.8, 0.1}; // Cost price per unit
    double sellPrice[MAX_PRODUCTS] = {0.7, 0.3, 2.0, 1.0, 0.2}; // Selling price per unit

    cout << "Welcome to the Inventory Management System!\n"; // Welcome message

    // Menu for user interaction
    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Display Inventory\n"; // Option to check stock
        cout << "2. Update Stock Levels\n"; // Option to add/change stock
        cout << "3. Calculate Profit Margins\n"; // Option to see how much money you're making
        cout << "4. Generate Sales Forecast\n"; // Option to guess total sales
        cout << "5. Handle Bulk Discounts\n"; // Option to reduce price for bulk buys
        cout << "6. Exit\n"; // Option to quit
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayInventory(products, stock, sellPrice, MAX_PRODUCTS); // Show inventory
                break;
            case 2:
                updateStock(products, stock, MAX_PRODUCTS); // Change stock levels
                break;
            case 3:
                calculateProfitMargins(products, costPrice, sellPrice, MAX_PRODUCTS); // See profit margins
                break;
            case 4:
                salesForecast(products, stock, sellPrice, MAX_PRODUCTS); // Calculate expected sales
                break;
            case 5:
                handleBulkDiscount(products, sellPrice, MAX_PRODUCTS); // Apply discounts
                break;
            case 6:
                cout << "Exiting the program. Goodbye!\n"; // Quit message
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // If the user enters something wrong
        }
    } while (choice != 6);

    return 0;
}

// Function definitions

// Just prints all the items, stock, and prices
void displayInventory(string products[], int stock[], double prices[], int size) {
    cout << "\n--- Current Inventory ---\n";
    for (int i = 0; i < size; i++) {
        cout << products[i] << ": Stock = " << stock[i] << ", Price = $" << prices[i] << "\n";
    }
}

// Let's you update the stock of any product
void updateStock(string products[], int stock[], int size) {
    string product;
    int newStock;

    cout << "\nEnter the product name to update stock: ";
    cin.ignore(); // To avoid any input issues
    getline(cin, product); // Get full product name

    for (int i = 0; i < size; i++) {
        if (products[i] == product) { // Found the product
            cout << "Enter the new stock level for " << product << ": ";
            cin >> newStock;
            stock[i] = newStock; // Update stock
            cout << "Stock updated successfully.\n";
            return;
        }
    }
    cout << "Product not found.\n"; // Oops, you entered a product that's not in the list
}

// Calculates profit margins for all items
void calculateProfitMargins(string products[], double costPrice[], double sellPrice[], int size) {
    cout << "\n--- Profit Margins ---\n";
    for (int i = 0; i < size; i++) {
        double profitMargin = ((sellPrice[i] - costPrice[i]) / costPrice[i]) * 100; // Profit in percentage
        cout << products[i] << ": Profit Margin = " << profitMargin << "%\n";
    }
}

// Just a quick guess of how much you'll earn if everything sells
void salesForecast(string products[], int stock[], double prices[], int size) {
    cout << "\n--- Sales Forecast ---\n";
    for (int i = 0; i < size; i++) {
        double forecast = stock[i] * prices[i]; // Multiply stock with price
        cout << products[i] << ": Projected Sales = $" << forecast << "\n";
    }
}

// Reduces prices for bulk buyers
void handleBulkDiscount(string products[], double prices[], int size) {
    string product;
    double discount;

    cout << "\nEnter the product name for bulk discount: ";
    cin.ignore();
    getline(cin, product);

    for (int i = 0; i < size; i++) {
        if (products[i] == product) { // Found the product
            cout << "Enter the discount percentage (e.g., 10 for 10%): ";
            cin >> discount;
            prices[i] -= prices[i] * (discount / 100); // Apply discount
            cout << "Discount applied successfully. New price for " << product << " = $" << prices[i] << "\n";
            return;
        }
    }
    cout << "Product not found.\n"; // If you entered a wrong product name
}
