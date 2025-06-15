#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "Doctors.h"

using namespace std;


int main(int argc, char** argv)
{
    Doctors doc;
	while(1)
	{
		system("cls");
		cout<<"\t\t\tDoctor Appointment System\n";
		cout<<"----------------------------------------\n\n";

		cout<<"1. Book Appointment\n";
		cout<<"2. Check Existing Appointment\n";
		cout<<"0. Exit\n";
		int choice;

		cout<<"\n Enter you choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1: doc.bookAppointment(); break;
			case 2: doc.existingAppointment(); break;
			case 0:
		        while(1)
		        {
				 system("cls");
		        	cout<<"\n Are you sure, you want to exit? y | n \n";
		        	char ex;
		        	cin>>ex;
		        	if(ex == 'y' || ex == 'Y')
		        		exit(0);
		        	else if(ex == 'n' || ex == 'N')
                     		{
                     		 break;
                    		}
                     else{
                     	cout<<"\n Invalid choice !!!";
                     	getchar();
                     }
             	 }	break;

            default: cout<<"\n Invalid choice. Enter again ";
                     getchar();

		}

	}
	return 0;
}
