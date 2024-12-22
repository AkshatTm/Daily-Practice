#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> books = {"C++ Basics", "Data Structures", "Algorithms", "Operating Systems"};
    vector<bool> borrowed(books.size(), false); // Keeps track of borrowed books
    int choice;
    
    while (true) {
        cout << "\n===== Library Management System =====\n";
        cout << "1. View Available Books\n";
        cout << "2. Borrow a Book\n";
        cout << "3. Return a Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: // View available books
                cout << "\nAvailable Books:\n";
                for (size_t i = 0; i < books.size(); i++) {
                    if (!borrowed[i]) {
                        cout << i + 1 << ". " << books[i] << endl;
                    }
                }
                break;
            
            case 2: { // Borrow a book
                int bookNumber;
                cout << "\nEnter the book number to borrow: ";
                cin >> bookNumber;
                if (bookNumber > 0 && bookNumber <= books.size() && !borrowed[bookNumber - 1]) {
                    borrowed[bookNumber - 1] = true;
                    cout << "You have borrowed \"" << books[bookNumber - 1] << "\".\n";
                } else {
                    cout << "Invalid choice or the book is already borrowed.\n";
                }
                break;
            }
            
            case 3: { // Return a book
                int bookNumber;
                cout << "\nEnter the book number to return: ";
                cin >> bookNumber;
                if (bookNumber > 0 && bookNumber <= books.size() && borrowed[bookNumber - 1]) {
                    borrowed[bookNumber - 1] = false;
                    cout << "You have returned \"" << books[bookNumber - 1] << "\".\n";
                } else {
                    cout << "Invalid choice or the book was not borrowed.\n";
                }
                break;
            }
            
            case 4: // Exit
                cout << "Thank you for using the Library Management System. Goodbye!\n";
                return 0;
            
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
