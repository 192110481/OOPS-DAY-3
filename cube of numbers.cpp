#include<iostream>
#include<conio.h>
using namespace std;
class name
{
	private:
		int i,n;
		public:
			name()
	        {
	        	i=1;
	        	n=0;
	        }
	        name(int p, int q)
	        {
	        	i=p;
	        	n=q;
			}
			void display()
			{
				cout<<"enter the number :"<<endl;
				cin>>n;
				for(i=1; i<=n; i++)
				{
							cout<<" The cube of"<<i<<"is ="<<(i*i*i)<<endl;
					
				}
			}
			~name()
			{
				cout<<" clear :"<<endl;
			}
		};
int main()
   {
   	int p,q;
	name obj(p,q);
	obj.display();
	getch();
}
