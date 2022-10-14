#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int n, i, num1,num2,num3,j;
	public :
		~T4Tutorials()
		{
			num1=1,num2=1,num3=0;
			cout<<"Input  a positive integer: ";
			cin>>n;
			  for(i=3; i<=n/2; i++)
		     {     
				/*check for prime number?*/
		      num1=1;
		      num2=1;
		      for(j=2; j<i; j++)
		       {     
		         if(i%j==0)
		           { num1=0;j=i;}
		        }
		      for(j=2; j<n-i; j++)
		       {     
		         if((n-i)%j==0)
		           { num2=0;j=n-i;}
		        }
		         if(num1==1 && num2==1)
		           { printf("%d =  %d + %d  \n",n,i,n-i); 
		           num3=1;}
		    }
         if(num3==0)
           {
				cout<<"\n%d can not be expressed as sum of two prime numbers.\n\n";
			}
		}
};
int main()
{
	T4Tutorials a;
}
