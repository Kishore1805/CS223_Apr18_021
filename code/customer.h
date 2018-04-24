#include<iostream>
using namespace std;
class customer
{
    string username;
	string password;
	int balance;
	public:
    customer(string u,string p,int b)
	{
		username=u;
		password=p;
		balance=b;
	}
	bool login(string s1, string s2)
	{
		if(username==s1&&password==s2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void add_balance(int k)
	{
		balance=balance+k;
	}
    bool place_order(int a[],int b[])
	{

	    char k='y';
	    int j=0;
	    int m=0,n=0;
	    while(k=='y'&&j<50)
		{
		    cout<<"enter the number corresponding to the good you want to purchase \n";
		    cin>>m;
		    if(m==51)
		    {
		    	return false;
			}
		    a[j]=m-1;
		    cout<<"enter the number of above mentioned good you want to purchase \n";
		    cin>>n;
		    b[j]=n;
		    cout<<"do you want to continue shoping y/n \n";
		    cin>>k;
			j++;
    	}
    	return true;

	}
	int make_payment(int a)
	{
		char k='y';
		if(balance>=a)
		{
		   cout<<"the amount to be paid is "<<a<<" your current balance is "<<balance<<"\n";
		   cout<<"do you want to make payment y/n \n";
		   cin>>k;
		   if(k=='y')
		   {
		   	balance-=a;
		   	return 1;
		   }
		   else
		   {
		   	return 2;
		   }
	    }
	    else
	    {
	    	cout<<"you need "<<a-balance<<" more to make payment \n";
	    	cout<<"do you want to add balance y/n \n";
	    	cin>>k;
	    	if(k=='y')
	    	{
	    		return 3;
			}
			else
			{
			    return 4;

			}
		}
	}
	int show_balance()
	{

	    return balance;
	}

};
