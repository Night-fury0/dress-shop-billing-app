//*************************************************************************
//-----------------------COMPUTER SCIENCE PROJECT--------------------------
//*************************************************************************

// Headerfiles used in the program
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>

class dress
{
int idno;      		// ID No. of the Dress Item
char dname[50];         // Name of the Dress Item
char company[50];	// Company of the Dress Item
double discount;	// Discount amount of the Dress Item
double dispercent;	// Discount(%) of the Dress Item
double price;		// Price of the Dress Item
long stock;		// Available Stock of the Dress Item

public:       //PUBLIC MEMBERS OF THE CLASS

void accept() // Function to accept the details of dress item
{
cout<<"\n\tEnter Dress ID no: ";
cin>>idno;
cout<<"\n\tEnter Dress name: ";
gets(dname);
cout<<"\n\tEnter Company: ";
gets(company);
cout<<"\n\tEnter Price: ";
cin>>price;
cout<<"\n\tEnter Discount(%): ";
cin>>dispercent;
discount=dispercent*price*0.01;
cout<<"\n\tEnter Stock: ";
cin>>stock;
}

void display1() // Function to display the details of a Dress Item
{
cout<<"\tDress ID No.: "<<'\t'<<idno<<endl;
cout<<"\tDress Name: "<<'\t'<<dname<<endl;
cout<<"\tDress Company: "<<'\t'<<company<<endl;
cout<<"\tPrice: "<<'\t'<<'\t'<<price<<endl;
cout<<"\tDiscount: "<<'\t'<<discount<<endl;
cout<<"\tCurrent Stock: "<<'\t'<<stock<<endl;
}

int retidno()		// Function to return ID No. of the Dress Item.
{
return idno;
}
long retprice()	   // Function to return Price of the Dress Item.
{
return price;
}
double retdiscount()  // Function to return discount amount of the Dress Item.
{
return discount;
}
long retstock()	   // Function to return Avalilable Stock of the Dress Item.
{
return stock;
}
char* retcompany() // Function to return company name of the Dress Item
{
return company;
}
char* retdname()   // Function to return Name of the Dress Item
{
return dname;
}
void change_stock(int n) //Function to update Stock of the Dress Item
{
stock-=n;
}
void update(); 		// Function to update details of the Dress Item
};

void design()		// Function to display borders in output screen
{
clrscr();
int a=205;
for (int i=0;i<80;i++)
{
gotoxy(i,1);
cout<<(char)a;
gotoxy(i,25);
cout<<(char)a;
}
int b=186;
for (int j=2;j<25;j++)
{
gotoxy(1,j);
cout<<(char)b;
gotoxy(79,j);
cout<<(char)b;
}
gotoxy(79,1);
cout<<(char)187;
gotoxy(79,25);
cout<<(char)188;
gotoxy(1,1);
cout<<(char)201;
gotoxy(1,25);
cout<<(char)200;
}

void dress::update()
{
int ch;
cout<<"\n\n\tEnter which detail to be modifyed:";
cout<<"\n\t1.Dress name";
cout<<"\n\t2.Company name";
cout<<"\n\t3.Price";
cout<<"\n\t4.Discount";
cout<<"\n\t5.Stock";
cout<<"\n\t6.Go Back \n\n\t";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
cout<<"\tEnter New Dress name: ";
gets(dname);
break;

case 2:
cout<<"\tEnter new company name: ";
gets(company);
break;

case 3:
cout<<"\tEnter New Price: ";
cin>>price;
break;

case 4:
cout<<"\tEnter New Discount(%): ";
cin>>dispercent;
discount=dispercent*price*0.01;
break;

case 5:
cout<<"\tEnter New Stock: ";
cin>>stock;
break;

case 6:
break;

default:
cout<<"\n\tInvalid Choice"<<endl;
}
}

void intro() // Function to display the introduction of the project
{
clrscr();
int i,j,a=176,c=178;
gotoxy(1,1);

for (i=0;i<80;i++)
cout<<(char)a;

for (j=0;j<24;j++)
{
gotoxy(1,j);
cout<<(char)a;
gotoxy(2,j);
cout<<(char)a;
}
for (i=1;i<80;i++)
{
gotoxy(i,24);
cout<<(char)a;
}
for (i=1;i<=24;i++)
{
gotoxy(79,i);
cout<<(char)a;
gotoxy(80,i);
cout<<(char)a;
}
for (j=3;j<79;j++)
{
gotoxy(j,2);
cout<<(char)c;
gotoxy(j,23);
cout<<(char)c;
}
for (i=2;i<24;i++)
{
gotoxy(3,i);
cout<<(char)c;
gotoxy(4,i);
cout<<(char)c;
gotoxy(78,i);
cout<<(char)c;
gotoxy(77,i);
cout<<(char)c;
}
gotoxy(20,7);
cout<<"!!WELCOME TO COMPUTER SCIENCE PROJECT!!";
getch();
gotoxy(30,10);
cout<<"TOPIC: DRESS SHOP"; // Topic of the Project
getch();
gotoxy(25,20);
cout<<"Press any key to continue...";
getch();
}
void menu();

class billing
{
int pno[30];  	   // Product No. (Dress ID No.)
int qno[30];	   // Quantity of the Dress Item ordered by the customer
double amount[30]; // Amount(price) of a dress item ordered by the customer
char cname[50];	   // Customer's Name
char cphone[50];   // Customer's Phone No.

public:

double tamount;		// Total amount(price)
int no;			// Total No. of Dress items ordered
billing()		// Constructor to initialize values
{
no=0;
tamount=0;
}

void acceptc()		// Function to accept customer details
{
gotoxy(20,10);
cout<<"Enter Name of the Customer: ";
gets(cname);
gotoxy(20,13);
cout<<"Enter Phone no. of Customer: ";
gets(cphone);
gotoxy(25,18);
cout<<"Press any key to start shopping...";
getch();
}

void accept()		// Function to accept details of the Dress Item
{
no++;
cout<<"\n\tEnter Dress ID No.: ";
cin>>pno[no];
cout<<"\n\tEnter the Quantity: ";
cin>>qno[no];
}

int retpno(int n)	// Function to return Product No.(Dress ID No.)
{
return pno[n];
}
int retqno(int n)	// Function to return Quantity
{
return qno[n];
}
double retamount(int n)	// Function to return amount
{
return amount[n];
}
void display(int,int);
void displayc()		// Function to display customer details
{
cout<<"\n\tName: "<<cname<<endl;
cout<<"\n\tPhone No.: "<<cphone<<endl<<endl;
}
};

void billing::display(int n,int l)
{
dress temp;
ifstream fout("dress.dat",ios::binary);
if (!fout)
cout<<"Error in opening the file"<<endl;
else
while (!fout.eof())
{
fout.read((char*)&temp,sizeof(dress));
if (fout.eof()) break;
if (temp.retidno()==pno[n])
{
cout<<endl;
gotoxy(1,l);
cout<<temp.retidno();
gotoxy(9,l);
cout<<temp.retdname();
gotoxy(24,l);
cout<<temp.retprice();
gotoxy(33,l);
cout<<temp.retdiscount();
gotoxy(50,l);
cout<<qno[n];
gotoxy(64,l);
cout<<(long)(temp.retprice()-temp.retdiscount())*qno[n];
cout<<endl;
amount[n]=(temp.retprice()-temp.retdiscount())*qno[n];
}
}
fout.close();
}

void bill(billing&);

int shop(billing& a)		// Function for shopping
{
clrscr();
gotoxy(26,3);
cout<<"\t--SHOPPING--\n";
a.acceptc();
char rep;
do
{
int q=0;
dress temp;
clrscr();
gotoxy(26,3);
cout<<"\t--SHOPPING--\n";
a.displayc();
a.accept();
fstream k("dress.dat",ios::binary|ios::out|ios::in);
k.seekg(0,ios::beg);
if (!k)
cout<<"\tError in opening the File"<<endl;
else
while (!k.eof())
{
k.read((char*)&temp,sizeof(dress));
if (k.eof()) break;
int p=k.tellg();
if (temp.retidno()==a.retpno(a.no))
{
q=1;
if (temp.retstock()-a.retqno(a.no)<0)
{
cout<<"\n\n\tSORRY, OUT OF STOCK";
cout<<"\n\n\tQuantity Available: "<<temp.retstock()<<endl;
a.no--;
break;
}
temp.change_stock(a.retqno(a.no));
k.seekp(p-sizeof(dress),ios::beg);
k.write((char*)&temp,sizeof(dress));
cout<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
temp.display1();
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl;
}
}
k.close();
if (q==0)
{
a.no--;
cout<<"\n\tThe Given Dress ID No. does not exist\n";
}
cout<<"\n\tDo you want to continue?(y/n)";
cin>>rep;
} while (rep=='y');
if (a.no!=0)
{
clrscr();
gotoxy(35,5);
cout<<"--BILLING--";
bill(a);
}
return 0;
}

void bill(billing &a)		// Function for displaying the bill
{
clrscr();
cout<<"==============================================================================\n";
gotoxy(35,2);
cout<<"INVOICE\n";
cout<<"==============================================================================\n\n";
a.displayc();
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"ID.N0\tPRODUCT NAME\tPRICE\tDISCOUNT\tQUANTITY\tAMOUNT\n";
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl;
int l=13;
for (int i=1;i<=a.no;i++)
{
a.display(i,l);
a.tamount+=a.retamount(i);
l++;
}
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"  \t\t\t\t\t\t\t\t "<<"Total= "<<a.tamount;
getch();
menu();
}

void customer()		// Function to display Customer Menu
{
billing a;
int ch;
do
{
clrscr();
design();
gotoxy(30,3);
cout<<"--CUSTOMER--\n\n";
gotoxy(8,5);
cout<<"1.Buy Products";
gotoxy(8,7);
cout<<"2.List of all Products";
gotoxy(8,9);
cout<<"3.Go Back";
gotoxy(10,12);
cout<<"Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
clrscr();
shop(a);
break;

case 2:
{
int k=0;
clrscr();
dress s;
gotoxy(24,2);
cout<<"--LIST OF ALL PRODUCTS--\n\n";
cout<<"==============================================================================\n";
cout<<"ID No. \t Name \t\t Company \t  Price\t\tDiscount\tStock \n";
cout<<"==============================================================================\n\n";
fstream a("dress.dat",ios::in|ios::binary);
int l=7;
if (!a)
cout<<"ERROR";
else
while (!a.eof())
{
a.read((char*)&s,sizeof(dress));
if (a.eof()) break;
k=1;
gotoxy(1,l);
cout<<s.retidno();
gotoxy(10,l);
cout<<s.retdname();
gotoxy(26,l);
cout<<s.retcompany();
gotoxy(43,l);
cout<<s.retprice();
gotoxy(57,l);
cout<<s.retdiscount();
gotoxy(73,l);
cout<<s.retstock();
l+=2;
}
a.close();
if (k==0)
cout<<"\n\tNo Product available in the list";
getch();
break;
}

case 3:
menu();
break;

default:
cout<<"\n\n\tInvalid Choice"<<endl;
cout<<"\n\n\tPlease Enter a number between 1 to 3"<<endl;
getch();
}
} while (ch!=3);
}

void admin()	//Function to display ADMIN Menu
{
int ch;
do
{
clrscr();
design();
gotoxy(8,3);
cout<<"MENU:";
gotoxy(8,5);
cout<<"1.Add a Product";
gotoxy(8,7);
cout<<"2.List of all Products";
gotoxy(8,9);
cout<<"3.Delete a Product";
gotoxy(8,11);
cout<<"4.Modify a Product";
gotoxy(8,13);
cout<<"5.Search a Product";
gotoxy(8,15);
cout<<"6.Go Back";
gotoxy(10,18);
cout<<"Enter Your Choice: ";
cin>>ch;
cout<<endl;
switch (ch)
{

case 1:
{
clrscr();
gotoxy(30,2);
cout<<"--ADD A PRODUCT--\n\n";
dress a,s;
int m=0;
a.accept();
fstream g("dress.dat",ios::binary|ios::in|ios::out);
if (!g)
{
cout<<"\tError in Opening File";
getch();
}
else
while (!g.eof())
{
g.read((char*)&s,sizeof(dress));
if (a.retidno()==s.retidno())
{
m=1;
cout<<"\n\n\tThe Given Dress ID No. Already exists";
cout<<"\n\n\tThe Created Product has been Deleted"<<endl;
getch();
break;
}
}
g.close();
if (m==0)
{
fstream f("dress.dat",ios::app|ios::binary);
f.write((char*)&a,sizeof(dress));
f.close();
}
break;
}

case 2:
{
int k=0;
clrscr();
dress s;
cout<<"\t\t\t--LIST OF ALL PRODUCTS--\n\n";
cout<<"==============================================================================\n";
cout<<"ID No. \t Name \t\t Company \t  Price\t\tDiscount\tStock \n";
cout<<"==============================================================================\n\n";
fstream a("dress.dat",ios::in|ios::binary);
int l=7;
if (!a)
cout<<"ERROR";
else
while (!a.eof())
{
a.read((char*)&s,sizeof(dress));
if (a.eof()) break;
k=1;
gotoxy(1,l);
cout<<s.retidno();
gotoxy(10,l);
cout<<s.retdname();
gotoxy(26,l);
cout<<s.retcompany();
gotoxy(43,l);
cout<<s.retprice();
gotoxy(57,l);
cout<<s.retdiscount();
gotoxy(73,l);
cout<<s.retstock();
l+=2;
}
a.close();
if (k==0)
cout<<"\n\tNo Product available in the list";
getch();
break;
}

case 3:
{
clrscr();
int no,k=0;
dress q;
gotoxy(30,2);
cout<<"--DELETE A PRODUCT--\n\n";
cout<<"\tEnter Dress ID No. to be deleted: ";
cin>>no;
fstream f("dress.dat",ios::in|ios::binary);
fstream h("temp.dat",ios::app|ios::binary);
while (!f.eof())
{
f.read((char*)&q,sizeof(dress));
if (f.eof()) break;
if (q.retidno()!=no)
{
h.write((char*)&q,sizeof(dress));
}
else
{
k=1;
cout<<endl<<endl;
q.display1();
}
}
f.close();
h.close();
remove("dress.dat");
rename("temp.dat","dress.dat");
if (k==0)
cout<<"\n\tThe Given Dress ID No. is not found";
else
cout<<"\n\tProduct Deleted";
getch();
break;
}

case 4:
{
int k=0;
clrscr();
gotoxy(30,2);
cout<<"--MODIFIY DETAILS OF A PRODUCT--\n\n";
int no;
dress c;
cout<<"\tEnter Dress's ID to be updated: ";
cin>>no;
fstream f("dress.dat",ios::binary|ios::in|ios::out);
if (!f)
cout<<"Error"<<endl;
else
while (!f.eof())
{
f.read((char*)&c,sizeof(dress));
int p=f.tellg();
if (f.eof()) break;
if (c.retidno()==no)
{
k++;
c.display1();
c.update();
f.seekg(p-sizeof(dress),ios::beg);
f.write((char*)&c,sizeof(dress));
}
}
f.close();
if (k==0)
{
cout<<"\n\n\tThe Given Dress ID No. Does Not Exist";
getch();
}
break;
}

case 5:
{
int n,k=0;
clrscr();
gotoxy(30,2);
cout<<"--SEARCH FOR A PRODUCT--\n\n";
cout<<"\tEnter the Dress ID No.: ";
cin>>n;
dress a;
ifstream fin("dress.dat",ios::binary);
if (!fin)
cout<<"\tError in opening the file";
else
while (!fin.eof())
{
fin.read((char*)&a,sizeof(dress));
if (fin.eof()) break;
if (a.retidno()==n)
{
k++;
cout<<endl;
a.display1();
}
}
fin.close();
if (k==0)
cout<<"\n\n\tThe Given Dress ID No. does not exist"<<endl;
getch();
break;
}

case 6:
menu();
break;

default:
cout<<"\tInvalid Choice"<<endl;
cout<<"\n\n\tPlease Enter a number between 1 to 6"<<endl;
getch();
}
}while (ch!=6);
}

void menu()	// Function to display the main menu of the project
{
int ch;
do
{
clrscr();
design();
gotoxy(8,5);
cout<<"1.CUSTOMER";
gotoxy(8,7);
cout<<"2.ADMINISTRATOR";
gotoxy(8,9);
cout<<"3.Exit";
gotoxy(10,12);
cout<<"Enter: ";
cin>>ch;
switch (ch)
{
case 1:
customer();
break;

case 2:  // Password secure
clrscr();
gotoxy(30,2);
cout<<"--ADMINISTRATION--\n\n";
gotoxy(20,8);
char a[30],q;
cout<<"Please Enter the Password: ";
for (int i=0;;i++)
{
q=getch();
int b=q;
if ((b!=13) && (b!=8))	// ASCII Value of ENTER is: 13
{
a[i]=q;
cout<<'*';
}
else if (b==8)	//ASCII Value of BACKSPACE is: 8
{
cout<<'\b';
cout<<" "<<'\b';
i--;
a[i]='\0';
i--;
continue;
}
else
{
a[i]='\0';
break;
}
}
if (!strcmpi(a,"password")) //Password for Administration : "password"
{
gotoxy(30,10);
cout<<"Password Correct";
gotoxy(24,12);
cout<<"Press any key to continue...";
getch();
admin();
}
else
{
gotoxy(30,10);
cout<<"Password Mismatch"<<endl;
gotoxy(26,12);
cout<<"Press any key to Go Back"<<endl;
}
getch();
break;

case 3:
{
clrscr();
design();
for (i=3;i<78;i++)
{
gotoxy(i,2);
cout<<char(177);
gotoxy(i,24);
cout<<char(177);
}
for (i=2;i<25;i++)
{
gotoxy(3,i);
cout<<char(177);
gotoxy(4,i);
cout<<char(177);
gotoxy(77,i);
cout<<char(177);
gotoxy(76,i);
cout<<char(177);
}
gotoxy(35,12);
cout<<"!THANK YOU!";
getch();
exit(0);
break;
}

default:
cout<<"\n\n\tInvalid Choice"<<endl;
cout<<"\n\n\tPlease Enter a number between 1 to 3"<<endl;
getch();

}
}while (ch!=3);
getch();
}

void main()	// Main Function of the Program
{
clrscr();
intro();
menu();
getch();
}



//======================== END OF THE PROJECT==============================

