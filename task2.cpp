#include <iostream>
using namespace std;

float paramid(float length, float width, float height, string unit );
float volumeOfParamid;
main()
{
float length, width, height;
string unit;

cout<<"Enter your length: ";
cin>>length;
cout<<"Enter your width: ";
cin>>width;
cout<<"Enter your height: ";
cin>>height;
cout<<"Enter the unit: ";
cin>>unit;

float volumeOfParamid = paramid(length, width, height, unit );
cout<<"Volume of paramid : "<<volumeOfParamid<<endl;

}
float paramid(float length, float width, float height, string unit )
{

    if(unit == "centimeters")
    {
        volumeOfParamid = ((length * width * height)/3)*1000000;
    }
    if(unit == "kilometers")
    {
        volumeOfParamid = ((length * width * height)/3)/1000000000;
    }
    if(unit == "millimeters")
    {
        volumeOfParamid = ((length * width * height)/3)*1000000000;
    }
    return volumeOfParamid;
}







