#include <iostream>
#include <cmath>
using namespace std;
int main(){

	double r;
	int b;
	cout<<"\t___Calculator___\n";
start :
	cout<<"1) Add\n";
	cout<<"2) Sub\n";
	cout<<"3) Mul\n";
	cout<<"4) Div\n";
	cout<<"5) Rem\n";
	cout<<"6) Exp\n";
	cout<<"7) Sin\n";
	cout<<"8) Cos\n";
	cout<<"9) Tan\n";
	cout<<"10) Cosec\n";
	cout<<"11) Sec\n";
	cout<<"12) Cot\n";
	cout<<"Select from the menu > ";int a;cin>>a;
	switch(a){
	
		case 1:
			cout<<"Enter no 1: ";cin>>a;
			cout<<"\nEnter no 2: ";cin>>b;
			r = a+b;
			cout<<r<<endl;
			break;	
		case 2:
			cout<<"Enter no 1: ";cin>>a;
			cout<<"\nEnter no 2: ";cin>>b;
			r = a-b;
			cout<<r<<endl;
			break;
		case 3:
			cout<<"Enter no 1: ";cin>>a;
                        cout<<"\nEnter no 2: ";cin>>b;
			r = a*b;
			cout<<r<<endl;
			break;
		case 4:
			cout<<"Enter no 1: ";cin>>a;
                        cout<<"\nEnter no 2: ";cin>>b;
			r = a/b;
			cout<<r<<endl;
			break;
		case 5:
			cout<<"Enter no 1: ";cin>>a;
                        cout<<"\nEnter no 2: ";cin>>b;
			r = a%b;
			cout<<r<<endl;
			break;
		case 6:
			cout<<"Enter the base: ";cin>>a;
                        cout<<"\nEnter the power: ";cin>>b;
			r = pow(a,b);
			cout<<r<<endl;
			break;
		case 7:
			cout<<"Enter the number: ";cin>>a;
                        r = sin(a);
			cout<<"\n"<<r<<endl;
			break;
		case 8:
			cout<<"Enter the number: ";cin>>a;
			r = cos(a);
			cout<<"\n"<<r<<endl;
			break;
		case 9:
			cout<<"Enter the number: ";cin>>a;
                        r = tan(a);
                        cout<<"\n"<<r<<endl;
                        break;
		case 10:
			cout<<"Enter the number: ";cin>>a;
                        r = 1/sin(a);
                        cout<<"\n"<<r<<endl;
                        break;
		case 11:
			cout<<"Enter the number: ";cin>>a;
                        r = 1/cos(a);
                        cout<<"\n"<<r<<endl;
                        break;
	
		case 12:
			cout<<"Enter the number: ";cin>>a;
                        r = 1/tan(a);
                        cout<<"\n"<<r<<endl;
                        break;
		default:
			cout<<"Wrong index, try again\n";
			goto start;
	}
cout<<"Exit? (yes/no)=(1/0): ";cin>>a;
if (a == 0)
	goto start;
else
	cout<<"Exiting...\n";


return 0;
}
