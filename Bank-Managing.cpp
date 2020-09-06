#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class mandeepbank{
	char name[100],add[100],y;
	int bal;
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void Display_account();
			
};
void mandeepbank :: open_account()
{
	cout<<"----- New Account -----"<<endl;
	cout<<"Enter your Full Name: \n";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your Address: \n";
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open saving (s)  or current (c): \n";
	cin>>y;
	cout<<"Enter your depoite amount: \n ";
	cin>>bal;
	cout<<"Congrates,your account is created \n";
}
void mandeepbank :: deposite_money()
{
	cout<<"-----Deposite Money-----"<<endl;
	int a;
	cout<<"How much you deposite: \n";
	cin>>a;
	bal = bal+a;
	cout<<"Your total amount is deposite : \t"<<bal;
}

void mandeepbank :: Display_account()
{
	cout<<"-----Display Account-----"<<endl;
	cout<<"Your full Name: \t"<<name;
	cout<<"Your Address: \t"<<add;
	cout<<"Type of account that you open : \t"<<y;
	cout<<"Amount you deposite : \t"<<bal;
	
	
}
void mandeepbank :: withdraw_money()
{
	cout<<"-----WITHDRAW-----"<<endl;
	float w;
	cout<<"How much you withdraw: \n";
	cin>>w;
	bal=bal-w;
	cout<<"Now, Your total amount is left : \t "<<bal; 
}
int main()
{
	int c,x;
	mandeepbank obj;
	do
	{
	
	cout<<"-----WELCOME IN MANDEEP BANK CO.LTD -----"<<endl;
	cout<<"1) Open Account "<<endl;
	cout<<"2) deposite money "<<endl;
	cout<<"3) withdraw money "<<endl;
	cout<<"4) Display  Account "<<endl;
	cout<<"5) exit "<<endl;
	cout<<"Select the option from above: ";
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"1) Open Account \n";
		obj.open_account();
		break;
		case 2:
		cout<<"2) deposite money \n";
		obj.deposite_money();
		break;
		case 3:
		cout<<"3) withdraw money \n";
		obj.withdraw_money();
		break;
		case 4:
		cout<<"4) Display  Account \n";
		obj.Display_account();
		break;
		case 5:
			if(c==5)
			{
				exit(1);
			}
		default:
			cout<<"Invalid Input \n";
			cout<<"Please, try Agan ";
			break;
	}
	cout<<"\n do you want to select next option then press :: y \n";
	cout<<"if you want to exit then press :: N ";
	x=getch();
	if(x=='n'||x=='N')
	exit(0);
    }while(x=='y'|| x=='Y');

    getch();
	return 0;
	
}
