
#include <iostream>
using namespace std;
int main()
{
    int marks;
    int charecter;
    cout << "enter the marks:";
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "you achieved grade A+";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "you achieved grade b";
    }else if (marks >= 70 && marks < 80)
    {
        cout << "you achieved grade c";
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "you achieved grade d";
    }
    else if (marks >= 0 && marks < 60)
    {
        cout << "you achieved grade ff \n";
    }
  
    //practice question
    cout << "enter the charecter which want to check wether it is lowecase or uppercase:";// here we can ascii valuse also 
    cin >> charecter;
    if (charecter >= 'a' && charecter <= 'z')
    {
        cout << "the charecter is lowercase";
    }
    else if (charecter >= 'A' && charecter <= 'Z')
    {
        cout << "the charecter is uppercase";
    }
    return 0;
}
