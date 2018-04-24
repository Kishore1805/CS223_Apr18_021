#include<iostream>
#include<vector>
using namespace std;
class Sys
{
	public:
	void order_goods(int d[],int e[],vector<goods>& stock_register)
	{
	   for(int k=0;d[k]!=-1 && k<50;k++)
	   {
      	    cout<<"the order for goods which are out of stock is made \n";
			stock_register[d[k]].quantity=e[k]+50;
       }
	}
    int generate_t_id(int t)
	{
	 t++;
	 return t;
	 }
	void generate_bill(int a[],int b[],vector<goods>& stock_register,int t_id)
	{
		int total=0;
		cout<<"\n  ----  "<<t_id<<"  ---- \n";
		for(int i=0;a[i]!=-1&&i<50;i++)
		{
			cout<<i+1<<stock_register[a[i]].name<<" X "<<b[i]<<" ------- Rs"<<(stock_register[a[i]].price)*b[i]<<"\n";
			total=total+stock_register[a[i]].price*b[i];
		}
		cout<<"\n"<<"total ----- Rs "<<total<<"\n";

	}

};
