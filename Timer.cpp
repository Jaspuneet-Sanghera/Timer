// C++ program to create a timer
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include<unistd.h>
using namespace std;

// hours minutes seconds for timer
int hours=0;
int minutes=0;
int seconds=0;

//function to display timer
void displayClock()
{
system("clear");
cout<< setfill(' ')<< setw(40)<<"TIMER \n";
cout<< setfill(' ')<<setw(50)<<"------------------------------\n";
cout<< setfill(' ')<< '\n';
cout<<setfill(' ')<<setw(20)<<" | "<< setfill('0')<<setw(2)<<hours<<"hrs |";
cout<<" | "<< setfill('0')<< setw(2)<<minutes<<"min |";
cout<<" | "<< setfill('0')<<setw(2)<<seconds<<"sec |"<< endl;
cout<<setfill( ' ')<<setw(50)<<"--------------------------------\n";

}
// function to create timer
void timer()
{
while(true){
displayClock();
sleep(1);
seconds++;
if(seconds== 60)
{
minutes++;
if(minutes== 60){
hours++;
minutes=0;

}
seconds=0;
}
}


}

int main(){

timer();
}