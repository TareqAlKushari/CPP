#include<iostream>
#include<string.h>
#include<conio.h>
#include "Customer.h"

using namespace std;

//Global Declarations
int Room::count; // Variable prototype
Room rom; // Create Room objects


int main()
{
    // Create HotelMgnt objects
    HotelMgnt hm;
    int i,j,opt,rno; // Create four variables int
    char ch, inte; // Create tow variables char
    char pname[100]; // Create one variables char
    // built functions
    system("cls"); // Responsible for implementing system commands

    do
    {
        system("cls");
        cout<<"######## Hotel Management #########\n"; // display system options
        cout<<"\n1. Manage Rooms"; // display a message for the user
        cout<<"\n2. Check-In Room"; // display a message for the user
        cout<<"\n3. Available Rooms"; // display a message for the user
        cout<<"\n4. Search Customer"; // display a message for the user
        cout<<"\n5. Check-Out Room"; // display a message for the user
        cout<<"\n6. Guest Summary Report"; // display a message for the user
        cout<<"\n7. Exit"; // display a message for the user
        cout<<"\n\nEnter Option: "; // display a message for the user
        cin>>opt; // Store a value from the user in opt variable
        // determine which options was entered
        switch(opt)
        {
            case 1: // options was number one
                hm.manageRooms(); // Call up Function to Managing rooms (adding and searching available rooms)
                break; // exit switch
            case 2: // options was number tow
                if(rom.getcount()==0) // if the room counter is zero
                {
                    cout<<"\nRooms data is not available.\nPlease add the rooms first.\n"<<endl; // display a message for the user
                    cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
                    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
                    rom.delay(); // Here, the Function to Slow down the reversing process
                }
                else // if the room counter largest zero
                    hm.checkIn(); // Call up Function to reservation of room
                break; // exit switch
            case 3: // options was number three
                if(rom.getcount()==0) // if the room counter is zero
                {
                    cout<<"\nRooms data is not available.\nPlease add the rooms first."<<endl; // display a message for the user
                    cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
                    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
                    rom.delay(); // Here, the Function to Slow down the reversing process
                }
                else // if the room counter largest zero
                    hm.getAvailRoom(); // Call up Function to shows available rooms
                break; // exit switch
            case 4: // options was number four
                if(rom.getcount()==0) // if the room counter is zero
                {
                    cout<<"\nRooms are not available.\nPlease add the rooms first."; // display a message for the user
                    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
                    rom.delay(); // Here, the Function to Slow down the reversing process
                }
                else // if the room counter largest zero
                {
                    cout<<"Enter Customer Name: "; // display a message for the user
                    cin>>pname; // Store a value from the user in pname variable
                    hm.searchCustomer(pname); // Call up Function to shows all persons that have booked room
                }
                break; // exit switch
            case 5: // options was number five
                if(rom.getcount()==0) // if the room counter is zero
                {
                    cout<<"\nRooms are not available.\nPlease add the rooms first."; // display a message for the user
                    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
                    rom.delay(); // Here, the Function to Slow down the reversing process
                }
                else // if the room counter largest zero
                {
                    cout<<"Enter Room Number : "; // display a message for the user
                    cin>>rno; // Store a value from the user in rno variable for the user
                    hm.checkOut(rno); // Call up Function to generates the bill of the expenses
                }
                break; // exit switch
            case 6: // options was number six
                hm.guestSummaryReport(); // Call up Function to Return a summary of customer information
                break;
            case 7: // options was number seven
                cout<<"\nTHANK YOU! FOR USING SOFTWARE"; // display a message for the user
                break; // exit switch
            default: // Catch all other number
                cout<<"\nPlease Enter correct option"; // display a message for the user
                break; // Optional; will exit switch anyway
        } // end switch
    }while(opt!=7); // end do while

        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
        rom.delay(); // Here, the Function to Slow down the reversing process
} // end main
