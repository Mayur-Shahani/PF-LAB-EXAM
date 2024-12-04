#include<iostream>
using namespace std;

int main()
{
	double income, expense, balance;
	int choice;
	do{
		cout <<"1. INCOME "<< endl;
		cout <<"2.  EXPENSE /n"<< endl;
		cout <<"3.  BALANCE /n"<<endl;
		cout <<"1. EXIT /n"<<endl;
		switch(choice){
			case 1:
				cin >> income;
				cout <<"Your Income is:  " << income;
				break;
			case 2:
			    cin >> expense;
				cout <<"YOUR EXPENSE IS :" << expense;
				break;	
		    case 3:
			    cout << "your balance is " << income - expense << endl;
			    break;
			case 4:
			    cout << "EXIT "    ;
			    break;
			default:
			    cout <<" INVALID INPUT ";
				break;
			}   
			if(income < 0)
			{
				cout << "ENTER POSITIVE NUMBER";
			 } 
			if(expense > income)
			{
				cout <<"INSUFFICIENT BALANCE FOR THIS EXPENSE";
			}
			choice++;
    }while(balance != 0);
}
