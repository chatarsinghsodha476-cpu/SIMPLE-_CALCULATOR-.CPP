#include<iostream>
using namespace std;
int main()
{
	char cont='y';
	while(cont=='y' || cont=='n'){

	double num1,num2;
	int choice;
	cout<<"==================="<<endl;
	cout<<"SIMPLE CALCULATOR "<<endl;
	cout<<"==================="<<endl;
	
	cout<<"<---Menu--->"<<endl;
	cout<<"1.Addition:"<<endl;
	cout<<"2.Subtraction:"<<endl;
	cout<<"3.Multiplication:"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Maximum of two numbers :"<<endl;
	cout<<"6.Exit:"<<endl;
	cout<<"Enter the two numbers :"<<endl;
	cin>>num1>>num2;
	cout<<"Enter your(1-6) choice :"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"The sum is ="<<num1+num2<<endl;
			break;
			case 2:
				cout<<"The subtraction is="<<num1-num2<<endl;
				break;
				case 3:
					cout<<"The multiplication is="<<num1*num2<<endl;
					break;
					case 4:
						if(num2!=0)
						cout<<"Division is="<<num1/num2<<endl;
						else
						cout<<"Error! division by zero is not possible : "<<endl;
						break;
						case 5:
							if(num1>num2)
							cout<<"maximum number is: "<<num1<<endl;
							else
							cout<<"maximum number is: "<<num2<<endl;
							break;
						      	case 6:
						      		cout<<"Thanks for using our system:"<<endl;
							       	break;
								default:
									cout<<"Invalid choice!please enter the number between 1 and 6:";
	}
	cout<<" Do you want to continue? (n/y):"<<endl;
	cin>>cont;
	if(cont!='y'&& cont!='Y' && cont!='n' && cont!='N')
	cout<<"Error!invalid options:"<<endl;
}
	cout<<"Thanks! for using our calculator:";
	return 0;
}
