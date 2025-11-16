#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int choice;
	float a, b;
	do
	{
		cout<< "\n--------CALCULATOR--------" <<endl;
		cout<< "1. ADDITION" <<endl;
		cout<< "2. SUBTRACTION" <<endl;
		cout<< "3. MULTIPLY" <<endl;
		cout<<"4. DIVISION"<<endl;
		cout<<"5. EXIT" <<endl;
		cout<<"--------------------------" <<endl;
		cout<<"ENTER A CHOICE: ";
		cin>>choice;
		if(choice == 5)
		{
			cout <<"THANK YOU FOR USING CALCULATOR"<<endl;
			break;
		}
		
		if(choice>=1 && choice<=4)
		{
			cout<<"ENTER FIRST NUMBER: ";
			cin>>a;
			cout<<"ENTER SECOND NUMBER: ";
			cin>>b;
			
			cout<<fixed<<showpoint<<setprecision(2);
			
			if(choice == 1)
			{
				cout<<"RESULT: " <<a + b<<endl;
			}
			else if(choice == 2)
			{
				cout<<"RESULT: " <<a - b<<endl;
			}
			else if(choice == 3)
			{
				cout<<"RESULT: " <<a * b<<endl;
			}
			else if(choice == 4)
			{
				if(b == 0)
				{
					cout<< "ERROR: SECOND NUMBER CAN NOT BE ZERO" <<endl;
				}
				else
				{
					cout<<"RESULT: " <<a / b<<endl;
				}
			}
		}
		else
		{
			cout<<"ENTER A VALID CHOICE" <<endl;
		}
	} while(choice != 5);
	return 0;
}