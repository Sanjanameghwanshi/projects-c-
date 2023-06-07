#include<iostream>
#include<conio.h>
using namespace std;
char number[20]={'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
	int i,n,player=1;
	char mark;
	do
	{
		board();
		player=(player%2) ? 1:2;
		cout<<"Player"<<player<<" Enter a number: ";
		cin>>n;
		mark=(player==1) ? 'X':'O';
		if(n==1 && number[1]=='1')
		number[1]=mark;
		else if(n==2 && number[2]=='2')
		number[2]=mark;
		else if(n==3 && number[3]=='3')
		number[3]=mark;
		else if(n==4 && number[4]=='4')
		number[4]=mark;
		else if(n==5 && number[5]=='5')
		number[5]=mark;
		else if(n==6 && number[6]=='6')
		number[6]=mark;
		else if(n==7 && number[7]=='7')
		number[7]=mark;
		else if(n==8 && number[8]=='8')
		number[8]=mark;
		else if(n==9 && number[9]=='9')
		number[9]=mark;
		else
		{
			cout<<"Invalid Move.\n";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}
	while(i==-1);
	board();
	if(i==1)
	{
		cout<<"Player "<<--player <<" is winner.";
	}
	else
	{
		cout<<"Draw Game.\n";
	}
}
void board()
{
	cout<<"\t\t     |        |    \n";
    cout<<"\t\t"<<number[1]<<"    |  "<<number[2]<<"     |  "<<number[3]<<endl;
	cout<<"\t\t     |        |    \n";
	cout<<"\t\t--------------------\n";
	cout<<"\t\t     |        |    \n";
    cout<<"\t\t"<<number[4]<<"    |  "<<number[5]<<"     |  "<<number[6]<<endl;
	cout<<"\t\t     |        |    \n";
	cout<<"\t\t--------------------\n";
	cout<<"\t\t     |        |    \n";
    cout<<"\t\t"<<number[7]<<"    |  "<<number[8]<<"     |  "<<number[9]<<endl;
	cout<<"\t\t     |        |    \n";

}
int checkwin()
{
  if(number[1]==number[2] && number[2]==number[3])
  return 1;	
  else if(number[4]==number[5] && number[5]==number[6])
  return 1;
  else if(number[7]==number[8] && number[8]==number[9])
  return 1;
  else if(number[1]==number[4] && number[4]==number[7])
  return 1;
  else if(number[2]==number[5] && number[5]==number[8])
  return 1;
  else if(number[3]==number[6] && number[6]==number[9])
  return 1;
  else if(number[1]==number[5] && number[5]==number[9])
  return 1;
  else if(number[3]==number[5] && number[5]==number[7])
  return 1;
  else if( number[1]!='1' && number[2]!='2' && number[3]!='3'
  && number[4]!='4'&& number[5]!='5'&& number[6]!='6'&& number[7]!='7'
  && number[8]!='8'&& number[9]!='9')
  return 0;
  else   return -1;
}
