#include<iostream>
#include<vector>
using namespace std;
class store
{
public:
    void delivery_of_goods()
    {
    	cout<<"goods will be delivered to you shortly \n";
	}
	void request_stock_update(int a[],int b[],int c[],int d[],int e[],vector<goods>& stock_register)
{


		for(int i=0;a[i]!=-1&&i<2;i++)
            {

      for(int k=0;k<b[i];k++){
      stock_register[a[i]].remove_good() ;
      }
      }
	  for(int j=0;j<50;j++)

	  {
	  	a[j]=-1;
	  	b[j]=-1;
	  	c[j]=-1;
	  	d[j]=-1;
	  	e[j]=-1;
	  }

	}

};
