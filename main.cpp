#include <iostream>
#include <string.h>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;	


struct staia
	{
		int number;
		int type;
		bool isfree;
		int price;
	};
	
void room_create(staia rooms[],int broi_stai)
{
	for(int i;i<broi_stai;++i)
	{
		cout<<"Enter room number";
		cin>>rooms[i].number;
		
		cout<<"Please enter room type(0,1,2)";
		cin>>rooms[i].type;
		
		cout<<"Please eneter are the room is free:(No-1;Yes-0)";
		cin>>rooms[i].isfree; 
		
		cout<<"Please enter price:";
		cin>>rooms[i].price;
		cout<<endl;
    }
    
}

void output_room(staia rooms[],int broi_stai)
{	
    for (int i = 0; i< broi_stai; ++i) 
	{
		cout<< "Room Number"<<" "<< rooms[i].number<<endl;
	    cout<< "Rooms type:"<<" ";
	    // Convert vid to string
        if (rooms[i].type == 0) {
            cout << "one room";
        } else if (rooms[i].type == 1) {
            cout << "two room";
        } else if (rooms[i].type == 2) {
            cout << "apartament";
        }
        cout << endl;
        
	    cout<< "Is free"<<" "<<(rooms[i].isfree ? "No" : "Yes")<<endl;/*If is true the room is free but if it is false it is not free*/
	    cout<< "Price"<<" "<<rooms[i].price << endl;
	    cout<<"    "<<endl;
	    
    }

}
void free_room(staia rooms[],int broi_stai,int room_to_check)
{
	for(int i = 0; i < broi_stai; ++i) 
	{
        if(rooms[i].number == room_to_check) {
            cout << "Room with number: " << rooms[i].number << " is " << (rooms[i].isfree ? "occupied" : "free") << endl;
            return;
        }
    }
    cout << "Room with number:" << room_to_check << " do not find." << endl;
}

int main(int argc, char** argv) {
    staia rooms[3];
    int broi_stai;
    cout<<"Enter number of rooms:";
    cin>>broi_stai;
    
    cout<<"Please enter rooms information:"<<endl;
    room_create(rooms,broi_stai);
    
    cout<<"Output Information about the rooms:"<<endl;
    output_room(rooms,broi_stai);
	
	int room_to_check;
	cout<<"Enter room number for check:";
	cin>>room_to_check;
	free_room(rooms,broi_stai,room_to_check);
	
	return 0;
}
