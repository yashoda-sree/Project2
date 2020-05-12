#include<iostream>
#include<cstring>
using namespace std;
int k=0,bill=0;
int order_t=0;
int order_s=0;
int order(string a)
{
	int code;
	cout<<"\nenter item code : ";
	cin>>code;
	if(code==100)
	{
		int t,q;
		cout<<"enter 1 for small samosa , enter 2 for big samosa : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\nsmall samosa\n";
			cout<<"\nplease enter quantity \n ";
			cin>>q;
			k+=q;
			bill=bill+q*15;
		}
		else
		{
			cout<<"\nbig samosa\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*15;
		}
		
	}
	if(code==101)
	{
		int q;
		cout<<"\none glass tea\n";
		cout<<"\nplease enter quantity\n";
		cin>>q;
		k+=q;
		bill=bill+q*10;	
	}
	if(code==102)
	{
		int t,q;
		cout<<"enter 1 for one puff , enter 2 for two puffs : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\none corn puff\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*20;
		}
		else
		{
			cout<<"\ntwo corn puffs\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*35;
		}
		
	}
	if(code==103)
	{
		int t,q;
		cout<<"enter 1 for two bread omlettes , enter 2 for four bread omlettes : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\ntwo bread omlettes\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*40;
		}
		else
		{
			cout<<"\nfour bread omlettes\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*60;
		}
		
	}
	if(code==104)
	{
		int t,q;
		cout<<"enter 1 for single plate , enter 2 for double plate: ";
		cin>>t;
		if(t==1)
		{
			cout<<"\nsingle plate noodles\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*50;
		}
		else
		{
			cout<<"\ndouble plate noodles\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*90;
		}
		
	}
	if(code==105)
	{
		int q;
		cout<<"\nsingle plate\n";
		cout<<"\nplease enter quantity\n";
		cin>>q;
		k+=q;
		bill=bill+q*30;
	}
	if(code==106)
	{
		int t,q;
		cout<<"enter 1 for small , enter 2 for medium , enter 3 for big : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\nsmall size veg pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*60;
		}
		else if(t==2)
		{
			cout<<"\nmedium size veg pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*120;
		}
		else
		{
			cout<<"\nbig size veg pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*180;
		
		}
		
	}
	if(code==107)
	{
		int t,q;
		cout<<"enter 1 for small , enter 2 for medium , enter 3 for big : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\nsmall size chicken pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			bill=bill+q*70;
			k+=q;
		}
		else if(t==2)
		{
			cout<<"\nmedium size chicken pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*130;
		}
		else
		{
			cout<<"\nbig size chicken pizza\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*190;
		}
		
	}
	if(code==108)
	{
		int q;
			cout<<"\nburger";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*40;
	}
	if(code==109)
	{
		int q;
			cout<<"\none cup coffee\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*12;	
	}
	if(code==110)
	{
		int t,q;
		cout<<"enter 1 for 100ml coke , enter 2 for 250ml coke : ";
		cin>>t;
		if(t==1)
		{
			cout<<"\n100ml coke\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*20;
		}
		else
		{
			cout<<"\n250ml coke\n";
			cout<<"\nplease enter quantity\n";
			cin>>q;
			k+=q;
			bill=bill+q*40;
		}
		
	}
	return 0;
}
int anything(string a)
{
	char d;
	cout<<"do you want anything else ? (y/n)"<<endl;
	cin>>d;
	if(d=='y')
	order(a);
	else
	{
		cout<<"\nnumber of items ordered : "<<k<<endl;
		k=0;
		cout<<"thank you "<<a<<" for your day . Your bill is  "<<bill<<endl;
		bill=0;
		return 0;
	}
	anything(a);
}
int main()
{
	cout<<"--------------------------------WELCOME TO RK CAFE----------------------------------------------------------\n";
	int ch,i=0,j=0;
	string a[1000];
	do
	{
		cout<<"1.order\n2.serve\n3.display\n4.quit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{	
				order_t++;
				int n;
				char d;
				cout<<"please enter yor name"<<endl;
				cin>>a[i];
				cout<<"\n--------------------------MENU----------------------------------------"<<endl;
				cout<<"ITEM CODE----DESCRIPTION----------SIZE---------------------PRICE(RUPEES)"<<endl;
				cout<<"100----------SAMOSA---------------SMALL(3)/BIG(1)----------15/15\n";
				cout<<"101----------TEA------------------ONE GLASS----------------10\n";
				cout<<"102----------CORN PUFF------------ONE/TWO------------------20/35\n";
				cout<<"103----------BREAD OMLETTE--------TWO/FOUR-----------------40/60\n";
				cout<<"104----------NOODLES--------------SINGLE/DOUBLE------------50/90\n";
				cout<<"105----------PASTA----------------PLATE--------------------30\n";
				cout<<"106----------VEG PIZZA------------SMALL/MEDIUM/BIG---------60/120/180\n";
				cout<<"107----------CHICKEN PIZZA--------SMALL/MEDIUM/BIG---------70/130/180\n";
				cout<<"108----------CHICKEN BURGER-------1------------------------40\n";
				cout<<"109----------COFFEE---------------1------------------------12\n";
				cout<<"110----------COKE-----------------100ml/250ml--------------20/40\n";
				cout<<"how many items you want to order"<<endl;
				cin>>n;
				while(n--)
				order(a[i]);
				anything(a[i]);
				i++;
				break;
			}
			case 2:{
				if(j<i)
				{
					cout<<"order number "<<order_s+1<<" by "<<a[j]<<" is ready.\nENJOY YOUR MEAL :)\n\n";
					order_s++;
					j++;
				}
				else
				{
					cout<<"no orders to be served"<<endl;
				}
				break;
			}
			case 3:{
				cout<<"total number of orders taken : "<<order_t<<endl;
				cout<<"total number of orders served : "<<order_s<<endl;
				cout<<"number of orders currently waiting to be served : "<<order_t-order_s<<endl;
				if(order_t-order_s==0)
				cout<<"no order is currently being prepared now"<<endl;
				else
				cout<<"order number "<<order_s+1<<" is being prepared now\n";
				break;
			}
			case 4:{
				return 0;
			}
		}
	}while(ch!=4);
	return 0;
}

