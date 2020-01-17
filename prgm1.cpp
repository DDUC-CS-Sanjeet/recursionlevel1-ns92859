/*
  	By : Neeraj Sharma
   	Roll no. : 19HCS4037
   	Description : My first prgm of Discrete to find gcd,factorial,print fibbonacci series,to find 'm' to the power 'n'
   					with and without recursion
*/
#include<iostream>
using namespace std;
int Rgcd(int a,int b)
{
	
	if(b==0)
	{
		return a;
	}
	else
	{
		return Rgcd(b,a%b);
	}
}
int gcd(int a,int b)
{
	if(a<b)
	{
		int var=a;
		a=b;
		b=a;
	}
	if(a<0||b<0)
	{
		throw a;
	}
	int temp=1;
	while(b!=0)
	{
		temp=a;
		a=b;
		b=a%temp;
	}
	return temp;
}
int Rfact(int no)
{
	
	if(no==1)
	{
		return 1;
	}
	else
	{
		return no*Rfact(no-1);
	}
}
int fact(int no)
{
	if(no<0)
	{
		cout<<"An ERROR has occured....";
			throw no;
	}
	if(no==0)
	{
		return 1;
	}
	else
	{
		int temp=1;
		for(int i=1;i<=no;i++)
		{
			temp=temp*i;
		}
		return temp;
	}
}
int Rfibo(int fno,int var1,int var2)
{
	cout<<var1<<" ";
	if(fno==1)
	{
		return (var1+var2);
	}
	else
	{
		return Rfibo(fno-1,var2,var1+var2);
	}
}
void fibo(int fno)
{
	double d=0;
	if(fno<=0)
				{
					cout<<"An ERROR has occured....";
					throw fno;
				}
			if(fno==1)
			{
				throw "Hello user ";
			}
			if(fno==2)
			{
				throw d;
			}
			cout<<"Your Fibbonacci Series without using recursion is : "<<0<<" "<<1<<" ";
			if(fno>1)
				{
					int var1=0,var2=1,var3;
					for(int i=1;i<fno-1;i++)
					{
						var3=var1+var2;
						var1=var2;
						var2=var3;
						cout<<var3<<" ";
					}
				}
		return;
}
int Rexpo(int bse,int pow)
{
	if(pow==1)
	{
		return bse;
	}
	else
	{
		return bse*Rexpo(bse,pow-1);
	}
}
void expo(int bse1,int pow1)
{
	int proxy=1,cpy=1;
	double oli=0;
		if(bse1==0&&pow1==0)
			{
				cout<<"An ERROR has occured....";
				throw bse1;	
			}
			if(bse1<0)
			{
				throw bse1;
			}
			if(pow1==0)
			{
				throw 'H';
			}
			
			if(pow1>0)
			{  
				for(int i=1;i<=pow1;i++)
				{
					proxy=proxy*bse1;
				}
					cout<<bse1<<" raise to the power "<<pow1<<" is : "<<proxy;	
			}
			else
			{
				pow1=-(pow1);
				for(int i=1;i<=pow1;i++)
				{
					proxy=proxy*bse1;
				}
					cout<<bse1<<" raise to the power "<<"-"<<pow1<<" is : "<<1<<"/"<<proxy;	
			
			}
}
int main()
{
	cout<<"\n                                        Welcome to GCD recursion\n\n\n";
	int num1,num2;
	cout<<"Enter two numbers to find their gcd : ";
	cin>>num1>>num2;
	// Exception check
		try 
		{
			if(num1<0||num2<0)
			{
				cout<<"An ERROR has occured....";
				throw num1;
			}
			
			int hcf=Rgcd(num1,num2);	
			cout<<"Your GCD with recursion is : "<<hcf<<"\n";
		}
		catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(\n";
		}
		
	cout<<"\n                                       Welcome to GCD without recursion\n\n\n";
	cout<<"Enter two numbers to find their gcd : ";
	cin>>num1>>num2;
	// Exception check
		try 
		{
			int hcf=gcd(num1,num2);	
			cout<<"Your GCD without recursion is : "<<hcf<<"\n";
		}
		catch(int e)
		{
			cout<<"An ERROR has occured....";
			cout<<"\n\n OOps you have given an incorrect input....  :(\n";
		}
	cout<<"_______________________________________________GCD__Prgms__Complete____________________________________________________";
	// GCD prgms complete
	cout<<"\n\n                                     Welcome to Factorial with Recursion\n\n\n";
	int fct;
	cout<<"Enter a number to find it's factorial : ";
	cin>>fct;
	// Exception check
		try 
		{
			if(fct<0)
			{
				cout<<"An ERROR has occured....";
				throw fct;
			}
			if(fct==0)
			{
				cout<<"Hello_user your factorial of "<<fct<<" using recursion is : "<<1;
			}
			else
			{
				int ans=Rfact(fct);
				cout<<"Your Factorial of "<<fct<<" using recursion is : "<<ans<<"\n";
			}
		}
		catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(";
		}
		
	cout<<"\n                                     Welcome to factorial without Recursion\n\n\n";
	int fctnum;
	cout<<"Enter a no. to find it's factorial : ";
	cin>>fctnum;
		try 
		{
			int ans=fact(fctnum);
			cout<<"Your Factorial of "<<fctnum<<" without using recursion is : "<<ans<<"\n";	
		}
		catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(\n";
		}
	cout<<"\n\n_______________________________________________Factorial__Prgms__Complete_________________________________________________";
	// Factorial prgms complete
	cout<<"\n                                       Welcome to Fibbonacci using recursion\n\n\n";
	int rfno;
	cout<<"Enter how many no.'s you want to print in your Fibbonacci series : ";
	cin>>rfno;
	try 
		{
			if(rfno<=0)
				{
					cout<<"An ERROR has occured....";
					throw rfno;
				}	
			int var1=0,var2=1;
			cout<<"Your Fibbinacci series using recursion is : ";
			Rfibo(rfno,var1,var2);
		}
	catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(\n";
		}
	cout<<"\n\n                                       Welcome to Fibbonacci without using recursion\n\n\n";
	int fno;
	cout<<"Enter how many no.'s you want to print in your Fibbonacci series : ";
	cin>>fno;
	try 
		{
				fibo(fno);
		}
	catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(";
		}
	catch(const char* c1)
	{
		cout<<"Your Fibbonacci Series without using recursion is : "<<0<<"\n";
	}
	catch(double c2)
	{
		cout<<"Your Fibbonacci Series without using recursion is : "<<0<<" "<<1<<"\n";
	}
	cout<<"\n\n_____________________________________________Fibbonacci__Prgms__Complete_________________________________________________";
	// Fibbonacci prgms complete
	cout<<"\n\n                                          Welcome To exponents without using Recursion\n\n\n";
	int bse1,pow1;
	char H;
	int proxy=1;
	cout<<"Enter the base and it's power : ";
	cin>>bse1>>pow1;
	try 
		{
	
			expo(bse1,pow1);
		}
		catch(int e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(";
		}
		catch(char c)
		{
			cout<<c<<" "<<bse1<<" raise to the power "<<pow1<<" is : "<<1;
		}  
		
	cout<<"\n                                       Welcome to exponents using Recursion\n\n\n";
	int bse2,pow2;
	int cpypow2;
	char E;
	int finalans;
	double priyanshu;
	float flt=0;
	cout<<"Enter the base and it's power : ";
	cin>>bse2>>pow2;
	cpypow2=pow2;
	try 
		{
			if(bse2==0&&pow2==0)
			{
				cout<<"An ERROR has occured....";
				throw flt;	
			}
			if(bse2<0)
			{
				throw flt;
			}
			if(pow2==0)
			{
				throw 'E';
			}
			
			if(pow2<0)
			{
				pow2=-pow2;
				int rcvans=Rexpo(bse2,pow2);
				finalans=rcvans;
			}
			
			else
			{ 
				int rcvans=Rexpo(bse2,pow2);
				finalans=rcvans;
				cout<<bse2<<" raise to the power "<<pow2<<" is : "<<rcvans;
				
			}
			if(cpypow2<0)
			{
				cout<<bse2<<" raise to the power "<<pow2<<" is : "<<1<<"/"<<finalans;
			}
			else
			{
				cout<<bse2<<" raise to the power "<<pow2<<" is : "<<finalans;
			}
		}
	catch(float e)
		{
			cout<<"\n\n OOps you have given an incorrect input....  :(";
		}
	catch(char c)
		{
			cout<<bse2<<" raise to the power "<<pow2<<" is : "<<1;
		}   
	
		cout<<"\n\n_______________________________________________Exponents__Prgms__Complete____________________________________________________";
	// Exponents prgms complete
	return 0;
}

