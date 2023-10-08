#include<iostream>
#include<cmath>
void projectTimeCalculation(int hours,int days,int number);
using namespace std;
main(){
cout<<"Enter the needed hours: ";
int needed_hours;
cin>>needed_hours;
cout<<"Enter the days that the film has: ";
int days;
cin>>days;
cout<<"Enter the number of all workers: ";
int number;
cin>>number;
projectTimeCalculation(needed_hours,days,number);
}
void projectTimeCalculation(int hours,int days,int number)
{
int time = 9*days*number;
int needed_hours = time - hours;
if(needed_hours < 0)
{
cout<<"Not enough time! " <<abs(needed_hours)  << " hours needed.";
}
if(needed_hours > 0)
{
cout <<"Yes!" <<abs(needed_hours) <<" hours left.";
}
}