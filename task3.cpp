#include<iostream>
void tax(char type,float price);
using namespace std;
main(){
cout<<"Enter the vehicle type code (M, E, V, T): ";
char type;
cin>>type;
cout<<"Enter the price of the vehicle: $";
float price;
cin>>price;
tax(type,price);
}
void tax(char type,float price)
{
float output;
output=price+(price*0.08);
cout<<"The final price of a vehicle of type " <<type << "after adding the tax is $"<<output;
} 