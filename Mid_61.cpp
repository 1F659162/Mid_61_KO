#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
	string name , sername , Gender , colortext;
	int day , month , year , r;

	cout << "++ Welcome to c++ Mid term test ++" << endl;
	cout << "Please Enter your first-name : ";
	cin >> name ;
	cout << "Please Enter your last-name : ";
	cin >> sername ;
	cout << "\n++++++++++++++++++++++++++++++ " << endl;

	do
	{
		cout << "Enter Birth-Day(1-31) : ";
		cin >> day ;
	}while(day < 1 || day >31);

	do
	{
		cout << "Enter Birth-Month(1-12) : ";
		cin >> month ;
	}while(month < 1 || month > 12);

	do
	{
		cout << "Enter Birth-Year(1950-2019) : ";
		cin >> year ;
	}while(year < 1950 || year > 2019);

	do
	{
		cout << "\n++++++++++++++++++++++++++++++" << endl;
		cout << "Please Enter your Gender ( f = Female , m = male ) : ";
		cin >> Gender ;
	}while(Gender != "f" && Gender != "F" && Gender != "m" && Gender != "M");
	
	if(Gender == "f" || Gender == "F") Gender = "Ms. " ;
	else if (Gender == "m" || Gender == "M" ) Gender = "Mr. ";

	cout << "\n++++++++++++++++++++++++++++++" << endl;
	cout << "Hello " << Gender << name << " " << sername << endl << endl;

	switch (month)
	{
	case 1 : cout << "Your birth day is " << day << " jan " << year << endl ;
		break;
	case 2 : cout << "Your birth day is " << day << " Feb " << year << endl ;
		break;
	case 3 : cout << "Your birth day is " << day << " Mar " << year << endl ;
		break;
	case 4 : cout << "Your birth day is " << day << " Apr " << year << endl ;
		break;
	case 5 : cout << "Your birth day is " << day << " May " << year << endl ;
		break;
	case 6 : cout << "Your birth day is " << day << " jun " << year << endl ;
		break;
	case 7 : cout << "Your birth day is " << day << " jul " << year << endl ;
		break;
	case 8 : cout << "Your birth day is " << day << " Aug " << year << endl ;
		break;
	case 9 : cout << "Your birth day is " << day << " Sep " << year << endl ;
		break;
	case 10 : cout << "Your birth day is " << day << " Oct " << year << endl ;
		break;
	case 11 : cout << "Your birth day is " << day << " Sep " << year << endl ;
		break;
	case 12 : cout << "Your birth day is " << day << " Dec " << year << endl ;
		break;
	default : cout << "Error.\n" ;
	}
	cout << "Your age is " << 2019 - year << " Year old."<< endl << endl ;

	cout << "++++++++++++++++++++++++++++++" << endl;

	srand(time(NULL));
	r = 1+rand()%9;
	if (r == 1) colortext = "Red ";
	else if (r == 2) colortext = "Pink ";
	else if (r == 3) colortext = "Green ";
	else if (r == 4) colortext = "Yellow ";
	else if (r == 5) colortext = "Blue ";
	else if (r == 6) colortext = "Violet ";
	else if (r == 7) colortext = "Brown ";
	else if (r == 8) colortext = "Silver ";
	else if (r == 9) colortext = "Black ";

	cout << r << endl;
	cout << "Your luckey color is : " << setfill('*') << setw(r+1) << " " << colortext << endl << endl ;


	return(0);
}