# include <iostream>
using namespace std;
int main(){
	
	int n1,n2;
	cout<<"Enter two value here :";
	cin>>n1>>n2;
	char op;
	cin>>op;
	switch(op)
	{
	case '+':
		cout<<"sum :"<<n1+n2;
		break;
		case '-':
		cout<<"subtraction :"<<n1-n2;
		break;
		case '*':
		cout<<"multiply :"<<n1*n2;
		break;
		case'/':
		cout<<"division :"<<n1/n2;
		break;
		
     
		
		 
		
	}
	
	return 0;
}
