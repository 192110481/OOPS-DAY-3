#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int i,j,n,r;
	public :
		T4Tutorials (int one)
		{
			for(i=1 ; i<=one ; i++)
			{
				for(j=1 ; j<=i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
		}
		T4Tutorials (int one,int two)
		{
			for(i=1 ; i<=one ; i++)
			{
				for(j=1 ; j<=i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			cout<<"\n\n\n2nd Pattern is given below\n\n";
			{
				for(i=1 ; i<=two ; i++)
				{
					for(j=1 ; j<=i ; j++)
					{
						cout<<i;
					}
					cout<<endl;
				}
			}
		}
};
int main()
{
	int option; 
	cout<<"Enter 1 of Single parameter T4Tutorialsor \n";
	cout<<"\nEnter 2 For Multiple Paramter constucor \n";
	cout<<"\nEnter 1 or 2 : ";
	cin>>option;
	system("cls");	//this function is to clear the screen
	if(option ==1)
	{
		cout<<"\t\t\t-------You Have Slected Single Paramater";
		cout<<"T4Tutorialsor-------\n\n";
		int one;
		cout<<"Enter number of rows : ";
		cin>>one;
		T4Tutorials a(one);
	}
	else if(option==2)
	{
		cout<<"\t\t\t-------You Have slected Multiple Paramater ";
		cout<<"T4Tutorialsor-------\n\n";
		int two,three;
		cout<<"Enter First number of rows : ";
		cin>>two;
		cout<<"\nEnter Second number of rows: ";
		cin>>three;
		T4Tutorials a(two, three);
	}
	else
	{
		cout<<"Your Input in Wrong try Agin \n\n\n";
	}
}
