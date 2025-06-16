#include<iostream>
#include<string.h>
#include<conio.h>
#include "Customer.h"
#define max 100

using namespace std;

//Global Declarations
class Room rooms[max];

// Function to Slow down the reversing process
int Room::delay()
{
    for(int i = 0; i<3; i ++) // loop for Slow down the reversing process
    {
        cout<<"\n Saving Records ..."; // display a message for the user
        for(int ii = 0; ii<20000; ii ++)
        {
            for(int iii = 0; iii<20000; iii ++)
            {

            } // end for loop 3
        } // end for loop 2
    } // end for loop 1

    cout<<"\n Exiting Now ..."; // display a message for the user
    for(int i = 0; i<3; i ++) // loop for Slow down the reversing process
    {
        for(int ii = 0; ii<20000; ii ++)
        {
            for(int iii = 0; iii<20000; iii ++)
            {

            } // end for loop 3
        } // end for loop 2
    } // end for loop 1
    return 0;
} // end function delay

// Function to Increase the counter
void Room::addcount()
{
    count++;
} // end function addcount

// Function to get the count
int Room::getcount()
{
    return count;
} // end function getcount


Room Room::addRoom(int rno)
{
    class Room room; // Create Room objects
    room.roomNumber=rno; // equality process
    cout<<"\nType AC/Non-AC (A/N) : "; // display a message for the user
    cin>>room.ac; // Store a value from the user in ac variable
    cout<<"\nType Comfort (S/N) : "; // display a message for the user
    cin>>room.type; // Store a value from the user in type variable
    cout<<"\nType Size (B/S) : "; // display a message for the user
    cin>>room.stype; // Store a value from the user in stype variable
    cout<<"\nDaily Rent : "; // display a message for the user
    cin>>room.rent; // Store a value from the user in rent variable
    room.status=0; // equality process

    cout<<"\n Room Added Successfully!"; // display a message for the user
    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    delay(); // Here, the Function to Slow down the reversing process
    return room;
} // end function addRoom

// Function to Search for rooms
void Room::searchRoom(int rno)
{
    int i,found=0; // Create tow variables int
    for(i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].roomNumber==rno) // if room number equal rno variable
        {
            found=1; // equality process
            break; // exit if condition
        } // end if condition
    } // end for loop
    if(found==1) // if found variable equal one
    {
        cout<<"Room Details\n"; // display a message for the user
        if(rooms[i].status==1) // if room status equal one
        {
            cout<<"\nRoom is Reserved\n"<<getcount()<<endl; // display a message for the user
        }// end if condition
        else
        {
            cout<<"\nRoom is available\n"<<getcount()<<endl; // display a message for the user
        } // end if else condition
        displayRoom(rooms[i]); // call up function displayRoom
        cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    } // end if condition
    else
    {
        cout<<"\nRoom not found"<<endl; // display a message for the user
        cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    } // end if else condition
    cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
    delay(); // Here, the Function to Slow down the reversing process
} // end function searchRoom


// Function to Show rooms in service
void Room::displayRoom(Room tempRoom)
{
    cout<<"\nRoom Number: \t"<<tempRoom.roomNumber; // display a Room Number for the user
    cout<<"\nType AC/Non-AC (A/N) "<<tempRoom.ac; // display a Type of Room air conditioner for the user
    cout<<"\nType Comfort (S/N) "<<tempRoom.type; // display a Type Comfort for the user
    cout<<"\nType Size (B/S) "<<tempRoom.stype; // display a Room Size for the user
    cout<<"\nRent: "<<tempRoom.rent<<endl; // display a Rent of Room for the user
} // end function displayRoom


// Function to Return a summary of customer information
void HotelMgnt::guestSummaryReport()
{

    if(getcount()==0) // if count equal zero
    {
        cout<<"\n No Guest in Hotel !!"; // display a message for the user
    } // end if condition
    for(int i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].status==1) // if room status equal one
        {
            cout<<"\n Customer First Name : "<<rooms[i].cust.name; // display a Customer First Name for the user
            cout<<"\n Room Number : "<<rooms[i].roomNumber; // display a Room Number for the user
            cout<<"\n Address (only city) : "<<rooms[i].cust.address; // display a Address for the user
            cout<<"\n Phone : "<<rooms[i].cust.phone; // display a Phone for the user
            cout<<"\n---------------------------------------"<<endl; // display a message for the user
        } // end if condition

    } // end for loop
    cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    delay(); // Here, the Function to Slow down the reversing process
} // end function guestSummaryReport


// Function to Hotel Management reservation of room
void HotelMgnt::checkIn()
{
    int i,found=0,rno; // Create three variable

    class Room room; // Create Room objects
    cout<<"\nEnter Room number : "; // display a message for the user
    cin>>rno; // Store a value from the user in rno variable
    for(i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].roomNumber==rno) // if room number equal rno variable
        {
            found=1; // equality process
            break;
        } // end if condition
    } // end for loop
    if(found==1) // if found variable equal one
    {
        if(rooms[i].status==1) // if room status equal one
        {
            cout<<"\nRoom is already Booked"<<endl; // display a message for the user
            cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
            delay(); // Here, the Function to Slow down the reversing process
            getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
            return;
        } // end if condition

        cout<<"\nEnter booking id: "; // display a message for the user
        cin>>rooms[i].cust.booking_id; // Store a value from the user in cust.booking_id variable

        cout<<"\nEnter Customer Name (First Name): "; // display a message for the user
        cin>>rooms[i].cust.name; // Store a value from the user in cust.name variable

        cout<<"\nEnter Address (only city): "; // display a message for the user
        cin>>rooms[i].cust.address; // Store a value from the user in cust.address variable

        cout<<"\nEnter Phone: "; // display a message for the user
        cin>>rooms[i].cust.phone; // Store a value from the user in cust.phone variable

        cout<<"\nEnter From Date: "; // display a message for the user
        cin>>rooms[i].cust.from_date; // Store a value from the user in cust.from_date variable

        cout<<"\nEnter to  Date: "; // display a message for the user
        cin>>rooms[i].cust.to_date; // Store a value from the user in cust.to_date variable


        cout<<"\nEnter Advance Payment: "; // display a message for the user
        cin>>rooms[i].cust.payment_advance; // Store a value from the user in cust.payment_advance variable

        rooms[i].status=1; // equality process

        cout<<"\n Customer Checked-in Successfully.."<<endl; // display a message for the user
        cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
        delay(); // Here, the Function to Slow down the reversing process
    } // end if condition
} // end function checkIn



// Function to Hotel Management shows available rooms
void HotelMgnt::getAvailRoom()
{
    int i,found=0; //  process equality and create variables
    for(i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].status==0) // if room status equal zero
        {
            displayRoom(rooms[i]); // call up function displayRoom
            cout<<"\n\nPress enter for next room"; // display a message for the user
            found=1; // equality process
            getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
        } // end if condition
    } // end for loop
    if(found==0) // if found variables equal zero
    {
        cout<<"\nAll rooms are reserved"<<endl; // display a message for the user
        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    } // end if condition
    cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
    delay(); // Here, the Function to Slow down the reversing process
} // end function getAvailRoom



// Function to Hotel Management shows all persons that have booked room
void HotelMgnt::searchCustomer(char *pname)
{
    int i,found=0; // equality process
    for(i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].status==1 && stricmp(rooms[i].cust.name,pname)==0) // if room status equal one and customer name , pname equal zero
        {
            cout<<"\nCustomer Name: "<<rooms[i].cust.name; // display a Customer Name for the user
            cout<<"\nRoom Number: "<<rooms[i].roomNumber; // display a Room Number for the user

            cout<<"\n\nPress enter for next record"; // display a message for the user
            found=1;
            getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
            delay(); // Here, the Function to Slow down the reversing process
        } // end if condition
    } // end for loop
    if(found==0) // if found variable equals zero
    {
        cout<<"\nPerson not found."<<endl; // display a message for the user
        cout << "Enter Any Key to Back ... "<<endl; // display a message for the user
        getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
        delay(); // Here, the Function to Slow down the reversing process
    } // end if condition
} // end function searchCustomer



// Function to Hotel Management generates the bill of the expenses
void HotelMgnt::checkOut(int roomNum)
{
    int i,found=0,days,rno; // Create four variables int
    float billAmount=0; // Create one variables float
    for(i=0;i<getcount();i++) // loop until is i not less than room counter
    {
        if(rooms[i].status==1 && rooms[i].roomNumber==roomNum) // if status room 1 and room number equal roomNum variable
        {
            //rno = rooms[i].roomNumber;
            found=1; // equality process
            //getch();
            break; // exit if condition
        } // end if condition
    } // end for loop
    if(found==1) // if found variable equal one
    {
        cout<<"\nEnter Number of Days:\t"; // display a message for the user
        cin>>days; // Store a value from the user in days variable
        billAmount=days * rooms[i].rent; // cost calculation

        cout<<"\n\t######## CheckOut Details ########\n"; // display a message for the user
        cout<<"\nCustomer Name : "<<rooms[i].cust.name; // display a Customer Name for the user
        cout<<"\nRoom Number : "<<rooms[i].roomNumber; // display a Room Number for the user
        cout<<"\nAddress : "<<rooms[i].cust.address; // display a Address for the user
        cout<<"\nPhone : "<<rooms[i].cust.phone; // display a Phone for the user
        cout<<"\nTotal Amount Due : "<<billAmount<<" /"; // display a Total Amount Due for the user
        cout<<"\nAdvance Paid: "<<rooms[i].cust.payment_advance<<" /"; // display a Advance Paid for the user
        cout<<"\n*** Total Payable: "<<billAmount-rooms[i].cust.payment_advance<<"/ only"<<endl; // display a Total Payable for the user

        rooms[i].status=0; // equality process
    } // end if condition
    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
    delay(); // Here, the Function to Slow down the reversing process
} // end function checkOut




// Function to Managing rooms (adding and searching available rooms)
void HotelMgnt::manageRooms()
{
    class Room room; // Create Room objects
    int opt,rno,i,flag=0; // Create four variables int
    char ch; // Create one variables char
    do
    {
        system("cls"); // Responsible for implementing system commands
        cout<<"\n### Manage Rooms ###"; // display a message for the user
        cout<<"\n1. Add Room"; // display a message for the user
        cout<<"\n2. Search Room"; // display a message for the user
        cout<<"\n3. Back to Main Menu"; // display a message for the user
        cout<<"\n\nEnter Option: "; // display a message for the user
        cin>>opt;// Store a value from the user in opt variable


        //switch statement
        switch(opt) // determine which options was entered
        {
            case 1: // options was number one
                cout<<"\nEnter Room Number: "; // display a message for the user
                cin>>rno; // Store a value from the user in rno variable
                i=0; // equality process
                for(i=0;i<getcount();i++) // loop until is i not less than room counter
                {
                    if(rooms[i].roomNumber==rno) // if room number equal the rno variable
                    {
                        flag=1; // flag variable equals one
                    } // end if condition
                } // end for loop
                if(flag==1) // if flag variable equals one
                {
                    cout<<"\nRoom Number is Present.\nPlease enter unique Number"; // display a message for the user
                    flag=0; // equality process
                    getch(); // Here, the function getch() returns the ASCII value of the key read from stdin
                } // end if condition
                else // if flag variable not equals one
                {
                    rooms[getcount()]=room.addRoom(rno); // call up object from the Room class
                    addcount(); // call up function addcount
                } // end if else condition
                break; // exit switch
            case 2: // options was number tow
                cout<<"\nEnter room number: "; // display a message for the user
                cin>>rno; // Store a value from the user in rno variable
                room.searchRoom(rno); // call up function searchRoom
                break; // exit switch
            case 3: // options was number three
                //nothing to do
                delay(); // Here, the Function to Slow down the reversing process
                break; // exit switch
            default: // Catch all other number
                cout<<"\nPlease Enter correct option"; // display a message for the user
                delay(); // Here, the Function to Slow down the reversing process
                break; // Optional; will exit switch anyway
        } // end switch
    }while(opt!=3); // end do while
} // end function manageRooms
