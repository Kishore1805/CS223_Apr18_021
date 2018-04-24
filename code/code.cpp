#include<iostream>
#include<vector>
#include"goods.h"
#include"database.h"
#include"Sys.h"
#include"store.h"
#include"supplier.h"
#include"payment_portal.h"
#include"customer.h"
using namespace std;
int a[50],b[50],c[50],d[50],e[50];
void initialize()
{
for(int z=0;z<50;z++)
	  {
	  	a[z]=-1;
	  	b[z]=-1;
	  	c[z]=-1;
	  	d[z]=-1;
	  	e[z]=-1;
	  }
}

int main()
{
    store str;
    supplier spp;
    payment_portal pp;
    database db;
    Sys sys;
    vector<goods>stock_register;
	int x=1,y=0;
	string k,l;
	char r='n';
	string u = "sss",p = "1234";
	string u1 ="ksk",p1="12345";
	customer c1(u,p,10000);
	customer c2(u1,p1,10000);
    stock_register.push_back(goods("Salt 1Kg",30,35));
    stock_register.push_back(goods("Red Chilli Powder 500gm",30,80));
    stock_register.push_back(goods("Cumin 100gm",50,25));
    stock_register.push_back(goods("Sugar 1Kg",40,45));
    stock_register.push_back(goods("Coffee Powder 250gm",50,100));
    stock_register.push_back(goods("Tea Powder 250gm",50,80));
    stock_register.push_back(goods("Cinnamon 100gm",50,30));
    stock_register.push_back(goods("Cloves 100gm",50,35));
    stock_register.push_back(goods("Cardomoms 100gm",50,40));
    stock_register.push_back(goods("Dry Ginger 100gm",50,35));
    stock_register.push_back(goods("Saffron 1gm",50,100));
    stock_register.push_back(goods("Turmeric powder 500gm",40,80));
    stock_register.push_back(goods("Bay Leaves 100gm",50,40));
    stock_register.push_back(goods("Butter 200gm",50,40));
    stock_register.push_back(goods("Ghee 500gm",40,250));
    stock_register.push_back(goods("Rusks",40,35));
    stock_register.push_back(goods("Surf Exel Detergent Powder 500gm",30,105));
    stock_register.push_back(goods("Dishwash Bar",50,30));
    stock_register.push_back(goods("Soap",50,40));
    stock_register.push_back(goods("Goundnut Oil 1litre",50,50));
    stock_register.push_back(goods("Olive Oil 500gm",40,300));
    stock_register.push_back(goods("Sunflower Oil 1litre",40,90));
    stock_register.push_back(goods("Hair Oil 500ml",50,75));
    stock_register.push_back(goods("Mustard Oil 500ml",40,120));
    stock_register.push_back(goods("Shampoo 150ml",40,120));
    stock_register.push_back(goods("Hair Dye",50,40));
    stock_register.push_back(goods("Face cream",50,70));
    stock_register.push_back(goods("Talcum powder",50,60));
    stock_register.push_back(goods("Face Powder",40,60));
    stock_register.push_back(goods("Nail polish",50,25));
    stock_register.push_back(goods("Sindur",50,20));
    stock_register.push_back(goods("Tooth Paste 150gm",40,90));
    stock_register.push_back(goods("Tooth brush",50,40));
    stock_register.push_back(goods("Shaving Cream 200gm",50,105));
    stock_register.push_back(goods("After Shave lotion 150gm",50,160));
    stock_register.push_back(goods("Deodrants",40,195));
    stock_register.push_back(goods("Cashew nuts 200gm",30,180));
    stock_register.push_back(goods("Almonds 200gm",30,190));
    stock_register.push_back(goods("Walnuts 200gm",30,250));
    stock_register.push_back(goods("Corn Flakes",40,120));
    stock_register.push_back(goods("Good day",50,10));
    stock_register.push_back(goods("Oreo",50,10));
    stock_register.push_back(goods("Lays",50,10));
    stock_register.push_back(goods("Kurkure",50,10));
    stock_register.push_back(goods("Dairy Milk",50,20));
        stock_register.push_back(goods("Milk Bread",40,30));
    stock_register.push_back(goods("Soft Drink",40,60));
    stock_register.push_back(goods("Ice cream",40,250));
    stock_register.push_back(goods("Wafers",50,150));
    stock_register.push_back(goods("Cakes",50,25));

   while(x==1)
	{
	    cout<<" 1. login"<<"\n";
     	cout<<" 2. quit"<<"\n";
	    cin>>x;
	    if(x==1)
        {
	    cout<<"enter your username"<<"\n";
		cin>>k;
		cout<<"enter your pasword"<<"\n";
		cin>>l;
		if(c1.login(k,l))
		{
		while(r=='n')
		   {
		       initialize();
		   for(int i=0;i<50;i++) {
        cout<<" "<<i+1<<". "<<stock_register[i].name<<"----- Rs"<<stock_register[i].price<<"  quantity available="<<stock_register[i].quantity<<"\n";
		   }
		   cout<<" 51"<<"  exit"<<"\n";
           cout<<" store balance = Rs"<<pp.show_balance()<<"\n";
           cout<<" customer balance = Rs"<<c1.show_balance()<<"\n";
			if(	c1.place_order(a,b))
		    {
				int q=pp.evaluate_price(a,b,stock_register,1);
				y=c1.make_payment(q);
				if(y==1)
			    {
				    	db.requested_goods(a,b,c,d,e,stock_register);
					    if(d[0]==-1)
				    	{
						   db.update_t_id(sys.generate_t_id(db.t_id));
						   sys.generate_bill(a,b,stock_register,db.t_id);
						   str.delivery_of_goods();
						   cout<<"do you want to logout y/n \n";
						   cin>>r;
					     }
					     else
					     {
					     	sys.order_goods(d,e,stock_register);
					     	spp.deliver_goods();
					     	db.update_t_id(sys.generate_t_id(db.t_id));
						    sys.generate_bill(a,b,stock_register,db.t_id);
						    str.delivery_of_goods();
						    cout<<"do you want to logout y/n \n";
						    cin>>r;
						    int m=pp.evaluate_price(d,e,stock_register,0);
                            pp.make_payment(m);
						 }
						 str.request_stock_update(a,b,c,d,e,stock_register);
						 pp.recieve_payment(q);
			    }
				else if(y==2)
				{
					 	continue;
				}
				else if(y==3)
				{
					int temp=0;
					cout<<"how much do you want to add \n";
					cin>>temp;
					c1.add_balance(temp);
				}
				else if(y==4)
				{
				      continue;
				}

			}
			else
			{
				break;
			}
		 }
	}

	 else if(c2.login(k,l))
      {
		while(r=='n')
		   {
		       initialize();
		   for(int i=0;i<50;i++) {
        cout<<" "<<i+1<<". "<<stock_register[i].name<<"----- Rs"<<stock_register[i].price<<"  quantity available="<<stock_register[i].quantity<<"\n";
		   }
		   cout<<" 51"<<"  exit"<<"\n";
           cout<<" store balance = Rs"<<pp.show_balance()<<"\n";
           cout<<" customer balance = Rs"<<c1.show_balance()<<"\n";
			if(	c2.place_order(a,b))
		    {
				int q=pp.evaluate_price(a,b,stock_register,1);
				y=c2.make_payment(q);
				if(y==1)
			    {
				    	db.requested_goods(a,b,c,d,e,stock_register);
					    if(d[0]==-1)
				    	{
						   db.update_t_id(sys.generate_t_id(db.t_id));
						   sys.generate_bill(a,b,stock_register,db.t_id);
						   str.delivery_of_goods();
						   cout<<"do you want to logout y/n \n";
						   cin>>r;
					     }
					     else
					     {
					     	sys.order_goods(d,e,stock_register);
					     	spp.deliver_goods();
					     	db.update_t_id(sys.generate_t_id(db.t_id));
						    sys.generate_bill(a,b,stock_register,db.t_id);
						    str.delivery_of_goods();
						    cout<<"do you want to logout y/n \n";
						    cin>>r;
						    int m=pp.evaluate_price(d,e,stock_register,0);
                            pp.make_payment(m);
						 }
						 str.request_stock_update(a,b,c,d,e,stock_register);
						 pp.recieve_payment(q);
			    }
				else if(y==2)
				{
					 	continue;
				}
				else if(y==3)
				{
					int temp=0;
					cout<<"how much do you want to add \n";
					cin>>temp;
					c2.add_balance(temp);
				}
				else if(y==4)
				{
				      continue;
				}

			}
			else
			{
				break;
			}
		 }
	}



		{
			cout<<"incorrect username and password"<<"\n";
			cout<<"1. retry \n";
			cout<<"2. quit \n";
			cin>>x;

		}
        }
        else break;
	}

	return 0;
}
