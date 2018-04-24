#include<iostream>
#include<vector>
using namespace std;
class payment_portal
{
    int store_balance;

	public:

	payment_portal(int p=15000)
	{
		store_balance=p;
	}
	void recieve_payment(int k)
	{
		store_balance+=k;
	}
	void make_payment(int k)
	{
		store_balance-=k;
	}
	int evaluate_price(int a[],int b[],vector<goods>& stock_register,bool l)
	{  if(l)
	{
	    int total=0;
	    for(int i=0;a[i]!=-1&&i<50;i++){

	    total=total+stock_register[a[i]].price*b[i];
	    }
	    return total;
	}
	else{
        int total=0;
	    for(int i=0;a[i]!=-1&&i<50;i++){

	    total=total+(stock_register[a[i]].price*b[i]*0.9);
	    }
	    return total;
	}
	}
	int show_balance()
	{
	    return store_balance;
	}
};
