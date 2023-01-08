#include <iostream>
#include <cmath>
using namespace std;

float finishProject(int neededHours, int daysFirmhas, int noOfWorkers);

int neededHours, daysFirmhas, noOfWorkers;
float hoursLeft, additionalHours , totalWorkingHours, EachWorkerWorks, workingDays, trainingDays, project;
main()
{

cout<<"Enter needed hours: ";
cin>>neededHours;
cout<<"Enter days that the firm has: ";
cin>>daysFirmhas;
cout<<"Enter no of workers: ";
cin>>noOfWorkers;

int result = finishProject(neededHours, daysFirmhas, noOfWorkers);
}
float finishProject(int neededHours, int days, int noOfWorkers)
{
trainingDays = daysFirmhas*0.1;
workingDays = daysFirmhas - trainingDays;
EachWorkerWorks = workingDays*10;
totalWorkingHours = EachWorkerWorks*noOfWorkers;
hoursLeft = totalWorkingHours - neededHours;
additionalHours = neededHours-totalWorkingHours;

int result;
if(totalWorkingHours > neededHours)
{
    cout<<"Yes"<<hoursLeft<<" "<<"Hours are left!"<<endl;
}
if(totalWorkingHours < neededHours)
{
    cout<<"No"<<additionalHours <<" "<<"Are needed!"<<endl;
}

return result;
}