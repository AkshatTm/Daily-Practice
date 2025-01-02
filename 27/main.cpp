#include <iostream>
#include <string>

using namespace std;

// Maximum number of rooms and events
const int MAX_ROOMS = 5;
const int MAX_EVENTS = 10;

struct Event {
    string name;
    string room;
    string date;
    int attendees;
    double cost;
};

// Array to hold events
Event events[MAX_EVENTS];
int eventCount = 0;

// Array to hold rooms
string rooms[MAX_ROOMS] = {"Room A", "Room B", "Room C", "Room D", "Room E"};

// Function to check room availability
bool isRoomAvailable(string room, string date) {
    for (int i = 0; i < eventCount; i++) {
        if (events[i].room == room && events[i].date == date) {
            return false; // Room is already booked on this date
        }
    }
    return true; // Room is available
}

// Function to add a new event
void addEvent() {
    if (eventCount >= MAX_EVENTS) {
        cout << "Cannot add more events. Event limit reached!\n";
        return;
    }

    Event newEvent;
    cout << "Enter event name: ";
    cin.ignore();
    getline(cin, newEvent.name);

    cout << "Enter event date (YYYY-MM-DD): ";
    cin >> newEvent.date;

    cout << "Available rooms: ";
    for (int i = 0; i < MAX_ROOMS; i++) {
        cout << rooms[i] << " ";
    }
    cout << "\nEnter room name: ";
    cin >> newEvent.room;

    if (!isRoomAvailable(newEvent.room, newEvent.date)) {
        cout << "Room is not available on this date. Please choose another room or date.\n";
        return;
    }

    cout << "Enter number of attendees: ";
    cin >> newEvent.attendees;

    cout << "Enter cost per attendee: ";
    double costPerAttendee;
    cin >> costPerAttendee;
    newEvent.cost = newEvent.attendees * costPerAttendee;

    // Add the event to the list
    events[eventCount++] = newEvent;
    cout << "Event added successfully!\n";
}

// Function to display all events
void displayEvents() {
    if (eventCount == 0) {
        cout << "No events scheduled.\n";
        return;
    }

    cout << "Scheduled Events:\n";
    for (int i = 0; i < eventCount; i++) {
        cout << "Event Name: " << events[i].name << "\n";
        cout << "Date: " << events[i].date << "\n";
        cout << "Room: " << events[i].room << "\n";
        cout << "Attendees: " << events[i].attendees << "\n";
        cout << "Total Cost: $" << events[i].cost << "\n";
        cout << "-------------------\n";
    }
}

// Main menu
void menu() {
    int choice;
    do {
        cout << "\nEvent Scheduling System\n";
        cout << "1. Add Event\n";
        cout << "2. View Events\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEvent();
                break;
            case 2:
                displayEvents();
                break;
            case 3:
                cout << "Exiting... Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
}

int main() {
    menu();
    return 0;
}
