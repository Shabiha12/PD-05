#include<iostream>
using namespace std;
void pyramidVolume(float length,float width,float height,string centimeters);
void pyramidVolume(float length,float width,float height,string kilometers);
void pyramidVolume(float length,float width,float height,string meters);
main(){
cout<<"Enter the length of the pyramid (in meters): ";
float length;
cin>>length;
cout<<"Enter the width of the pyramid (in meters): ";
float width;
cin>>width;
cout<<"Enter the height of the pyramid (in meters): ";
float height;
cin>>height;
cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
string output;
cin>>output;
pyramidVolume(length,width,height,output);
}
void pyramidVolume(float length,float width,float height,string meters)
{
float output1;
output1=(length*width*height)/3;
cout<<"The volume of the pyramid is:" <<output1 <<" cubic meters";
}
