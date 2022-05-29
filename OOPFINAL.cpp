#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>			//beneficial to get date
#include <fstream>					// used for file handeling
#include <ctime>					//used to fetch real time
using namespace std;

void FrontPage(); // Front Page Or Main Page
void Date();      // Getting Date
void Time();      // Display time to make output console look aesthetic

void Date()
{
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    cout << "\n\n\n";
    cout << "\t\t\t\t\t   Date: " << tm.tm_mday << "/" << tm.tm_mon + 1 << "/" << tm.tm_year + 1900 << "\n";
}

void Time()
{
    time_t curr_time;
    curr_time = time(NULL);

    tm *tm_local = localtime(&curr_time);
    cout << "Time : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec << endl;
}

void FrontPage()
{
    int process = 0;
    system("cls");
    Time();
    Date();
    cout << "\n";
    int a;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |   PRISON     MANAGEMENT     SYSTEM   |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }

    cout << "Final Project   ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "   OBJECT  ORIENTED PROGRAMMING\n\n\t\t\t\tBY HAROON ABDULLAH(201893) AND HAMZA UMER FAROOQ(200789)";
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "\n\n";
    cout << "\n\n";
    cout << "\t\t\t\t";
    system("pause");
    cout << "\n\t\t\t\tLoading";

    for (process = 0; process < 15; process++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
}




			// This program is created to house information of 20 prisoners ,If we want to add more prisoners then we only increase arraysize.

	class menu
{
	public:
	 void Exit();         // Exit function
	};


	void menu ::Exit()
{
    system("cls");
    Time();
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    cout << "Thank you!!";
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    getch();
}





class Prison: public menu				// OUR MAJOR CLASS i-e PRISON
{
private:			//Privatising some details as they are to be kept in secracy
    // Details of Prisoner
    string First_Name[20] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    string Second_Name[20];
    string Gender[20];
    int CellNo[20] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020};
				//initialised some cell numbers later to be alloted to prisoners
    int Age[20];				//AGE can vary for different prisoners
    double Height[20];			//took height in double as it can be in points but I will ask for height in centimeters just to be clear.
    string Eyecolor[20];			// eyecolor can be used as a featyre to identify prisoners with same name.
    string Crime[20];				// Crime is used to store what kind of crime they have done .
    int Punishmentmonths[20];		// This is used to store Punishment months for prisoners.
    int o = 0;							// assinging data to arrays

public:
    void SetData();      // Set data of the prisoners
    void Details();      // Getting details of the prisoners
    void Afterlogin();   // After login page OR Menu function
    void Attendance();   // Storing attendace of the prisoners
    void Release();      // Release the prisoners
    void SearchPrison(); // Search Prison
    void PrisonFile();   // Priosn File
    void Logout();       // Logout
    void Login();        //login
};
				// Creating a menu or output for LOGOUT SCREEN


void Prison::Logout()			// accessing logout function outside class using ::
{
    system("cls");				// this is used to clear any activity done on screen before logging out
    cout << "\n\n\n\n\n\n\t\t\t\t\t";
    cout << "logging out ";

    for (int x = 0; x < 15; x++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
    Prison::Login();
}
					//Creating a login screen for PRISON ADMINISTRATION
void Prison::Login()
{

    char Username[15];			// will type mine or my partner's name here
    char Password[15];			//will type mine or my partner's ROLL NUMBER
    char Epwd;					//  created to enter password
    int true1 = 1;				//  initialising this 1 incase entered data does not match the data provided.
    int try1 = 0;				// initalising tries as I will provide 3 tries to user to enter correct information.
    int i = 0;					// i is used to countercheck passwords

    do
    {
        system("cls");
        Time();
        system("color f9");
        cout << "\n\n\n\n\n\n";
        int a;
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |   PRISON    MANAGEMENT      SYSTEM   |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n" << "\t\t\t\t\t";
        cout << "Username : ";
        cin >> Username;
        cout << "\t\t\t\t\t\n\t\t\t\t\t";
        cout << "Password : ";
        for (i = 0;;) 					//only initialising, we do not need conditions and iterations here.
        {
            Epwd = getch();		//getting password from user and matching it with all posible characters and numbers form 0-9
            if ((Epwd >= 'a' && Epwd <= 'z') || (Epwd >= 'A' && Epwd <= 'Z') || (Epwd >= '0' && Epwd <= '9'))
            {
                Password[i] = Epwd;
                ++i;
                cout << "*";
            }
            if (Epwd == '\b' && i >= 1)
            {
                cout << "\b \b";
                --i;
            }
            if (Epwd == '\r')
            {
                Password[i] = '\0';
                break;
            }
        }
        if(strcmp(Username, "Dr.Jawad") == 0 && strcmp(Password, "12345") == 0)  //comparing strings for login 1
        {
        	cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "Access Granted!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;			//make true1 = 0 which we did 1 previously as now we are logged in with correct information
            try1 = 4;	     	// once signed in set status of tries to 4 which are max attempts to exit loop.
            Prison::Afterlogin();			//  function created inside class calling outisde using ::

		}
		else if(strcmp(Username, "Aqsa") == 0 && strcmp(Password, "23456") == 0)  //comparing strings for login 2
        {
        	cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "Access Granted!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;			//make true1 = 0 which we did 1 previously as now we are logged in with correct information
            try1 = 4;	     	// once signed in set status of tries to 4 which are max attempts to exit loop.
            Prison::Afterlogin();			//  function created inside class calling outisde using ::

		}

        else if (strcmp(Username, "Haroon") == 0 && strcmp(Password, "201893") == 0)				//comparing strings for login 3
        {
            cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "Access Granted!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;			//make true1 = 0 which we did 1 previously as now we are logged in with correct information
            try1 = 4;				// once signed in set status of tries to 4 which are max attempts.
            Prison::Afterlogin();			// using function created inside class outisde using ::
        }
        else if(strcmp(Username, "Hamza") == 0 && strcmp(Password, "200789") == 0)  //comparing strings for login 4
        {
        	cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "Access Granted!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;			//make true1 = 0 which we did 1 previously as now we are logged in with correct information
            try1 = 4;	     	// once signed in set status of tries to 4 which are max attempts to exit loop.
            Prison::Afterlogin();			//  function created inside class calling outisde using ::

		}

				// work on tries i-e chances remaining
        {
            system("cls");
            try1 = try1 + 1;
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "\t\t\t\t\t";
            cout << "No. of attempts remain: " << 3 - try1;
            cout << "\n\n";
            cout << "\t\t\t\t";
            system("pause");

            if (try1 >= 3)
            {
                cout << "\t\t\t\t\t\t";
                cout << "\n";
                cout << "\t\t\t\t";
                cout << "No permission to enter the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                exit;
            }
        }
    } while (try1 < 3);

}
void Prison ::SetData()			// using scope operator to call function outside the class


						//Here we are setting the information of user to be stored in prison's database
{
    system("cls");
    system("color 3");
    Time();
    int a, s;				//using 2 integers as in one for the purpose of table making and other for condition checking
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |         Enter basic information of prisoner       |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";


    // Now we are getting information about prisoner from user
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t\t";
    cout << "Enter first name : ";
    cin >> First_Name[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter second name : ";
    cin >> Second_Name[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter gender : ";
    cin >> Gender[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter age : ";
    cin >> Age[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter height in centimeters: ";
    cin >> Height[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter eyecolor : ";
    cin >> Eyecolor[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter crime : ";
    cin >> Crime[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter punishment span in months : ";
    cin >> Punishmentmonths[o];
    cout << "\t\t\t\t\t";
    cout << "\n\n\n";
    cout << "\t\t\t\t\t";
    cout << "Your Cell No is " << CellNo[o];
    cout << "\n\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    o = o + 1;
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison ::Afterlogin();
    }
}

void Prison ::Details()					//Now we printing details of prisoners
{
    system("cls");
    Time();
    int t;			// t is for GUI purpose
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |                Prisoner list                      |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    int s, c = 0, p = 0;		// p is for serial number 		c is for condition		s is for condition checking

    cout << "\n\t\t\t\t\t";

    cout << "\n===========================================================================================================\n";
    cout << "SR.\tNAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment in months\n";
    cout << "===========================================================================================================\n";

    for (int x = 0; x <= 19; x++)
    {
        if (First_Name[x] != " ")
        {
            p++;
            cout << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
            cout << "\n"
                 << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\n\t\t\t\t\t";
        cout << "No prisoner Present";
        cout << "\n";
        cout << "\t\t\t\t\t";
    }
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Attendance()			//This is used to mark attendance of prisoners
{
    int s, l, c = 0;
    char ch;
    do
    {
        system("cls");
        Time();
        system("cls");
        int t;			// t is for GUI
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |           Prisoner attendance maintainer          |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment in months\n";
        cout << "===========================================================================================================\n";
        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << "\n"
                     << endl;
                c++;
            }
        }

        				//Now we reduce punishment after marking attendance
        if (c != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell  block of the prisoner :";
            cin>>l;								//entering of block number
            l = l - 1001;				// subtracting l from 1001 as for instance block is 1002 and we subtract 1001 from it cell number 1 would be called
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            Punishmentmonths[l]--;									// reducing punishment
            cout << "\n\t\t\t\t\t";
            cout << "Punishment for :" << Punishmentmonths[l] << " months";
            if (Punishmentmonths[l] <= 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
            }
            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------\n";
        }

    } while (ch == 'y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Release()
{
    int s, l, c = 0, r;
    char ch;
    do
    {
        system("cls");
        Time();
        int t;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |                Release prisoner                   |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment in months\n";
        cout << "===========================================================================================================\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << "\n"  << endl;
                c++;
            }
        }
        if (c != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell block of the prisoner :";
            cin>>l;
            l = l - 1001;
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            cout << "\n\t\t\t\t\t";
            if (Punishmentmonths[l] <= 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
                cout << "\n\t\t\t\t\t";
                cout << "Press 1 to release the prisoner :";
                cin >> r;
                if (r == 1)
                {
                    First_Name[l] = " ";
                    Second_Name[l] = " ";
                    Gender[l] = " ";
                    Age[l] = 0;
                    Height[l] = 0;
                    Eyecolor[l] = " ";
                    Punishmentmonths[l] = 0;
                    cout << "\n\t\t\t\t\tProcessing";

                    for (int process = 0; process < 7; process++)
                    {
                        for (int a = 0; a <= 100000000; a++)
                        {
                        }
                        cout << ".";
                    }
                    cout << "\n\t\t\t\t\t";
                    cout << "Prisoner released successfully";
                }
            }
            else
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is not ready for release";
            }

            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------\n";
            break;
        }
    } while (ch == 'y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::SearchPrison()
{
    int info;
    int CN, i, a, s, l;
    int c = 0, p = 0;
    system("cls");
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |             Search Menu              |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "Enter the prisoner cell id to be searched : ";
    cin >> CN;
    cout << "\n\t\t\t\t";
    cout << "\n===========================================================================================================\n";
    cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment in months\n";
    cout << "===========================================================================================================\n";
    l = CN - 1001;
    info = CellNo[l];
    if (CN == info)
    {
        if (First_Name[l] != " ")
        {
            cout << First_Name[l] << "" << Second_Name[l] << "\t\t" << CellNo[l] << "\t\t" << Age[l] << "\t" << Gender[l] << "\t" << Height[l] << "\t" << Eyecolor[l] << "\t\t" << Crime[l] << "\t\t" << Punishmentmonths[l] << endl;
            cout << "\n"
                 << endl;
        }
        else
        {
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "cell block empty" << endl;
        }
    }
    else
    {
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "invalid cell id" << endl;
    }
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::PrisonFile()
{
    Time();
    system("cls");

    int format, a;
    int s, c = 0, p = 0;
    cout << "\n\n\n";
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     1)   Txt File                             |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     2)   Html File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     3)   Word File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "In which format you want to open your file? ";
    cin >> format;
    std::ofstream MyFile_;
    switch (format)
    {
    case 1:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |        Txt File created successfully              |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.txt");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    |                Prisoner list                                     |\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_ << "\n\t\t\t\t\t";

        MyFile_ << "\n=====================================================================================================================\n";
        MyFile_ << "SR.\tNAME\t\t\tCell Block\tAge\t\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        MyFile_ << "=======================================================================================================================\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                p++;
                MyFile_ << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t" << Age[x] << "\t\t" << Gender[x] << "\t" << Height[x] << "\t\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                MyFile_ << "\n"
                        << endl;
                c++;
            }
        }
        if (c == 0)
        {
            MyFile_ << "\n\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 2:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Html File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.html");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    |                Prisoner list                      |";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "<br>";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "<br>";
                MyFile_ << "Age: " << Age[x];
                MyFile_ << "<br>";
                MyFile_ << "Gender: " << Gender[x];
                MyFile_ << "<br>";
                MyFile_ << "Height: " << Height[x];
                MyFile_ << "<br>";
                MyFile_ << "Eye colour: " << Eyecolor[x];
                MyFile_ << "<br>";
                MyFile_ << "Crime: " << Crime[x];
                MyFile_ << "<br>";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "<br>";
                MyFile_ << "<br>";
                c++;
            }
        }
        if (c == 0)
        {

            MyFile_ << "<br>\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "<br>";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 3:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Word File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.doc");

        MyFile_ << "\t\t\t *** Prisoner list *** ";
        MyFile_ << "\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "\n";
                MyFile_ << "Age: " << Age[x];
                MyFile_ << "\n";
                MyFile_ << "Gender: " << Gender[x];
                MyFile_ << "\n";
                MyFile_ << "Height: " << Height[x];
                MyFile_ << "\n";
                MyFile_ << "Eye colour: " << Eyecolor[x];
                MyFile_ << "\n";
                MyFile_ << "Crime: " << Crime[x];
                MyFile_ << "\n";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "\n";
                MyFile_ << "\n";
                c++;
            }
        }
        if (c == 0)
        {

            MyFile_ << "\n\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Afterlogin()
{
    int a, c;
    int v;
    do
    {
        v = 0;
        system("cls");
        Time();
        cout << "\n\n\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     2)   Prisoner details                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     3)   Attendance prisoner                            |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     4)   Release prisoner                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     5)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     6)   Prison File                                    |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     7)   Logout                                         |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     8)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "Enter your choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            Prison ::SetData();
            break;
        case 2:
            Prison ::Details();
            break;
        case 3:
            Prison ::Attendance();
            break;
        case 4:
            Prison ::Release();
            break;
        case 5:
            Prison ::SearchPrison();
            break;
        case 6:
            Prison::PrisonFile();
            break;
        case 7:
            Prison::Logout();
            break;
        case 8:
            Prison::Exit();
            break;
        default:
            cout << "\n\t\t\t\tInvalid choice\n";
            cout << "\t\t\t\tPress 1 to return : ";
            cin >> v;
        }
    } while (v == 1);
}




int main()
{
	system("colorf9");
    Prison a;

    FrontPage();
    a.Login();
    return 0;
}

