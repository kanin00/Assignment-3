#include <iostream>

using namespace std;

int main()
{
 double score;
 cout<<"Welcome to the UG grading program.";
 cin.get();
 cout<<"Please enter your score: ";
 cin>>score;
 cout<<endl;
if(cin.fail()==false)
{
    if(80<=score && score<=100)
{
    cout<<"Letter Grade: A"<<endl;
    cout<<"Grade Point: 4.0"<<endl;
    cout<<"Interpretation: Outstanding."<<endl;
}
else
{
    if(75<=score && score<=79)
    {
        cout<<"Letter Grade: B+"<<endl;
        cout<<"Grade Point: 3.5"<<endl;
        cout<<"Interpretation: Very Good."<<endl;
    }
else
{
    if(70<=score && score<=74)
    {
       cout<<"Letter Grade: B"<<endl;
        cout<<"Grade Point: 3.0"<<endl;
        cout<<"Interpretation: Good."<<endl;
    }
else
{
    if(65<=score && score<=69)
    {
         cout<<"Letter Grade: C+"<<endl;
        cout<<"Grade Point: 2.5"<<endl;
        cout<<"Interpretation: Fairly Good."<<endl;
    }
else
{
    if(60<=score && score<=64)
    {  cout<<"Letter Grade: C"<<endl;
        cout<<"Grade Point: 2.0"<<endl;
        cout<<"Interpretation: Average."<<endl;
    }
else
{
    if(55<=score && score<=59)
    {
       cout<<"Letter Grade: D+"<<endl;
        cout<<"Grade Point: 1.5"<<endl;
        cout<<"Interpretation: Below Average."<<endl;
    }
else
{
    if(50<=score && score<=54)
    {
          cout<<"Letter Grade: D"<<endl;
        cout<<"Grade Point: 1.0"<<endl;
        cout<<"Interpretation: Marginal Pass"<<endl;
    }
else
{
    if(45<=score && score<=49)
    {
          cout<<"Letter Grade: E"<<endl;
        cout<<"Grade Point: 0.5"<<endl;
        cout<<"Interpretation: Unsatisfactory."<<endl;
    }
else{
    if(0<=score && score<=44)
{
      cout<<"Letter Grade: F"<<endl;
        cout<<"Grade Point: 0"<<endl;
        cout<<"Interpretation: Fail."<<endl;
}
}

}
}
}
}
}
}
}
}
else
{
    cout<<"You entered an invalid number."<<endl;
}
}
