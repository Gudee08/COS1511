#include <iostream>
using namespace std;
class Marks
{
private:
int marks[100];
int num;
public:
void getNumber()
{
cout<<"Enter the number of students.";
cin>>num;
}
void StudentMarks()
{
for(int i=0;i<num;i++)
{
cout<<"Enter marks for student "<<i+1<<": ";
cin>>marks[i];
}
}
int maximumMark()
{
int max=marks[0];
for(int i=1;i<num;i++)
{
if(marks[i]>max)
{
max=marks [i];
}
}
return max;
}
int minimumMark()
{
int min=marks[0];
for(int i=1;i<num;i++)
{
if(marks[i]<min)
{
min=marks[i];
}
}
return min;
}
double average()
{
int sum=0;
for(int i=0;i<num;i++)
{
sum=sum+marks[i];
}
return static_cast<double>(sum)/num;
}
//Overloaded function
void display()
{
cout<<"Maximum Mark is "<<maximumMark()<<endl;
}
//Overloaded function
void display(int x)
{
cout<<"Maximum mark is "<<maximumMark()<<endl;
cout<<"Minimum mark is "<<minimumMark()<<endl;
cout<<"Average mark is "<<average()<<endl;
}
};
int main()
{
Marks test;
test.getNumber();
test.StudentMarks();
cout<<"Basic Report"<<endl;
test.display();
cout<<"Detailed Report";
test.display(1);
return 0;
}
