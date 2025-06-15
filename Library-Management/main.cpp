/*
√÷› «·ﬂ »

œŒÊ· «·„‘—›

«”„ «·„” Œœ„ Ê psssword

Õ–› «·ﬂ »

 ÕœÌÀ «·ﬂ »

 ﬁÊ„ ﬁ«∆„… «·ﬂ » «·ﬂ«„·… » Œ“Ì‰ «·„·› ÊÕ–› «·ﬂ » «·„ÊÃÊœ… ›Ì «·„·›

«” ⁄«—… ﬂ » «·ÿ·«» 5 √Ì«„ „Ã«‰« Ê≈·« ›Ì ﬂ· ÌÊ„ 500 €—«„… €—«„…
*/



/*
file: main.cpp
*/

#include <iostream>
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch,
   system("pause") or input loop */

int main(int argc, char** argv) {

int outerChoice = 0;
while(outerChoice!=9){
	system("cls");
	cout<<"\n Library Management Version 1.0 \n\n";
	cout<<"\n1. Amin";
	cout<<"\n2. User";
	cout<<"\n9. Exit";
	cout<<"\n\nEnter your choice : ";
	cin>>outerChoice;

	if( outerChoice == 1 )
	{
	char adminUser[10];
	char adminPassword[10];

	system("cls");
	cout<<"\n ---------- Admin Login -------";
	cout<<"\n\n Enter username: ";
	cin>>adminUser;
	cout<<"\n Enter password:";
	cin>>adminPassword;
	if( (strcmp(adminUser, ADMINUSER) == 0) &&
	    ( strcmp(adminPassword, ADMINPASSWORD) == 0)){

	getchar(); getchar();
	system("cls");
	int innerChoice = 0;
	while(innerChoice != 9){
	cout<<"\n\n Admin Login is Successful !! Press any key to continue..";
	cout<<"\n1. Add Book";
	cout<<"\n2. Update Book";
	cout<<"\n3. Delete Book";
	cout<<"\n4. List of All Books";
	cout<<"\n9. Exit";
	cout<<"\n\n Enter your choice : ";
	cin>>innerChoice;
        switch(innerChoice){
    	case 1: addBook(); break;
    	case 2: updateBook(); break;
    	case 3: deleteBook(); break;
    	case 4: listOfAllBooks(); break;
    	default: cout<<"\n\n Invalid Choice. Press any key to continue..";
    	         getchar();
	}
	system("cls");
    }

	}
	else
	{
	cout<<"\n\n Error : Invalid Credentials. Press any key to conitnue";
	getchar();getchar();
	}

	}
	else if(outerChoice ==2) {
		char studentUser[10];
		char studentPassword[10];

		system("cls");
		cout<<"\n ---------- Student Login -------";
		cout<<"\n\n Enter username: ";
		cin>>studentUser;
		cout<<"\n Enter password:";
		cin>>studentPassword;

		if( (strcmp(studentUser, USER) ==0)  &&
		    (strcmp(studentPassword, USERPASSWORD) == 0)){
		int innerChoice = 0;
		while(innerChoice != 9){
		system("cls");
	     	cout<<"\n1. Borrow a Book";
	     	cout<<"\n2. Return a Book";
	     	cout<<"\n3. List of All Books";
	     	cout<<"\n9. Exit";
		cout<<"\n\n Enter your choice : ";
		cin>>innerChoice;

		switch(innerChoice){
		case 1: borrowBook();break;
		case 2: returnBook();break;
		case 3: listOfAllBooks(); break;
		case 9: break;
		default: cout<<"\n\n Error: Invalid Choice. Press any key to continue..";
		getchar();getchar();

		}

		}
		system("cls");
		}
		else
		{
		cout<<"\n\n Error : Invalid Credentials. Press any key to conitnue";
		getchar();getchar();

		}
	}
	else if(outerChoice!=9){
		cout<<"\n\n Invalid choice. Press any key to continue..";
		getchar();getchar();
	}
	else
	{
		cout<<"\n\n Thank you for using it !! Press any key to exit";
		getchar();getchar();
	}
}

return 0;
}

int addBook(){
int bookid;
char bookname[20];
char bookauthor[20];
int year, month, day;

time_t t = time(NULL);
struct tm tm = *localtime(&t);

year = tm.tm_year + 1900;
month = tm.tm_mon +1;
day = tm.tm_mday;


system("cls");
cout<<"\n ---- Add a new Book ----";

cout<<"\n\n Enter 4 digit numberic id :";
cin>>bookid;
cout<<"\n Enter book name : ";
cin>>bookname;
cout<<"\n Enter book author : ";
cin>>bookauthor;

char filename[20];

sprintf(filename,"%d%s",bookid,".dat");

ofstream file(filename);

file<<bookname<<"\n";
file<<bookauthor<<"\n";
file<<year<<"\n";
file<<month<<"\n";
file<<day<<"\n";

file.close();

cout<<"\n File Saved Successfully !!";
getchar(); getchar();
}

int deleteBook(){


}

int updateBook(){


}

int listOfAllBooks(){


}

int borrowBook(){


}

int returnBook(){

}
int adminLogin(){


}

int userLogin(){

}

/*---------------  End of Main.cpp -----------*/

