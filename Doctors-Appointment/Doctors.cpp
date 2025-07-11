#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "Doctors.h"

using namespace std;


int Doctors::bookAppointment()
{
    system("cls");

    cout<<"\n ----- Book Your Appointment ---- \n";
    cout<<"\n ----- Availbale slots ---- \n";

    //check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int recordFound =0;

    if(read)
    {
	string line;
	char key = 'A';
	int i = 9;

	while(getline(read, line)) {
	char temp = line[0];
	int index = (temp - 65);
	arr[index]=1;
	recordFound = 1;
	}
	if(recordFound == 1)
	{
	cout<<"\n Appointment Summary by hours:";
	char key = 'A';
	int hours = 9;
	for(int i = 0; i<=12; i++)
	{
	if(i == 0){
	if(arr[i] == 0)
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Booked";
	}

	else
	{
	if(arr[i] == 0)
	cout<<"\n "<<key<<"->"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"->"<<hours<<" - Booked";
	}
	hours++; key++;
	}

	}

	read.close();
    }
	if(recordFound == 0){
	cout<<"\n Appointment Available for following hours :";
	char key = 'A';
	for(int i = 9; i<=21; i++)
	{
		if(i==9)
		cout<<"\n "<<key<<" -> 0"<<i<<" - Available";
		else
		cout<<"\n "<<key<<" -> "<<i<<" - Available";
		key++;
	}

	}

   char choice;
   cout<<"\n\n Input your choice : ";
   cin>>choice;

   if( !(choice >= 'A' && choice <='Z'))
   {
	cout<<"\n Error : Invalid Selection";
	cout<<"\n Please selction correct value from menu A- Z";
	cout<<"\n Press any key to continue";
	getchar();getchar();
	system("cls");
	bookAppointment();
   }

   int index = (choice-65 );
   int isBooked = 1;
   if(arr[index] == 0)
      isBooked = 0;

   if(isBooked ==1)
   {
   	cout<<"\n Error : Appointment is already booked for this Hour";
   	cout<<"\n Please select different time !!";
   	cout<<"\n Press any key to continue!!";
   	getchar();getchar();
   	system("cls");
   	bookAppointment();
   }

   string name;
   cout<<"\n Enter your first name:";
   cin>>name;

   ofstream out;
   out.open("appointment.dat", ios::app);

   if(out){
	   out<<choice<<":"<<name.c_str()<<"\n";
	   out.close();
	   cout<<"\n Appointment booked for Hours : "<< (choice-65) + 9 <<" successfully !!";
    }
    else
    {
    	cout<<"\n Error while saving booking";
    }

    cout<<"\n Please any key to continue..";
	getchar(); getchar();
	return 0;
}

int Doctors::existingAppointment()
{
    system("cls");
    cout<<"\n ----- Appointments Summary ---- \n";
    //check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
     int recordFound =0;

    if(read)
    {
	string line;
	char key = 'A';
	int i = 9;

	   while(getline(read, line)) {
	   	   char temp = line[0];
	   	   int index = (temp - 65);
	   	   arr[index]=1;
		   recordFound = 1;
	  }
        if(recordFound == 1)
        {
        cout<<"\n Appointment Summary by hours:";
        char key = 'A';
        int hours = 9;
        for(int i = 0; i<=12; i++)
        {
        	if(arr[i] == 0)
        	cout<<"\n "<<key<<"->"<<hours<<" - Available";
        	else
        	cout<<"\n "<<key<<"->"<<hours<<" - Booked";
        	hours++; key++;
        }

	}

	read.close();
    }
    else
    {
    char key = 'A';
	for(int i = 9; i<=21; i++)
	{
	if(i==9)
	cout<<"\n "<<key<<" -> 0"<<i<<" - Available";
	else
	cout<<"\n "<<key<<" -> "<<i<<" - Available";
	key++;
	}
    }

    cout<<"\n Please any key to continue..";
    getchar(); getchar();
    return 0;
}
