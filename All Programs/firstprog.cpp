#include<iostream>
using namespace std;
int main()
{
	int a; int output;
	cout<<"Enter option:1(square),2(cube),3(4times)"<<endl;
	cin>>a;
		switch(a)
		{ case 1: cout<<"enter number";
		          int s; cin>>s;
		          output=s*s;
		          cout<<output;break;
		  case 2: cout<<"enter number";
		          cin>>s;
		          output=s*s*s;
		          cout<<output;break;
		  case 3: cout<<"enter number";
		          cin>>s;
		          output=s*s*s*s;
		          cout<<output;break;
		  default:cout<<"Wrong Option!";break;	          
		}
	return 0;	
}

