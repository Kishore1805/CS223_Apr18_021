#include<iostream>
#include<vector>
using namespace std;
class database
{
    public:
	int t_id;

	database()
	{
		t_id=100;
	}
	void requested_goods(int a[],int b[],int c[],int d[],int e[],vector<goods>& stock_register)
	{
	    int j=0,k=0;
		for(int i=0;a[i]!=-1&&i<50;i++)
		{

	       if(stock_register[a[i]].quantity>=b[i])
	       {
	       	  c[j]=a[i];
	       	  j++;
		   }
		   else
		   {
		   	  d[k]=a[i];
		   	  e[k]=b[i];
              k++;
		   }
		}
	}
	void update_t_id(int t)
	{
	    t_id=t;
	}
};
