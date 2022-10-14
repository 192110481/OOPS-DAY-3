/* binary to octal conversion with Constructor.*/
#include<iostream>
using namespace std;
class T4Tutorials
{
	private :
		int i,j,dn;
		int temp,T4Tutorials_Octal;
	public :
		//for constrtcor function name is same as class name
		T4Tutorials()
		{
			cout<<"Program for decimal to octal "<<endl;
			cout<<"conversion with Constructor.."<<endl;
			cout<<"Enter the Decimal Number : "<<endl;
			cin>>dn;
			temp=dn;
			i=1;
			for(j=dn ; j>0 ; j=j/8)
			{
				T4Tutorials_Octal=T4Tutorials_Octal+(j%8)*i;
				i=i*10;
			}
			cout<<"Your Input Decimal is :"<<temp;
			cout<<"Octal Value After conversion is : "<<T4Tutorials_Octal<<endl;
		}
};
int main()
{
	T4Tutorials a;
}
