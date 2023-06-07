#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[20],city[500];
    long int phone;
	int room;
	cout<<"\t\t\t\t\t_____________________________ \n\n";
	cout<<"\t\t\t\t\t   HOTEL MANAGEMENT SYSTEM \n";
	cout<<"\t\t\t\t\t_____________________________ \n\n";
	cout<<"\nWELCOME TO OUR HOTEL.\n\nPress Any Key to Contiune our Services...\n\n";
	getch();
	cout<<"\n\n________________________________\n";
	cout<<"\n  Enter Your Personal Details ";
	cout<<"\n________________________________\n";
	cout<<"\nEnter Your Name -: ";
	cin>>name;
	cout<<"\nEnter Your City -: ";
	cin>>city;
	cout<<"\nEnter Your Phone Number -: ";
	cin>>phone;
	cout<<"\nPress Any Key to Continue....\n";
	getch();
	rs:		
	cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      ROOM SERVICE       ";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n>> Types of Rooms Available <<\n\n";
	cout<<"1.Non-AC       <Rs.1600/room>   <Enter '1' for Non-AC Rooms>\n2.AC Deluxe    <Rs.2500/room>   <Enter '2' for AC Deluxe Rooms>\n3.Luxury Suite <Rs.6500/room>   <Enter '3' for Luxury Suite>";
	cout<<"\n\nEnter the type of Room you want : ";
	cin>>room;
	int room_price;
	switch(room)
	{
		case 1:
			{
				room_price=1500;
				cout<<"\nNon-AC Room are Selected.\n\n";
				cout<<"Press Any Key to Continue....\n";
				getch();
				break;
			}
		case 2:
			{
				room_price=2500;
				cout<<"\nAC Deluxe Room are Selected.\n\n";
				cout<<"Press Any Key to Continue....\n";
				getch();
				break;
			}
		case 3:
			{
				room_price=6500;
				cout<<"\nLuxury Suite Room are Selected.\n\n";
				cout<<"Press Any Key to Continue....\n";
				getch();
				break;
			}
		default:{
			cout<<"\nWrong input.Please try again..\n ";
			goto rs;	
		}
			
	}
	int no_of_guest,no_of_room_loop,no_of_room=0;
	cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      ROOM SERVICE       ";
	cout<<"\n\t\t_________________________\n";
	cout<<"\nEnter the number of geust -> ";
	cin>>no_of_guest;
	no_of_room_loop=no_of_guest;
	while(no_of_room_loop>0)
	{
		no_of_room++;
		no_of_room_loop=no_of_room_loop-6;
	}
	cout<<"\nNumber of Rooms Allotted -> "<<no_of_room;
	cout<<"\n\nPress Any Key to Continue....\n";
	getch();
	
	cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      ROOM SERVICE       ";
	cout<<"\n\t\t_________________________\n";
    int no_of_days;
    cout<<"\nEnter the number of days you want to stay -> ";
    cin>>no_of_days;
    cout<<"\n\nPress Any Key to Continue...\n";
    getch();
    int type_of_breakfast,food_price;
    char breakfast;
    cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      BREAKFAST SERVICE    ";
	cout<<"\n\t\t_________________________\n";
	cout<<"\nDo You Want to Breakfast Service. \n (Enter 'Y' For Yes || Enter 'N' For No)->  ";
	cin>>breakfast;
	b_check:
	switch(breakfast)
	{
		case 'Y':
		case 'y':
			{
				break;
			}
		case 'N':
		case 'n':{
			goto bfast_out;
			break;
		}
		default:
			{
				cout<<"\nWrong input. Please Try Again.\n";
				cin>>breakfast;
				goto b_check;
				break;
			}
	}
	cout<<"\n\nPress Any Key to Continue...\n";
	getch();
	cout<<"\n\nSelect the type of cuisine you prefer : ";
	cout<<"\n1.Indian Cuisine  <Rs.180/person> <Enter '1' for Indian Cuisine>";
	cout<<"\n2.Mexican Cuisine <Rs.210/person> <Enter '2' for Mexican Cuisine>";
	cout<<"\n3.Chinese Cuisine <Rs.250/person> <Enter '3' for Chinese Cuisine>";
	cout<<"\n4.Italian Cuisine <Rs.280/person> <Enter '4' for Italian Cuisine>\n";
	cin>>type_of_breakfast;
	type:
    switch(type_of_breakfast)
    {
    	case 1:
    		{
    			food_price=180;
    			cout<<"\nIndian Cuisine Selected.\n";
    			break;
    		}
    	case 2:
    		{
    			food_price=210;
    			cout<<"\nMexican Cuisine Selected\n";
    			break;
    		}
    	case 3:
    		{
    			food_price=250;
    			cout<<"\nChinese Cuisine Selected\n";
    			break;
    		}
    	case 4:
    		{
    			food_price=280;
    			cout<<"\nItalian Cuisine Selected\n";
    			break;
    		}
    	default:
    		{
    			cout<<"\nWrong Input.Please Try Again.\n";
                goto type;
				break;    	
			}
    }
    
    bfast_out:
    cout<<"\n\nPress Any Key to Continue..\n";
    getch();
    
    char trans;
    cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t     TRANSPORT SERVICE    ";
	cout<<"\n\t\t_________________________\n";
    cout<<"\nDo You Want to Transport Service. \n (Enter 'Y' For Yes || Enter 'N' For No)->  ";
	cin>>trans;
	switch(trans)
	{
		case 'Y':
		case'y':{
			
			break;
		}
		case 'N':
		case 'n':{
			goto trans_out;
			break;
		}
	}
	cout<<"\n\nPress Any Key to Continue.\n";
	getch();
	int type_of_trans;
	cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t     TRANSPORT SERVICE    ";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\nSelect the type of transport service : ";
	cout<<"\n1.Non-AC Taxi <Rs.9/km>   	<Enter '1' for Non-AC Taxi>";
	cout<<"\n2.AC Taxi     <Rs.13/km>  	<Enter '2' for AC Taxi>";
	cout<<"\n3.Non-AC Bus  <Rs.17/km>  	<Enter '3' for Non-AC Bus>";
	cout<<"\n4.AC Bus      <Rs.20/km>  	<Enter '4' for AC Bus>\n\n";
	cin>>type_of_trans;
	t_select:
	switch(type_of_trans)
	{
		case 1:{
			cout<<"\nNon-AC Taxi Service Selected.\n";
			break;
		}
		case 2:{
			cout<<"\nAC Taxi Service Selected.\n";
			break;
		}
		case 3:{
			cout<<"\nNon-AC Bus Service Selected\n.";
			break;
		}
		case 4:{
			cout<<"\nAC-Bus Service Selected.\n";
			break;
		}
		default:{
			cout<<"Wrong Input.Please Try Again.\n";
			cin>>type_of_trans;
			goto t_select;
		}
	}
	trans_out:
	cout<<"\n\nPress Any Key to Continue.\n";
	getch();
    
	cout<<"\n\n   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      TOUR PACKAGES    ";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n1.'North East India'    City:Darjeeling, Gangtok, Guwahati\n   Price:Rs.8,500 (Per Person)    Duration: 6Days/5Nights";
	cout<<"\n\n2.'South India'    City:Bangalore, Mysore, Ooty\n   Price:10,999 (Per Person)    Duration: 5Days/4Nights";
	cout<<"\n\n3.'Rajasthan'    City:Jodhpur, Jaisalmair, Jaipur\n   Price:6,999 (Per Person)    Duration: 4Days/3Nights";
	cout<<"\n\n4.'Himachal'    City:Manali, Shimla, Chandigarh\n   Price:7,999 (Per Person)    Duration: 5Days/4Nights";
	char tour;
	int tour_price=0;
	cout<<"\n\nDo you want our tour packages . (Enter: 'Y' for Yes | 'N' for No) -> ";
	cin>>tour;
	tour_check:
	switch(tour)
	{
		case 'Y':
		case 'y':{
					break;
				 }
		case 'N':
		case 'n':{
					goto tour_out;
					break;
				 }
		default:{
					cout<<"\nWrong Input. Please Enter Again :\n";
					cin>>tour;
					goto tour_check;
					break;
				}
	}
    
    cout<<"   * * * * * *  WELCOME TO  PARADISE HOTEL * * * * * *\n";
	cout<<"\n\t\t_________________________\n";
	cout<<"\n\t\t      TOUR PACKAGES    ";
	cout<<"\n\t\t_________________________\n";	
	cout<<"\n1.'North East India'    City:Darjeeling, Gangtok, Guwahati\n   Price:Rs.9,499 (Per Person)    Duration: 6Days/5Nights";
	cout<<"\n\n2.'South India'    City:Bangalore, Mysore, Ooty\n   Price:10,999 (Per Person)    Duration: 5Days/4Nights";
	cout<<"\n\n3.'Rajasthan'    City:Jodhpur, Jaisalmair, Jaipur\n   Price:8,999 (Per Person)    Duration: 4Days/3Nights";
	cout<<"\n\n4.'Himachal'    City:Manali, Shimla, Chandigarh\n   Price:6,999 (Per Person)    Duration: 5Days/4Nights";
	int type_of_tour;
	cout<<"\n\nEnter the tour package you want : ";
	cin>>type_of_tour;

	tour_type_check:
	switch(type_of_tour)
	{
		case 1 :{
					tour_price=9499;
					cout<<"\nNorth East India Tour Package Selected";
					break;
				}
		case 2 :{
					tour_price=10999;
				    cout<<"\nSouth India Tour Package Selected";
					break;
				}
		case 3 :{
					tour_price=8999;
					cout<<"\nRajasthan Tour Package Selected";
					break;
				}
		case 4 :{
					tour_price=6999;
					cout<<"\nHimachal Tour Package Selected";
					break;
				}
		default:{
					cout<<"\nWrong Input. Please Enter Again :\n";
					cin>>type_of_tour;
					goto tour_type_check;
					break;
				}
	}


	tour_out:
	cout<<"\n\nPress Any Key to Continue..\n\n";
	getch();

    int room_amt,bfast_amt=0,total_amt;
    cout<<"\t\t\t******************************************\n\n";
    cout<<"\t\t\t\t            BILL     \n\n";
    cout<<"\t\t\t*******************************************\n";
	if(breakfast=='y' || breakfast=='Y')
    {
    		bfast_amt=food_price*no_of_days*no_of_guest;
	}
	room_amt=room_price*no_of_days*no_of_room;
	total_amt=room_amt+bfast_amt+tour_price;
    cout<<"\n------------------------------------------------------------";
	cout<<"\nCustomer Name     : "<<name;
	cout<<"\nAddress           : "<<city;
	cout<<"\nContact No.       : "<<phone;
	cout<<"\nNumber of Guests  : "<<no_of_guest;
	cout<<"\nNumber of Days    : "<<no_of_days;
	cout<<"\nNumber of Rooms   : "<<no_of_room;
	cout<<"\nPrice of Room/s   : (As per No. of Days and Rooms)Rs "<<room_amt;
    cout<<"\n------------------------------------------------------------";
	cout<<"\nTotal amount to be Paid :                         Rs "<<total_amt<<"/-";
	cout<<"\n\nThank You for Staying Here.\n\n";
	getch();
}


