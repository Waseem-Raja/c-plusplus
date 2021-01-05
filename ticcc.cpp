#include<iostream>
using namespace std;

int tic[3][3];

int setvalue(int z)
{
    int y=z;

    switch (y)
    {
    case 1:
               cout<<"enter your value";
               cin>>tic[0][0];
               cout<<"location 1 is completed"<<endl;
        break;
    case 2:
               cout<<"enter your value";
               cin>>tic[0][1];
               cout<<"location 2nd is completed"<<endl;
        break;
    case 3:
               cout<<"enter your value";
               cin>>tic[0][2];
               cout<<"location 3rd is completed"<<endl;
        break;
    case 4:
               cout<<"enter your value";
               cin>>tic[2][0];
               cout<<"location 4th is completed"<<endl;
        break;
    case 5:
               cout<<"enter your value";
               cin>>tic[2][1];
               cout<<"location 5th is completed"<<endl;
        break;
    case 6:
               cout<<"enter your value";
               cin>>tic[2][2];
               cout<<"location 6th is completed"<<endl;
        break;
    case 7:
               cout<<"enter your value";
               cin>>tic[3][0];
               cout<<"location 7th is completed"<<endl;
        break;
    case 8:
               cout<<"enter your value";
               cin>>tic[3][1];
               cout<<"location 8th is completed"<<endl;
        break;
    case 9:
               cout<<"enter your value";
               cin>>tic[3][2];
               cout<<"location 9th is completed"<<endl;
        break;
    
    default:
        break;
    }

}
int check()
{
        if ((tic[0][0]==1&&tic[0][1]==1)&&(tic[0][2]==1))
        {
                    cout<<"player ist wins";  
					return 1;
        }
        else if ((tic[0][0]==2&&tic[0][1]==2)&&(tic[0][2]==2))
        {
            cout<<"player 2nd wins";
			return 1;
        }
        else if((tic[2][0]==1&&tic[2][1]==1)&&(tic[2][2]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
            
        else if((tic[2][0]==2&&tic[2][1]==2)&&(tic[2][2]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        else if((tic[3][0]==1&&tic[3][1]==1)&&(tic[3][2]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
            
        else if((tic[3][0]==2&&tic[3][1]==2)&&(tic[3][2]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        else if((tic[0][0]==1&&tic[2][0]==1)&&(tic[3][0]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
            
        else if((tic[0][0]==2&&tic[2][0]==2)&&(tic[3][0]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        else if((tic[0][1]==1&&tic[2][1]==1)&&(tic[3][1]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
        
        
        else if((tic[0][1]==2&&tic[2][1]==2)&&(tic[3][1]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        else if((tic[0][2]==1&&tic[2][2]==1)&&(tic[3][2]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
        
        else if((tic[0][2]==2&&tic[2][2]==2)&&(tic[3][2]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        else if((tic[0][0]==1&&tic[2][1]==1)&&(tic[3][2]==1))
        {
                    cout<<"player ist wins";
					return 1;
            
        }
        
        else if((tic[0][0]==2&&tic[2][1]==2)&&(tic[3][2]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        else if((tic[0][2]==1&&tic[2][1]==1)&&(tic[3][0]==1))
        {
                    cout<<"player ist wins"<<endl;
					return 1;
            
        }
        
        
        else if((tic[0][2]==2&&tic[2][1]==2)&&(tic[3][0]==2))
        {
                    cout<<"player 2nd wins";
					return 1;
            
        }
        
        return 0;

}













int main()
{
   cout<<"|1|2|3|"<<endl;
   cout<<"|4|5|6|"<<endl;
   cout<<"|7|8|9|"<<endl;
   cout<<"player 1 =1 and player 2=2"<<endl;
   int playerWon = 0 ;
   int x = 0;
   while(1){
        
       //check();
       cout<<"Please Enter the location for player 1:"<<endl;
       cin>>x;
       setvalue(x);
       if (check()){
		    playerWon = 1;
			break;
	   }
       cout<<"please enter the location number player 2:"<<endl;
       cin>>x;
       setvalue(x);
       if(check()){
		   playerWon = 2;
		break;
	   }
       

       
   }
   
  
   return 0;
   

}