# Prison-Management-System
Prison Management System Using OOP Concepts

*************************************************************************************************************************
## Project By Hamza Umer Farooq(200789) & Haroon Abdullah(201893)   
*********************************************************************************************************************************

Login Module:

Username: Hamza , Password: 200789
Username: Haroon, Password: 201893
Username: Jawad , Password: 12345
USername: Aqsa   ,Password: 23456


Description:

This program stores, shows, edits data of prisoners. It has a initial login module which only proceeds by the user/pass entered below
Procedure to add new accounts and change passwords of current accounts have been explained at the end of README File


Usage and Cautions:

Firsty the login page appears. If 3 incorrect tries are attempted, the program terminates.
After login, The user selects data from a menu driven interface. Caution: If incorrect or out of scope option is selected, the program asks to return to the menu. If not returned by typing 1,
the program terminates.

Next, Prisoner Data is entered. Caution: If input data is out of scope/incorrect, the program terminates.

Once data has been entered. We can preview previous entries, edit them, mark monthly attendance, release prisoners etc.

Once you are done with the data entry, Logout or Exit from the program.


*****************************************************************************************************************************************************************************************************
*********************************************************************   Project Made for Dr.Jawad Manzoor and Madam Aqsa Akbar   ********************************************************************
*****************************************************************************************************************************************************************************************************


*****************************************************************************************************************************************************************************************************
***************************************************************   NOT FOR FRONT END USER!! ONLY TRY THIS IF EXPERTISE IN PROGRAMMING   **************************************************************
************************************************************************************   FOR EDITING PURPOSES ONLY   **********************************************************************************
*****************************************************************************************************************************************************************************************************


Changing Username/Password:
 
To Change the password. Go to void Prison::Login(), line 117 or 129 and change the passowrd in "strcmp(Username, "X")", X is the current/new Username
To Change the password. Go to void Prison::Login(), line 117 or 129 and change the passowrd in "strcmp(Password, "Y")", Y is the current/new Password

Don't forget to save the program and compile it after changing Username/Password


Create New Login Profile:

If New User for login is to be added insert the following in LINE 142

else if(strcmp(Username, "X") == 0 && strcmp(Password, "Y") == 0)
        {
        	cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "You are accessed to the system!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;
            try1 = 4;
            Prison::Afterlogin();
		}

X and Y can be replaced by own Username and Password respectively

Don't forget to save the program and compile it after adding a new user

*****************************************************************************************************************************************************************************************************
*******************************************************   A Project Of Object Oriented Programming, 2nd Semester in Air University, Islamabad  ******************************************************
*****************************************************************************************************************************************************************************************************


							███████╗███╗░░██╗██████╗░  ░█████╗░███████╗  ██████╗░███████╗░█████╗░██████╗░███╗░░░███╗███████╗
							██╔════╝████╗░██║██╔══██╗  ██╔══██╗██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗████╗░████║██╔════╝
							█████╗░░██╔██╗██║██║░░██║  ██║░░██║█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██╔████╔██║█████╗░░
							██╔══╝░░██║╚████║██║░░██║  ██║░░██║██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║██║╚██╔╝██║██╔══╝░░
							███████╗██║░╚███║██████╔╝  ╚█████╔╝██║░░░░░  ██║░░██║███████╗██║░░██║██████╔╝██║░╚═╝░██║███████╗
							╚══════╝╚═╝░░╚══╝╚═════╝░  ░╚════╝░╚═╝░░░░░  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝░░░░░╚═╝╚══════╝
