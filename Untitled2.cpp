//Brute Forcing
#include<iostream>
using namespace std;

int main()
{
	//Taking password from user
	string password;
	cout<<"Enter your password(lowercase only): "<<endl;//user has to enter one alphabet only bcoz this program will only check first character
	cin>>password;
	
	char target= password[0];//checking character
	int attempts=0;//counting attempts
	
	bool cracked= false;
	
	cout<<"Brute Forcing..."<<endl;
	
	for( char ch= 'a'; ch <='z'; ch++)
	{
		attempts++;
		
		if(ch== target)
		{
			cracked= true;
			break;
		}
	}
	
	if(cracked== true)
	{
	cout<<"Password Cracked!"<<endl;
	cout<<"Your Password was:"<<target<<endl;
    }
    else
	{
    cout<<"Password not Cracked!"<<endl;
	}
	cout<<"Attempts: "<<attempts<<endl;
	
	return 0;
}
