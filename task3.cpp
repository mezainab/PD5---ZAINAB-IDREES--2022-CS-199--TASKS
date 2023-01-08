#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

float finalPrice;
float taxAmount;
main()
{

char type;
float price;

cout<<"Enter the type of vehicle: ";
cin>>type;
cout<<"Enter the price of vehicle: ";
cin>>price;

finalPrice = taxCalculator(type, price);

cout<<"Final Price of vehicle: "<<finalPrice<<"   "<<"After adding tax of: "<<taxAmount<<endl;

}
float taxCalculator(char type, float price)
{

    if(type == 'M')
    {
        taxAmount = price * 0.06;
        finalPrice = price + taxAmount;
    }
    if(type == 'E')
    {
        taxAmount = price * 0.08;
        finalPrice = price + taxAmount;
    }
    if(type == 'S')
    {
        taxAmount = price * 0.1;
        finalPrice = price + taxAmount;
    }
    if(type == 'V')
    {
        taxAmount = price * 0.12;
        finalPrice = price + taxAmount;
    }
    if(type == 'T')
    {
        taxAmount = price * 0.15;
        finalPrice = price + taxAmount;
    }

    return finalPrice;
    
}