// prevent multiple inclusions of header
#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

// Customer class definition
class Customer
{
public:
    char name[100]; // customer names for this class
    char address[100]; // customer address for this class
    char phone[12]; // customer phone numbers for this class
    char from_date[20]; // The date of the customer's reservation of the room
    char to_date[20]; // Date of the customer to the room
    float payment_advance; // Advance payment amount
    int booking_id; // Customer ID
}; // end class customer

// Room Class definition
class Room
{
public:
    char type; // Type Comfort for this class
    char stype; // Room Size for this class
    char ac; // Type of Room air conditioner for this class
    int roomNumber; // Room Number for this class
    int rent; // Rent of Room for this class
    int status; // Room Status for this class

    class Customer cust; // Inheriting an object from the customer class
    class Room addRoom(int); // Inheriting an object from the Room class
    void searchRoom(int); // Search for rooms
    void deleteRoom(int); // Delete out of service rooms
    void displayRoom(Room); // Show rooms in service
    void addcount( ); // Increase the counter
    int getcount(); // Retrieve the count
    int delay(); // Slow down the reversing process
private:
    static int count; // Counter for rooms added to the system

}; // end class Room


// Hotel Management Class definition
class HotelMgnt:public Room // Inheriting an object from the Room class
{
public:
    void checkIn(); // Reservation of hotel room
    void getAvailRoom(); // Shows available rooms
    void searchCustomer(char *); // Shows all persons that have booked room
    void checkOut(int); // Generates the bill of the expenses
    void guestSummaryReport(); // Return a summary of customer information
    void manageRooms(); // Managing rooms ( Adding and Searching Available Rooms )
}; // end class Hotel Managing

#endif // CUSTOMER_H_INCLUDED
