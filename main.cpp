#include <iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<conio.h>

using namespace std;
/*
class bank

{
    char name[100],add[100],y;
    float balance;
public:
    open_account();
    deposit_money();
    withdrew_money();
    display_account();
};
    bank::open_account()
    {
        cout<<"enter your full name "<<endl;
        cin.ignore();
        cin.getline(name,100);
        cout<<"enter your address"<<endl;
        cin.ignore();
        cin.getline(add,100);
        cout<<"what type of account you want to open saving(s) or current(c)"<<endl;
        cin>>y;
        cout<<"enter amount for deposit "<<endl;
        cin>>balance;
        cout<<"your account has been created "<<endl;

    }
    bank::deposit_money()
    {
        float a;
        cout<<"enter how much you deposit"<<endl;
        cin>>a;
        balance+=a;
        cout<<"total amount you deposit is"<< balance<<endl;

    }
    bank::display_account()
    {
        cout<<"your full name "<<name<<endl;
        cout<<"your address"<<add;
        cout<<"type of account that you are open"<<y<<endl;
        cout<<"total amount in your account "<<balance<<endl;
    }
   bank::withdrew_money()
   {
    float amount;
    cout<<"withdrew "<<endl;
    cout <<"enter amount you want to withdrew"<<endl;
    cin>>amount;
    balance=balance-amount;
    cout<<"final total lest  balance "<<balance<<endl;



   }




int main()

{
    int i;
    char ch;
    char x;
    bank i1;
    do{
     cout <<"welcome to muqtadir's bank........................................................................................................................................................................................................................................."<<endl;
    cout<<"press any key to continue..............."<<endl;
    cin>>ch;
    cout<<"your input is "<<ch<< endl;
     cout <<"select the option  from below "<<endl;
    cout << "1) open account  " << endl;
    cout << "2) deposit money  " << endl;
    cout << "3)  withdrew money  " << endl;
    cout << "4) display account   " << endl;
    cout << "5) exit  " << endl;
    cout << "  " << endl;
    cin>>i;
    switch(i)
    {
     case 1:
         cout<<"1) open account"<<endl;
     i1.open_account();
     break;
     case 2:
         cout<<"2) deposit money  "<<endl;
     i1.deposit_money();
     break;
     case 3:
         cout<<"3)  withdrew money  " <<endl;
     i1.withdrew_money();
     break;
     case 4: cout<<"4) display account   " <<endl;
     i1. display_account();
     break;
     case 5:
        if(i==5)
        {
            exit(1);

        }
     default:
         cout<<"this is not axite "<<endl;
         cout<<"do you want to select next option then press y"<<endl;
         cout<<"if you want to exit then press N"<<endl;

         if (x=='n'&& x=='N')
         {
             exit(0);
         }}}
         while(x=='y' || x=='Y');


         return(1);



    }
*/




class banking
{
	int Anumber;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();
	void show_account() const;
	void modify();
	void dep(int);
	void draw(int);
	void report() const;
	int returnaccount() const;
	int retdeposit() const;
	char rettype() const;
};

void banking::create_account()
{
	cout<<"\nEnter The account No. :";
	cin>>Anumber;
	cout<<"\n\nEnter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter Type of The account (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"\n\n\n CONGRATES "<<name<<" ACCOUNT IS CREATED......";
}

void banking::show_account() const
{
	cout<<"\nAccount No. : "<<Anumber;
	cout<<"\nAccount Holder Name : ";
	cout<<name;
	cout<<"\nType of Account : "<<type;
	cout<<"\nBalance amount : "<<deposit;
}


void banking::modify()
{
	cout<<"\nAccount No. : "<<Anumber;
	cout<<"\nModify Account Holder Name : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nModify Type of Account : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nModify Balance amount : ";
	cin>>deposit;
}


void banking::dep(int x)
{
	deposit+=x;
}

void banking::draw(int x)
{
	deposit-=x;
}

void banking::report() const
{
	cout<<Anumber<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}


int banking::returnaccount() const
{
	return Anumber;
}

int banking::retdeposit() const
{
	return deposit;
}

char  banking::rettype() const
{
	return type;
}


//***************************************************************
//    	function declaration
//****************************************************************
void write_account();
void display_balance(int);	//function to display account details given by user
void modify_account(int);	//function to modify record of file
void delete_account(int);
void delete_alldata(int);	//function to delete record of file
void display_all();		//function to display all account details
void deposit_withdraw(int, int); // function to desposit/withdraw amount for given account
void intro();	//introductory screen function

//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
	char ch;
	int num;
	intro();
	do
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\t******WELCOME TO COMERCIAL BANKING SYSTEM......";
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t06. CLOSE AN ACCOUNT";
		cout<<"\n\n\t07. CLEAR ALL ACCOUNT DATA";
		cout<<"\n\n\t08. MODIFY AN ACCOUNT";
		cout<<"\n\n\t09. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1':
			write_account();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 1);
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 2);
			break;
		case '4':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			display_balance(num);
			break;
		case '5':
			display_all();
			break;
		case '6':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			delete_account(num);
			break;
        case '7':
            cout<<"\n\n\tYOU WANT TO CLAER ALL ACCOUTN HOLDER DATA IF YES PRESS '1' OR NO PRESS ANYKEY";
            cin>>num;
            delete_alldata(num);
		 case '8':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			modify_account(num);
			break;
		 case '9':
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='8');
	return 0;
}


//***************************************************************
//    	function to write in file
//****************************************************************

void write_account()
{
	 banking ac;
	ofstream bankfile;
	bankfile.open("account.dat",ios::binary|ios::app);
	ac.create_account();
	bankfile.write(reinterpret_cast<char *> (&ac), sizeof( banking));
	bankfile.close();
}

//***************************************************************
//    	function to read specific record from file
//****************************************************************

void display_balance(int n)
{
	 banking ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";

    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof( banking)))
	{
		if(ac.returnaccount()==n)
		{
			ac.show_account();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nAccount number does not exist";
}
 void delete_alldata(int n)
{
	 banking ac;
	 bool flag=false;
	 cout<<"\n\n\tDO YOU WANT TO DELETE ALL DATA OF EMPLOY THEN PRESS ANY NUMBER ";
	 getch();

	ifstream inFile;

	inFile.open("account.dat",ios::out | ios::trunc);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\IMPLOY ALL DATA HAS BEEN DELETED \n";

    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof( banking)))
	{
		if(ac.returnaccount()==n)
		{
			ac.show_account();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\data does not exist ";
}


//***************************************************************
//    	function to modify record of file
//****************************************************************

void modify_account(int n)
{
	bool found=false;
	 banking ac;
	fstream File;
	File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof( banking));
		if(ac.returnaccount()==n)
		{
			ac.show_account();
			cout<<"\n\nEnter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*static_cast<int>(sizeof( banking));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof( banking));
			cout<<"\n\n\t Record Updated";
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
}

//***************************************************************
//    	function to delete record of file
//****************************************************************


void delete_account(int n)
{
	 banking ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof( banking)))
	{
		if(ac.returnaccount()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof( banking));
		}
	}
	inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\n\tRecord Deleted ..";
}

//***************************************************************
//    	function to display all accounts deposit list
//****************************************************************

void display_all()
{
	 banking ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no.      NAME           Type  Balance\n";
	cout<<"====================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof( banking)))
	{
		ac.report();
	}
	inFile.close();
}

//***************************************************************
//    	function to deposit and withdraw amounts
//****************************************************************

void deposit_withdraw(int n, int option)
{
	int amt;
	bool found=false;
	 banking ac;
	fstream File;
	File.open("account.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof( banking));
		if(ac.returnaccount()==n)
		{
			ac.show_account();
			if(option==1)
			{
				cout<<"\n\n\tTO DEPOSITE AMOUNT ";
				cout<<"\n\nEnter The amount to be deposited";
				cin>>amt;
				ac.dep(amt);
			}
			if(option==2)
			{
				cout<<"\n\n\tTO WITHDRAW AMOUNT ";
				cout<<"\n\nEnter The amount to be withdraw";
				cin>>amt;
				int bal=ac.retdeposit()-amt;
				if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
					cout<<"Insufficience balance";
				else
					ac.draw(amt);
			}
			int pos=(-1)*static_cast<int>(sizeof(ac));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof( banking));
			cout<<"\n\n\t Record Updated";
			found=true;
	       }
         }
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
}


//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************


void intro()
{
    cout<<"\n\n\t WELCOME";
    cout<<" \n\n\t   TO";
    cout<<"\n\n\t MUQTADIR'S ";
	cout<<"\n\n\n\t BANK";
	cout<<"\n\n\tMANAGEMENT";
	cout<<"\n\n\t  SYSTEM";
	cout<<"\n\n\n\nMADE BY : muqtadir alam";
	cout<<"\n\ncollege name  : mit muzaffarpur";
	cin.get();
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************



