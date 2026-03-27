#include <iostream>
using namespace std;


int main ()
{
    
   string a1 ="****************************";
   string a2 = "**HELLO IN THE POOR'S BANK**";
   string a3 = "****************************";
   string a4 = "Enter Your Process by Number";
   string a5 = "1- withdraw Money";
   string a6 = "2- Deposit Money";
   string a7 = "3- Balance inquiry";
   string a8 = "4- exit";
   
            cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl;
            cout<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl;
   int a;
   int with;
   int dep;
   with>=0;
   dep>=0;
   //a>=0;
   bool z =true ;
   int money =2000 ;
   cin>>a;
        if (a >=0 && a<=4)
        {
		
		
           cout<<"Enter Your procress again \n";
            while(z==true)
            {
                
             cin>>a;
             if (a==1)
             {
             cout<<"Your money balance are : "<<money<<endl;
             cout<<"Enter the money to withdraw them"<<endl;
             
             
                        cin>>with;
                        
                        if (money>with)
                        {
                money=money-with ;
             cout<<"success process:)\n"<<"Your balance is : "<<money<<endl<<endl;
                        }
                        else
                        {
                            cout<<"Your Money NOT enough :(\n"<<"TRY Again \n";
                        }
             
             cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl;
             
             
             }
                else if (a==2)
                {
             cout<<"Your Balance is : "<<money<<endl;
             cout<<"Enter Your money to deposit them\n"<<endl;
                        cin>>dep;
             money=dep+money ;
             cout<<"success process:)\n"<<"Your balance is : "<<money<<endl<<endl;
             cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl;
             
             
                }
                    else if (a==3)
                    {
             
             cout<<"Your Balance is : "<<money<<endl<<endl;
             
             cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl;
             
             
             
                    }
                        else if (a==4)
                        {
                    z=false ;
                        }
                            else
                            {
                                
                              cout<<"Wrong input:( \n"<<"Enter again \n";
                                
                                
                                
                        
			    }


	    		
            }

            
        }
        
        else
        {
           // cout<<a;
            cout<<"Wrong integer :(\n";
            cout<<"Restart Program and choose number between 0 to 4\n";
            
        
        }
                if (a==1 || a==2 || a==3 || a==4)
                {
                    
         cout<<"Thank you for using our Company ^_^";
         
                }
    
    
    
    
    return 0;
}	
