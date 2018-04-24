#include<iostream>
using namespace std;
class goods
{
    public:
	string name;
	int quantity;
	int price;
    goods(string k = "sss" ,int a = 0,int b = 0)
	{
	    name = k;
		quantity=a;
		price=b;
	}

	void add_good()
	{
		quantity++;
	}
	void remove_good()
	{
	    if(quantity<1)
            cout<<"Invalid\n";
        else
            quantity--;
	}
};
