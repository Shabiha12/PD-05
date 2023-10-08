//PDlab3
//TASK1
#include<iostream>
using namespace std;
main(){
cout<<"Enter your name:  ";
string name;
cin>> name;
cout<<"Enter your roll number: ";
int roll_no;
cin>>roll_no;
cout<<"Enter your aggregate: ";
float  aggregate;
cin>>  aggregate;
cout<<"Enter your section: ";
char section;
cin>> section;
cout<<"Student Information: "<<endl;
cout<<"Name: "<<  name << endl;
cout<<"Roll Number: "<<  roll_no << endl;
cout<<"Aggregate: "<< aggregate << endl;
cout<<"Section: "<< section << endl;
}


//Task2
#include<iostream>
using namespace std;
main(){
cout<< "Enter the size in metabytes (MB)";
float mb;
cin>> mb;
float bit;
bit = mb * 1024 *1024 *8;
cout<<mb<< "MB is equivalent to " <<bit<<" bit.";
}
//Task3#include<iostream>
using namespace std;
main(){
cout <<  "Enter the weight in pounds:  ";
float  weight_1bs;
cin >> weight_kg ;
float weight_kg;
weight_kg   =  weight_1bs  *  0.45;
cout  <<  weight_1bs  <<  " pounds is equal to  "  <<  weight_kg  <<  "kilograms."  ;
}
//Task3
#include<iostream>
using namespace std;
main(){
cout<<  "Enter the length of the rectangle:  ";
int   length;
cin  >>  length;
cout <<  "Enter the width of the rectangle: ";
int  width;
cin >> width;
int  area;
area = length * width;
cout << "The area of the rectangle is:  " << area;
}
//Task4
#include<iostream>
using namespace std;
main(){
cout<<"Enter the charge";
int charge;
cin>>charge;
cout<<"Enter the time";
int time;
cin>>time;
int current;
current=charge/time;
cout<<"current is"<<current;
}
//task5
#include<iostream>
using namespace std;
main(){
cout<<"Enter voltage";
int voltage;
cin >>voltage;
cout<<"Enter current";
int current;
cin>>current;
int power;
power=voltage*current;
cout<<"power is "<<power;
}
//task6
#include<iostream>
using namespace std;
main(){
 float minutes;
minutes=60;
float secs;
secs=60;
cout<<"Enter the number of hours:";
int hours;
cin>>hours;
cout<<"hours is equivalent to ";
float seconds;
seconds=hours * minutes * secs;
cout<<seconds<<"seconds";
}
//Task7
#include<iostream>
using namespace std;
main(){
cout<<"Enter the current world population:" ;
int population;
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
int  bpm;
cin >> bpm;
float output;
output =population + (bpm *12 *10 *3);
cout<<" The population in three decades will be:";
cout<<output;
}
//Task8
#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team";
string team;
cin>>team;
cout<<"Enter the number of wins";
int wins;
cin>>wins;
cout<<"Enter the number of draws";
int draws;
cin>>draws;
cout<<"Enter the number of losses";
int losses;
cin>>losses;
float points;
points=(wins * 3)+(losses * 0)+(draws * 1);
cout<<team<<"has obtained"<<points<<"points in the Asia cup tournament"
}
//pdlab4
//Task9
#include<iostream>
using namespace std;
void calculateFuel(float distance);
 main()
{
cout << "Enter the distance: ";
float distance;
cin >> distance;
 calculateFuel(distance);
}
void calculateFuel(float distance)
{
int Fuel_needed;
Fuel_needed = 10 * distance;
cout << "Fuel needed:" <<Fuel_needed ;
}
//Task10
#include<iostream>
using namespace std;
void inchesToFeet(float Feet);
main()
{
cout << "Enter the measurement in inches: ";
float inches;
cin >> inches;
  inchesToFeet(inches);
}
void inchesToFeet(float Feet)
{
float output;
output = Feet / 12;
cout << "Equivalent in feet :" <<output;
}
//Task11
#include<iostream>
using namespace std;
void howManyStickers(int sticker);
main()
{
cout <<"Enter the side length of the Rubik's Cube: ";
int length;
cin >> length;
 howManyStickers(length);
}
void howManyStickers(int sticker)
{
int output;
output = sticker * 6 * sticker;
cout << "Number of stickers needed: " << output;
}
//Task12
#include<iostream>
using namespace std;
void addition(int n1, int n2);
void subtraction(int n1,int n2);
void multiplication(int n1,int n2);
void division(float n1,float n2);
main()
{
cout <<"Enter 1st number: ";
int n1;
cin >> n1;
cout <<"Enter 2nd number: ";
int n2;
cin >> n2;
cout <<"Enter an operator (+,-,*,/): ";
char op;
cin >> op;
if(op == '+')
 addition(n1,n2);
if(op == '-')
 subtraction(n1,n2);
if(op == '*')
multipication(n1,n2);
if(op == '/')
 division(n1,n2)
}
void addition(int n1,int n2)
{
int sum;
sum = n1 +n2;
cout <<"Addition" <<sum;
}
void subtraction(int n1,int n2)
{
int minus;
minus= n1-n2;
cout <<"subtraction" <<minus;
}
void multiplication(int a,int b)
{
int multiply;
multiplty =a*b;
cout <<"multipication" <<multiply;
}
void division(float a,float b)
{
float divide;
divide = a/b;
cout <<"Division" <<divide;
}
//Task13
#include<iostream>
using namespace std;
void vote(int a);
main(){
cout << "Enter your age: ";
int age;
cin >> age;
 vote(age);
}
void vote (int a)
{
int age;
 if (age>=18)
 cout << "You are eligible to vote.";
  else
 cout << "You are not eligible to vote.";
}
//Task14
#include<iostream>
using namespace std;
void PassorFail(int number);
main(){
cout <<" Enter your score: ";
int score;
cin >> score;
PassorFail(score);
}
void PassorFail(int number)
{
   if(number > 50)
   cout << "Pass"  ;
   else
   cout << "Fail" ;
}
//Task15
#include<iostream>
using namespace std;
void evenOrOdd(int a);
main(){
cout <<"Enter a number:";
int num;
cin >>num;
evenOrOdd(num);
}
void evenOrOdd(int a)
{
if (a%2==0)
 cout << "number"  <<  a   << "is even" ;
else
 cout <<"number" << a <<"is odd";
}
//Taskk16
#include<iostream>
using namespace std;
void calculatePayableAmount(string a,float b);
main(){
cout << "Enter the day of purchase :";
string day;
cin >> day;
cout << "Enter the total purchase amount: ";
int amount;
cin >> amount;
 calculatePayableAmount(day,amount);
}
void calculatePayableAmount(string a, float b)
{
 if (a =="Sunday")
     {b=b-(b*0.1);
  cout << "Payable Amount :   $"<<b;}
 else
cout<<"Payable Amount: $";
}
//Task17
#include<iostream>
using namespace std;
main(){
int number;
cout <<"Enter a five-digit number: ";
cin>>number;
if(number%2 ==1)
cout<<"Oddish";
if(number%2==0)
cout<<"Evenish";
}
//pdweek3
//Task18
#include<iostream>
using namespace std;
void IsEqual(int a,int b);
main()
{
 cout << "Enter the first number: ";
int num1;
cin >> num1;
cout <<"Enter the second number: ";
int num2;
cin >> num2;
    IsEqual (num1,num2);
}
void IsEqual (int a,int b)
{
int num;
if (a==b)
cout << "true";
else
cout <<"false";
}
//Task19
#include<iostream>
using namespace std;
void option(string a);
main()
{
  cout <<" Enter  'true'  or  'false' :";
  string reverse;
  cin >> reverse;
  option(reverse);
}
void option(string a)
{
if (a == "true")
cout <<"false";  
if (a == "false")
cout <<"true";
}
//Task20
#include<iostream>
using namespace std;
void finalprice(string name ,float price);
main()
{ 
cout <<" Enter the country's name:";
string name;
cin >> name;
cout << " Enter the ticket price in dollars $: ";
float price;
cin >> price;
finalprice(name , price);
}
void finalprice(string a , float b)
{
if ( a== "Pakistan")
{ b = b-(b*0.05);
cout << "Final ticket price after discount : $"<<b;}
if (a=="India")
{ b=b-(b*0.2);
cout <<"Final ticket price after discount : $"<<b;}
if (a=="Ireland")
{b = b-(b*0.1);
cout <<"Final ticket price after discount : $"<<b;}
if (a=="England")
{b=b-(b*0.3);
cout << " Final ticket price after discount :$"<<b;}
if (a =="Canada")
{b=b-(b*0.45);
cout << "Final ticket price after discount :$"<<b;}
}
//Task21
#include<iostream>
using namespace std;
void finalprice(string name ,float price);
main()
{ 
cout <<" Enter the country's name:";
string name;
cin >> name;
cout << " Enter the ticket price in dollars $: ";
float price;
cin >> price;
finalprice(name , price);
}
void finalprice(string a , float b)
{
if ( a== "Pakistan")
{ b = b-(b*0.05);
cout << "Final ticket price after discount : $"<<b;}
if (a=="India")
{ b=b-(b*0.2);
cout <<"Final ticket price after discount : $"<<b;}
if (a=="Ireland")
{b = b-(b*0.1);
cout <<"Final ticket price after discount : $"<<b;}
if (a=="England")
{b=b-(b*0.3);
cout << " Final ticket price after discount :$"<<b;}
if (a =="Canada")
{b=b-(b*0.45);
cout << "Final ticket price after discount :$"<<b;}
}
//Task22
#include<iostream>
using namespace std;
void checkSpeed(int a);
main()
{
cout << " Speed: ";
int speed;
cin >> speed;
 checkSpeed(speed);
}
void checkSpeed(int a)
{
if (a > 100 )
cout << "Halt...YOU WILL BE CHALLENGED ! ! !";
if (a < 100 )
cout << "Perfect ! You' re going good.";
} 
//Task23
#include<iostream>
using namespace std;
void possibleBonus(int a,int b);
main()
{
cout <<" Enter your position:";
int position1;
cin >> position1;
cout <<" Enter your friend' s position:";
int position2;
cin >>position2;
possibleBonus(position1,position2);
}
void possibleBonus(int a,int b)
{
if (a ==b-5 )
cout <<"true";
else
cout <<"false";
}
//Task24
#include<iostream>
using namespace std;
void longestTime(int a, int b);
main()
{
cout <<"Enter the number of hours: ";
int hours;
cin >> hours;
cout <<"Enter the number of minutes:";
int minutes;
cin >> minutes;
longestTime(hours ,minutes);
}
void longestTime(int a ,int b)
{
if (a * 60 > b)
{
cout <<a;
}
else
{
cout <<b;}
}
//Task25
#include<iostream>
using namespace std;
void longestTime(int a, int b);
main()
{
cout <<"Enter the number of hours: ";
int hours;
cin >> hours;
cout <<"Enter the number of minutes:";
int minutes;
cin >> minutes;
longestTime(hours ,minutes);
}
void longestTime(int a ,int b)
{
if (a * 60 > b)
{
cout <<a;
}
else
{
cout <<b;}
}
//Task26
#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip);
main()
{
cout <<"Red Rose:";
float red ;
cin >> red ;
cout <<" White Rose:";
float white;
cin >> white;
cout <<" Tulips:";
float tulips;
cin >> tulips;
flowerShop(red , white ,tulips);
}
void flowerShop(float redRose, float whiteRose, float tulip)
{ 
float originalPrice;
originalPrice = (redRose *2.00) + (whiteRose * 4.10)+(tulip * 2.50);
cout <<"Original Price: $" << originalPrice<<endl;
if(originalPrice > 200)
{    float discount;
discount = originalPrice - (originalPrice *0.2);
cout <<"Price after Disciunt: $" <<discount;}
else
cout <<"No discount applied.";
}
//Task27
#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip);
main()
{
cout <<"Red Rose:";
float red ;
cin >> red ;
cout <<" White Rose:";
float white;
cin >> white;
cout <<" Tulips:";
float tulips;
cin >> tulips;
flowerShop(red , white ,tulips);
}
void flowerShop(float redRose, float whiteRose, float tulip)
{ 
float originalPrice;
originalPrice = (redRose *2.00) + (whiteRose * 4.10)+(tulip * 2.50);
cout <<"Original Price: $" << originalPrice<<endl;
if(originalPrice > 200)
{    float discount;
discount = originalPrice - (originalPrice *0.2);
cout <<"Price after Disciunt: $" <<discount;}
else
cout <<"No discount applied.";
}
//Task28
#include<iostream>
using namespace std;
void pet(int holidays);
main(){
cout <<" Holidays:";
int holidays;
cin >> holidays;
pet( holidays);
}
void pet(int holidays)

    int workingDays = 365-holidays;
    int timeForGames =(workingDays*63)+(holidays*127);
    int difference=30000-timeForGames;
    int hours=(difference/60);
    int minutes=difference-(hours*60);
  if (difference > 0)
{
    cout <<" Tom sleeps well " <<endl;
    cout<<hours<<" hours and "<< minutes<<"minutes less for play";
}
else
{
   hours=(-1) * (hours);
   minutes= (-1) * minutes;
   cout <<"Tom will run away"<<endl;
   cout <<hours<<" hours and "<<minutes<<"minutes for play";
}
//Task29
#include<iostream>
using namespace std;
void pet(int holidays);
main(){
cout <<" Holidays:";
int holidays;
cin >> holidays;
pet( holidays);
}
void pet(int holidays)

    int workingDays = 365-holidays;
    int timeForGames =(workingDays*63)+(holidays*127);
    int difference=30000-timeForGames;
    int hours=(difference/60);
    int minutes=difference-(hours*60);
  if (difference > 0)
{
    cout <<" Tom sleeps well " <<endl;
    cout<<hours<<" hours and "<< minutes<<"minutes less for play";
}
else
{
   hours=(-1) * (hours);
   minutes= (-1) * minutes;
   cout <<"Tom will run away"<<endl;
   cout <<hours<<" hours and "<<minutes<<"minutes for play";
}
//Task30
#include<iostream>
using namespace std;
void pet(int holidays);
main(){
cout <<" Holidays:";
int holidays;
cin >> holidays;
pet( holidays);
}
void pet(int holidays)

    int workingDays = 365-holidays;
    int timeForGames =(workingDays*63)+(holidays*127);
    int difference=30000-timeForGames;
    int hours=(difference/60);
    int minutes=difference-(hours*60);
  if (difference > 0)
{
    cout <<" Tom sleeps well " <<endl;
    cout<<hours<<" hours and "<< minutes<<"minutes less for play";
}
else
{
   hours=(-1) * (hours);
   minutes= (-1) * minutes;
   cout <<"Tom will run away"<<endl;
   cout <<hours<<" hours and "<<minutes<<"minutes for play";
}
//Task31
#include<iostream>
using namespace std;
void pet(int holidays);
main(){
cout <<" Holidays:";
int holidays;
cin >> holidays;
pet( holidays);
}
void pet(int holidays)

    int workingDays = 365-holidays;
    int timeForGames =(workingDays*63)+(holidays*127);
    int difference=30000-timeForGames;
    int hours=(difference/60);
    int minutes=difference-(hours*60);
  if (difference > 0)
{
    cout <<" Tom sleeps well " <<endl;
    cout<<hours<<" hours and "<< minutes<<"minutes less for play";
}
else
{
   hours=(-1) * (hours);
   minutes= (-1) * minutes;
   cout <<"Tom will run away"<<endl;
   cout <<hours<<" hours and "<<minutes<<"minutes for play";
}
//Task32
#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
{ 
cout <<"Number of people in the household:";
int people;
cin >> people;
cout <<" Number of rolls of TP:";
int tp;
cin >> tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheets=tp*500;
 int sheetsPerDay=57*people;
 int days=sheets/sheetsPerDay ;
 if (days>=14)
 cout <<"Your TP will last"<< days <<"days, no need to panic!";
else
cout <<"Your TP will only last "<< days <<"days, buy more!";
}
//Task33
#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main()
{ 
cout <<"Number of people in the household:";
int people;
cin >> people;
cout <<" Number of rolls of TP:";
int tp;
cin >> tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheets=tp*500;
 int sheetsPerDay=57*people;
 int days=sheets/sheetsPerDay ;
 if (days>=14)
 cout <<"Your TP will last"<< days <<"days, no need to panic!";
else
cout <<"Your TP will only last "<< days <<"days, buy more!";
}
//Task34
#include<iostream>
using namespace std;
void calculate(int a,int b, int c,int d,int e);
main()
{ 
cout <<"Enter the number_1:";
int num1;
cin >> num1;
cout <<"Enter the number_2:";
int num2;
cin >>num2;
cout <<" Enter the number_3:";
int num3;
cin >>num3;
cout <<"Enter the number_4:";
int num4;
cin >>num4;
cout <<"Enter the number_5:";
int num5;
cin >>num5;
calculate(num1,num2,num3,num4,num5);
}
void calculate(int a,int b,int c,int d ,int e)
{
int num1,num2,num3,num4,num5;
int output;
output=(num1 + num2);
cout <<"output" <<output;
int output1;
output1=(num3 * num4); 
cout <<"output1"<<output1;
int output2;
output2 = num5 +output1 +output2;
cout <<"output2"<< output2 ;
}














 

 

