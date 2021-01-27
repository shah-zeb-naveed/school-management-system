#include <stdio.h>
#include <conio.h>
#include <Windows.h>

struct student
{
	char name[100];
	char fname[100];
	int  Class;
	char section[50];
	int id;
}s;
struct user
{
	char username[100];
	char password[100];
	char security[100];
}u;
struct studentfee
{
	char name[100];
	int fee;
	int date;
}sf;
struct library
{
	char studentname[100];
	char bookname[100];
	int  bookcode;
	int  status;
	int  issuedate;
	int  no_books_issued;/*to a single student*/
}l;

void fee();
void clearfee();
void feestatus();
void listfee();
void searchrecord();
void pass();
void modify();
void changepass();
void clear();
void smallbar();
void bar();
void addrecord();
void listrecord();
void mainheading();
void fee();
void listfee();
void feestatus();
void clearfee();
void forgotpass();
void deleterecords();
void newbook();
void issuebook();
void librecord();
void returnbook();
void deletebook();

int  main()
{
	system("mode CON: COLS=150 LINES=50");
	system("color 3b");
	int counter = 0;

	pass();
	mainheading();
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Log in Successful!\n\t\t\t\t\t\t  Press any key to continue to Main Menu");
	_getch();

	while (1)
	{
		system("cls");
		char choice1;
		mainheading();
		printf("\n\t\t\t\t\t\t\t\tMAIN MENU\n");
		bar();
		printf("\n\n\n\n\n\t\t\t\t\t\t\t    [A] Admissions\n\t\t\t\t\t\t\t    [L] Library Section\n\t\t\t\t\t\t\t    [F] Fee Section\n\t\t\t\t\t\t\t    [S] Account Settings\n\t\t\t\t\t\t\t    [M] About\n\t\t\t\t\t\t\t    [E] Exit");
		fflush(stdin);
		choice1 = _getch();
		choice1 = toupper(choice1);

		switch (choice1)
		{
		case 'A':
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\t\tADMISSIONS\n");
			bar();

			printf("\n\n\n\n\n\t\t\t\t\t\t\t    [1] Add Record\n\t\t\t\t\t\t\t    [2] List Records\n\t\t\t\t\t\t\t    [3] Search Records\n\t\t\t\t\t\t\t    [4] Modify Records\n\t\t\t\t\t\t\t    [5] Delete Individual Record\n\t\t\t\t\t\t\t    [6] Clear All Records\n\n\n\t\t\t\t\t\t      Press any other key to go back to Main Menu.\t\t");
			fflush(stdin);
			char option = _getch();
			switch (option)
			{
			case '1':addrecord(); break;
			case '2':listrecord(); break;
			case '3':searchrecord(); break;
			case '4':modify(); break;
			case '5':deleterecords(); break;
			case '6':clear(); break;
			}
			break;
		}

		case 'S':
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\t\tACCOUNT SETTINGS\n");
			bar();
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t    [1] Change Password.\n\t\t\t\t\t\t \n\t\t\t\t\t\t\t    [2] Change Theme.\n\n\n\t\t\t\t\t\t      Press any other key to go back to Main Menu.\t\t");
			char cooper;
			cooper = _getch();
			cooper = toupper(cooper);

			if (cooper == '1')
				changepass();
			if (cooper == '2')
			{
				system("cls");
				bar();
				printf("\t\t\t\t\t\t\t\t\t\tTHEME SETTINGS\n");
				bar();
				char option;
				printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tPlease select the theme to apply\n");
				printf("\t\t\t\t\t\t\t\t[1] Halo\n");
				printf("\t\t\t\t\t\t\t\t[2] Red \n");
				printf("\t\t\t\t\t\t\t\t[3] Green\n");
				fflush(stdin);
				option = _getch();
				switch (option)
				{
				case '1': system("color 3b"); break;
				case '2': system("color 4a"); break;
				case '3': system("color 2e"); break;
				default: system("color 3b"); break;
				}
			}
			break;
		}

		case 'F':
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
			bar();
			char option1;
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    [1] Update Record\n\t\t\t\t\t\t\t    [2] List Record.\n\t\t\t\t\t\t\t    [3] Check Fee Status.\n\t\t\t\t\t\t\t    [4] Clear Fee Record.\n\n\n\t\t\t\t\t\t      Press any other key to go back to Main Menu.\t\t");
			option1 = _getch();
			switch (option1)
			{
			case '1': fee(); break;
			case '2': listfee(); break;
			case '3': feestatus(); break;
			case '4': clearfee(); break;
			}
			break;
		}

		case 'L':
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t                             LIBRARY SECTION\n");
			bar();
			printf("\n\n\n\n\n\t\t\t\t\t\t\t    [1] New Book\n\t\t\t\t\t\t\t    [2] Issue a Book\n\t\t\t\t\t\t\t    [3] Return a Book\n\t\t\t\t\t\t\t    [4] Library Records\n\t\t\t\t\t\t\t    [5] Delete a Book");
			char opt2;
			opt2 = _getch();
			if (opt2 == '1')
				newbook();
			if (opt2 == '2')
				issuebook();
			if (opt2 == '3')
				returnbook();
			if (opt2 == '4')
				librecord();
			if (opt2 == '5')
				deletebook();
			break;
		}

		case 'E':
		{
			system("cls");
			mainheading();
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tThe program will now exit!!!");
			Sleep(1500);
			exit(0);
		}

		case 'M':
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\tRFAS SCHOOL MANAGEMENT v1.0\n");
			bar();
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t       A PROJECT BY\n\n\n");
			printf("\t\t\t\t\t\t\t    Shahzeb Naveed\n");
			printf("\t\t\t\t\t\t\t    Muhammad Ferjad Naeem\n");
			printf("\t\t\t\t\t\t\t    Muhammad Hamza Naqi\n");
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t  (c) Copyrights Reserved and Trademarks of RFAS and Co.");
			printf("\n\t\t\t\t\t\t  Anyone Copying The Trademark Without Legal Patents ");
			printf("\n\t\t\t\t\t\t  Would Be Imprisoned Under Article 144-A.");
			_getch();
			break;
		}

		default:
		{
			system("cls");
			printf("Incorrect input. Press the key again.\t");
			_getch();

		}
		}
	}
	_getch();
	return 0;
}

void bar()
{
	for (int i = 0; i<140; i++)
		printf("-");
}

void smallbar()
{
	for (int i = 0; i<30; i++)
		printf("-");
}

void mainheading()
{
	bar();
	printf("\n\t\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM\n");
	bar();
}

void pass()
{
	FILE *p;
	p = fopen("projectpass.txt", "rb+");
	int x = 1;
	if (p == 0)
	{
		p = fopen("projectpass.txt", "wb+");
		mainheading();
		printf("\n\n\n\n\n\n\t\t\t\t\t\t    Set your username and password.\n\n\n\t\t\t\t\t\t    Username:\t\t");
		scanf("%99[^\n]", u.username);
		printf("\n\t\t\t\t\t\t    Password:\t\t");
		fflush(stdin);
		scanf("%99[^\n]", u.password);
		printf("\n\n\n\t\t\t\t\t\t    Enter your middle name for security question.\n\n\t\t\t\t\t\t    Middle name:\t");
		fflush(stdin);
		scanf("%99[^\n]", u.security);
		x = 0;
		fwrite(&u, sizeof(u), 1, p);
		system("cls");
	}
	char entereduser[100];
	char enteredpass[100];
	if (x == 1)
	{
		system("cls");
		int alpha = 1;
		while (alpha == 1)
		{
			system("cls");
			mainheading();
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\t   Enter username and password to continue.\n\n\n ");
			printf("\n\n\t\t\t\t\t\t   Username:\t\t");
			fflush(stdin);
			scanf("%99[^\n]", entereduser);
			printf("\n\t\t\t\t\t\t   Password:\t\t");
			fflush(stdin);
			scanf("%99[^\n]", enteredpass);
			p = fopen("projectpass.txt", "rb+");
			while ((fread(&u, sizeof(u), 1, p)) == 1)
			{
				if ((strcmp(entereduser, u.username)) == 0 && (strcmp(enteredpass, u.password)) == 0)
				{
					system("cls");
					alpha = 2;
					break;
				}
				else
				{
					system("cls");
					mainheading();
					printf("\n\n\n\n\n\n\n\t\t\t\t\t\t    Incorrect username or password.\n");
					printf("\n\n\t\t\t\t\t\t    [1] to try again.\n\t\t\t\t\t\t    [2] to reset password.\n");
					char option = 1;
					fflush(stdin);
					option = _getch();
					if (option == '1')
						break;
					if (option == '2')
						forgotpass();
				}
			}
			fclose(p);
		}
	}
	fclose(p);
}

void changepass()
{
	FILE *p;
	p = fopen("projectpass.txt", "rb+");
	if (p == 0)
		exit(0);
	system("cls");
	mainheading();
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\tEnter new username:\t\t\t\t");
	fflush(stdin);
	scanf("%99[^\n]", u.username);
	printf("\n\t\t\t\t\tEnter new password:\t\t\t\t");
	fflush(stdin);
	scanf("%99[^\n]", u.password);
	printf("\n\t\t\t\t\tEnter your middle name for security question:\t");
	fflush(stdin);
	scanf("%99[^\n]", u.security);
	system("cls");
	mainheading();
	fwrite(&u, sizeof(u), 1, p);
	printf("\n\n\n\n\n\n\t\t\t\t\t\t    Password Changed Successfully!");
	_getch();
	fclose(p);
}

void forgotpass()
{
	system("cls");
	FILE *p;

	int alpha = 1;
	while (alpha == 1)
	{
		system("cls");

		char entereduser[100];
		char enteredmiddle[100];
		mainheading();
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Enter username for verification.\n\n\n ");
		printf("\n\t\t\t\t\t\t    Username:\t\t\t\t\t");
		fflush(stdin);
		scanf("%99[^\n]", entereduser);
		printf("\n\t\t\t\t\t\t    Enter your middle name for verification:\t");
		fflush(stdin);
		scanf("%99[^\n]", enteredmiddle);
		p = fopen("projectpass.txt", "rb+");
		while ((fread(&u, sizeof(u), 1, p)) == 1)
		{
			if ((strcmp(entereduser, u.username)) == 0 && (strcmp(enteredmiddle, u.security)) == 0)
			{
				system("cls");
				mainheading();
				printf("\n\n\n\n\n\t\t\t\t\t\t\t  Verification Successful!");
				_getch();
				system("cls");
				mainheading();

				printf("\n\n\n\n\n\t\t\t\t\tEnter new username:\t\t\t\t");
				fflush(stdin);
				scanf("%99[^\n]", u.username);
				printf("\n\t\t\t\t\tEnter new password:\t\t\t\t");
				fflush(stdin);
				scanf("%99[^\n]", u.password);
				printf("\n\t\t\t\t\tEnter your middle name for security question:\t");
				fflush(stdin);
				scanf("%99[^\n]", u.security);
				system("cls");
				mainheading();
				fwrite(&u, sizeof(u), 1, p);
				printf("\n\n\n\n\n\t\t\t\t\t\t    Password Changed Successfully!");
				_getch();
				alpha = 2;
				break;
			}
			else
			{
				system("cls");
				mainheading();
				printf("\n\n\n\n\n\t\t\t\t\t   Incorrect username or security question!!! Try again. \n");
				_getch();

			}

		}

		fclose(p);
	}

}

void addrecord()
{
	int counter = 0;
	FILE *f;
	f = fopen("School Record System.txt", "ab+");
	while (1)
	{
		counter++;
		system("cls");
		mainheading();
		printf("\n\n\nEnter ID:\t");
		scanf("%d", &s.id);
		printf("\nName:\t\t");
		fflush(stdin);
		scanf("%99[^\n]", s.name);
		printf("\nFather's name:\t");
		fflush(stdin);
		scanf("%99[^\n]", s.fname);
		printf("\nClass:\t\t");
		scanf_s("%d", &s.Class);
		printf("\nSection:\t");
		fflush(stdin);
		scanf("%99[^\n]", s.section);
		fwrite(&s, sizeof(s), 1, f);
		printf("\n\n\n\n\t\t\t\tPress [N] to go to Main Menu. Press any other key to add more records.");
		char choice;
		fflush(stdin);
		choice = _getch();
		choice = toupper(choice);
		if (choice == 'N')
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t\t      %d Record/s Successfully Added!\n\n", counter);
			Sleep(1000);
			system("cls");
			break;
		}
	}
	fclose(f);
}

void modify()
{
	FILE *f;
	int enterid;
	f = fopen("School Record System.txt", "rb+");
	if (f == 0)
		exit(0);
	system("cls");
	mainheading();
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Enter ID of the student:\t");
	scanf("%d", &enterid);
	int v = 1;
	long int size = sizeof(s);

	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		if (enterid == s.id)
		{
			system("cls");
			mainheading();
			printf("\n\n\nEnter ID:\t");
			scanf("%d", &s.id);
			printf("\nName:\t\t");
			fflush(stdin);
			scanf("%99[^\n]", s.name);
			printf("\nFather's name:\t");
			fflush(stdin);
			scanf("%99[^\n]", s.fname);
			printf("\nClass:\t\t");
			scanf_s("%d", &s.Class);
			printf("\nSection:\t");
			fflush(stdin);
			scanf("%99[^\n]", s.section);
			fseek(f, -size, SEEK_CUR);
			fwrite(&s, sizeof(s), 1, f);
			printf("\n\n\n\n\n\n\t\t\t\t\t\t      Record Updated Successfully!");
			_getch();
			break;
		}
	}
	if (v == 1)
	{
		printf("\n\n\n\n\n\n\t\t\t\t\t\t      No Record Found.");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t\t      Press any key to continue to Main Menu.");
	_getch();
	fclose(f);
}

void searchrecord()
{
	FILE *f;
	char name[100];
	f = fopen("School Record System.txt", "rb+");
	if (f == 0)
		exit(0);
	system("cls");
	mainheading();
	int enterid = 0;
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Search ID:\t");
	scanf("%d", &enterid);
	int x = 1;
	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		if (enterid == s.id)
		{
			system("cls");
			mainheading();
			printf("\n\n\n");
			smallbar();
			printf("\n   Record Found!\n");
			x = 0;
			smallbar();
			printf("\n\nID:\t\t%d\nName:\t\t%s\nFather's Name:\t%s\nClass:\t\t%d\nSection:\t%s\n", s.id, s.name, s.fname, s.Class, s.section);
			smallbar();
			break;
		}
	}
	if (x == 1)
	{
		printf("\n\n\n\n\t\t\t\t\t\t\t    No Record Found!");
	}
	printf("\n\n\t\t\t\t\t\t\t    Press any key to go to Main Menu.");
	_getch();
	fclose(f);
}

void listrecord()
{
	system("cls");
	mainheading();
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    [1] Display all record.\n\t\t\t\t\t\t    [2] Display record of particular class.\n\t\t\t\t\t\t    ");
	char theta;
	theta = _getch();
	int way = 1;
	int enteredclass;
	switch (theta)
	{
	case '1': way = 1; break;
	case '2':
	{
		way = 2;
		printf("\n\n\t\t\t\t\t\t    Which class you want to display?--- ");
		scanf_s("%d", &enteredclass);
	}
	}
	system("cls");
	bar();
	printf("\n\t\t\t\t\t\t\t    SCHOOL RECORD\n");
	bar();
	printf("\nID\t\t\t       Name\t\t\t      Father's Name\t\t     Class\t\t\t        Section\t\t\t\n");
	bar();
	FILE *f;
	f = fopen("School Record System.txt", "ab+");
	if (f == 0)
	{
		printf("Error 404: File Not Found");
		exit(0);
	}
	while ((fread(&s, sizeof(s), 1, f)) == 1)
	{
		if (way == 1)
			printf("\n%-30d%-30s  %-30s  %-30d%-30s ", s.id, s.name, s.fname, s.Class, s.section);
		if (way == 2)
		{
			if (enteredclass == s.Class)
				printf("\n%-30d%-30s  %-30s  %-30d%-30s ", s.id, s.name, s.fname, s.Class, s.section);
		}
	}
	fclose(f);
	_getch();
	system("cls");
}

void deleterecords()
{
	FILE *f, *t;
	int i = 1;
	int enterid;
	t = fopen("temp.txt", "wb+");
	if ((f = fopen("School Record System.txt", "rb")) == NULL)
	{
		printf("\n\n\n\n\n\t\t\t\tError 404: File Not Found! The program will return to MAIN MENU");
		Sleep(2000);
		main();
	}
	system("cls");
	mainheading();
	printf("\n\n\n\n\t\t\t\tEnter the ID of student to be deleted from the Database:\t");
	scanf_s("%d", &enterid);
	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		if (enterid==s.id)
		{
			i = 0;
			continue;
		}
		else
		{
			fwrite(&s, sizeof(s), 1, t);
		}
	}
	if (i == 1)
	{
		system("cls");
		mainheading();
		printf("\n\n\n\n\t\t\t\t|tNo Record Found!");
		_getch();
	}
	fclose(f);
	fclose(t);
	remove("School Record System.txt");
	rename("temp.txt", "School Record System.txt");
	system("cls");
	mainheading();
	printf("\n\n\n\n\t\t\t\t\t\tRecord Successfully Deleted!");
	_getch();
}

void clear()
{
	system("cls");
	mainheading();
	printf("\n\n\n\n\t\t\t\tPress [Y] to go to clear all Record. Press any other key to go to Main Menu:\t\t");
	char choice;
	fflush(stdin);
	scanf_s("%c", &choice);
	if (choice == 'y')
	{
		FILE *f;
		f = fopen("School Record System.txt", "wb+");
		if (f == 0)
			exit(0);
		fclose(f);
		system("cls");
		mainheading();
		printf("\n\n\n\n\t\t\t\t\t\tRecords Deleted Successfully!");
		_getch();
	}
}

void fee()
{
	FILE *feeptr;
	feeptr = fopen("fee record.txt", "ab+");
	int counter = 0;
	while (1)
	{
		counter++;
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
		bar();
		printf("\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of the student:\t");
		char ename[100];
		fflush(stdin);
		scanf("%[^\n]", sf.name);
		printf("\n\t\t\t\t\t\tEnter the amount:\t\t");
		scanf_s("%d", &sf.fee);
		printf("\n\t\t\t\t\t\tDate (DDMMYY):\t\t\t");
		scanf_s("%d", &sf.date);
		fwrite(&sf, sizeof(sf), 1, feeptr);
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
		bar();
		printf("\n\n\n\n\n\n\t\t\t\t\t\tFee record updated successfully.\n\n\t\t\t\t\t\tPress [N] to go to Main Menu. Press any other key to add more records.\t");
		char choice;
		fflush(stdin);
		choice = _getch();
		choice = toupper(choice);
		if (choice == 'N')
		{
			printf("\n\n\n\n\n\n\t\t\t\t\t\t      %d Record/s Successfully Added!\n\n", counter);
			break;
		}
	}
	fclose(feeptr);
}

void listfee()
{
	FILE *feeptr;
	feeptr = fopen("fee record.txt", "rb+");
	if (feeptr == 0)
	{
		printf("\n\t\t\t\t\t\t   Error: File Not Found.");
		Sleep(1000);
		exit(0);
	}
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
	bar();
	printf("\nName\t\tPaid Amount\t\tDate(DDMMYY)\n");
	bar();
	while (fread(&sf, sizeof(sf), 1, feeptr) == 1)
	{
		printf("\n%-15s %-15d\t\t%-15d", sf.name, sf.fee, sf.date);
	}
	_getch();
	_getch();
	fclose(feeptr);
}

void feestatus()
{
	FILE *feeptr;
	feeptr = fopen("fee record.txt", "rb+");
	if (feeptr == 0)
	{
		printf("\n\t\t\t\t\t\t   Error: File Not Found.");
		Sleep(1000);
		exit(0);
	}
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
	bar();
	char name[100];
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tSearch Name:\t");
	fflush(stdin);
	scanf("%99[^\n]", name);
	int x = 1;
	while (fread(&sf, sizeof(sf), 1, feeptr) == 1)
	{
		if (strcmp(sf.name, name) == 0)
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
			bar();
			printf("\n\n\n");
			smallbar();
			printf("\n    Fee Status: Paid!\n");
			x = 0;
			smallbar();
			printf("\n\nName:\t\t\t%s\nFee Amount:\t\t%d\nDate(DDMMYY):\t\t%d\n", sf.name, sf.fee, sf.date);
			smallbar();
			break;
		}
	}
	if (x == 1)
	{
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\tFee Status:\tNot Paid");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tPress any key to continue to Main Menu.");
	_getch();
	fclose(feeptr);
}

void clearfee()
{
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
	bar();
	printf("\n\n\n\n\t\t\t\tPress [Y] to delete all Records. Press any other key to continue to Main Menu.\t\t");
	char choice;
	fflush(stdin);
	choice = _getch();
	choice = toupper(choice);
	if (choice == 'y')
	{
		FILE *feeptr;
		feeptr = fopen("fee record.txt", "wb+");
		if (feeptr == 0)
			exit(0);
		fclose(feeptr);
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tFEE SECTION\n");
		bar();
		printf("\n\n\n\n\t\t\t\t\t\tFee Record Deleted Successfully!");
		_getch();
	}
}

void newbook()
{
BOOKLABEL: FILE *lib;
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	lib = fopen("Library Data.txt", "ab+");
	int enteredcode;
	int alpha = 0;
	char opt;
	printf("\n\n\n\n\n\n\t\t\t\t\t\t  Enter the Book Code:\t\t");
	scanf_s("%d", &enteredcode);
	while ((fread(&l, sizeof(l), 1, lib)) == 1)
	{
		if (enteredcode == l.bookcode)
		{
			system("cls");
			bar();
			printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
			bar();
			printf("\n\n\n\n\n\n\t\t\t\t\t\t\tThe entered code already exists!");
			alpha = 1;
		}
	}
	if (alpha == 0)
	{
		l.bookcode = enteredcode;
		printf("\n\t\t\t\t\t\t  Enter the name of the book:\t");
		fflush(stdin);
		scanf("%[^\n]", l.bookname);
		l.status = 1;
		fwrite(&l, sizeof(l), 1, lib);
		fclose(lib);
		printf("\n\n\n\t\t\t\t\t\t\tRecord Successfully Added!");
	}
	fclose(lib);
	printf("\n\n\n\n\n\n\t\t\t\t\tPress [Y] to add more books. Press any other key to continue to Main Menu.");
	opt = _getch();
	if (opt == 'y' || opt == 'Y')
	{
		goto BOOKLABEL;
	}
	fclose(lib);
}

void issuebook()
{
	FILE *lib;
	FILE *f;
	f = fopen("School Record System.txt", "rb+");
	lib = fopen("Library Data.txt", "ab+");
	int counter = 0;
	int enteredbookcode;
	char enteredname[100];
	int beta = 0;
	int charlie = 0;
	long int size = sizeof(l);
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tStudent Name:\t\t");
	fflush(stdin);
	scanf("%99[^\n]", enteredname);
	while ((fread(&s, sizeof(s), 1, f)) == 1)
	{
		if ((strcmp(enteredname, s.name)) == 0)
		{
			beta = 1;
		}
	}
	if (beta == 1)
	{
		while (1)
		{
		S1:				fclose(lib);
			lib = fopen("Library Data.txt", "rb+");
			printf("\n\t\t\t\t\t\t\tBook Code:\t\t");
			fflush(stdin);
			scanf("%d", &enteredbookcode);
			while (fread(&l, sizeof(l), 1, lib) == 1)
			{
				if (enteredbookcode == l.bookcode && l.status == 1)
				{
					charlie = 1;
					printf("\n\t\t\t\t\t\t\tIssue Date DDMMYY:\t");
					scanf_s("%d", &l.issuedate);
					strcpy(l.studentname, enteredname);
					printf("\n\n\n\t\t\t\t\t\t\t\tBook Issued!");
					l.status = 0;
					fseek(lib, -size, SEEK_CUR);
					fwrite(&l, sizeof(l), 1, lib);
					fclose(lib);
				}
			}
			if (charlie == 0)
			{
				system("cls");
				bar();
				printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
				bar();
				printf("\n\n\n\n\n\n\t\t\t\t\t\tBook does not exist or is not available at this moment!");
			}
			printf("\n\n\n\n\n\n\t\t\t\t\tPress [ESC] to to go to Main Menu. Press any other key to add more Books.\t\t\n\n\n\n");
			char choice;
			choice = _getch();
			choice = toupper(choice);
			if (choice == 27)
			{
				system("cls");
				fclose(lib);
				break;
			}
			
		}
		fclose(lib);
	}
	if (beta == 0)
	{
		printf("\n\n\n\n\t\t\t\t\t\tStudent does not exist.");
		_getch();
		fclose(lib);
	}
	fclose(f);
}

void librecord()
{
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	printf("\nBook Code\t\t Book Name\t\t  Issued to\t\t   Issue Date (DDMMYY)\t    Status\n");
	bar();
	FILE *lib;
	lib = fopen("Library Data.txt", "rb");
	if (lib == NULL)
	{
		system("cls");
		printf("Error 404: File Not Found");
		_getch();
	}
	while ((fread(&l, sizeof(l), 1, lib)) == 1)
	{
		printf("\n%-25d%-25s%-25s", l.bookcode, l.bookname, l.studentname, l.issuedate);
		if (l.issuedate != 0)
			printf("%d", l.issuedate);
		if (l.status == 1)
			printf("                         Available");
		if (l.status == 0)
			printf("                   Issued");
	}
	fclose(lib);
	_getch();
}

void returnbook()
{
	int enteredcode;
	long int size = sizeof(l);
	int BETA = 1;
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\tBook Code:\t\t");
	fflush(stdin);
	scanf_s("%d", &enteredcode);
	FILE *lib;
	lib = fopen("Library Data.txt", "rb+");
	if (lib == NULL)
	{
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
		bar();
		printf("\n\n\n\n\n\n\t\t\t\t\tError 404: File Not Found");
		_getch();
		goto S9;
	}
	while (fread(&l, sizeof(l), 1, lib) == 1)
	{
		if (enteredcode == l.bookcode)
		{
			l.status = 1;
			l.issuedate = 0;
			strcpy(l.studentname, " ");
			BETA = 0;
			fseek(lib, -size, SEEK_CUR);
			fwrite(&l, sizeof(l), 1, lib);
			printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tBook Returned!");
			_getch();
			fclose(lib);
		}
	}
	if (BETA == 1)
	{
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
		bar();
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tIncorrect Code!");
		_getch();
	}
S9:	fclose(lib);
}

void deletebook()
{
	FILE *lib, *tempo;
	int g = 1;
	int enteredcode;
	tempo = fopen("tempobooks.txt", "wb+");
	if ((lib = fopen("Library Data.txt", "rb")) == NULL)
	{
		printf("\n\n\n\n\n\n\t\t\t\t\tError 404: File Not Found! The program will return to MAIN MENU");
		Sleep(2000);
		goto S10;
	}
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	printf("\n\n\n\n\n\n\t\t\t\t\t\t   Enter the code of the book to be deleted:\t");
	scanf_s("%d", &enteredcode);
	while (fread(&l, sizeof(l), 1, lib) == 1)
	{
		if (l.bookcode == enteredcode)
		{
			g = 0;
			continue;
		}
		else
		{
			fwrite(&l, sizeof(l), 1, tempo);
		}
	}
	if (g == 1)
	{
		system("cls");
		bar();
		printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
		bar();
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo Record Found!");
		_getch();
		goto S8;
	}
	fclose(lib);
	fclose(tempo);
	remove("Library Data.txt");
	rename("tempobooks.txt", "Library Data.txt");
	system("cls");
	bar();
	printf("\t\t\t\t\t\t\t\t\t\tLIBRARY SECTION\n");
	bar();
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t  Book Successfully Deleted!");
S8 : _getch();
S10: _getch();
}





