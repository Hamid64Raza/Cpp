#include<iostream>//practice questions..
using namespace std;
int main()
{
	int rollno,total,sub[3],i;
	float per;
	cout<<"Enter roll number";
	cin>>rollno;
	for(i=0;i<3;i++)
	{
	
	cout<<"Enter marks of subject\n"<<<i+1;
	cin>>sub[i];
	
	total=total+sub[i];
    }
    per=total/3;
    if(per>=90)
    {cout<<"A grade";}
     else if(per>=80)
	  {cout<<"B grade";}
	    else if(per>=70)
	    {
	   	cout<<"c grade";
		   }
	     else if(per>=60)
	    	{
	    		cout<<"D grade";
				}
	    	else if(per>=50)
	    		{
	    			cout<<"E grade";
					}
	    		else if(per>=40)
	    			{
	    				cout<<"F grade";
						}
	    			else
	    				{cout<<"fail";
						}
				
		
			
		return 0;
	  
	
	
	
}