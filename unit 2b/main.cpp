#include <iostream> // having conio.h and iostream.h 
#include "add.cpp" 
#include "sub.cpp" 
#include "get.cpp" 

using namespace std;
#define MY_NAME "Aaron"
 
int main() 
{  
    cout << "Enter two numbers" << '\n';
    int one = GetNums();
    int two = GetNums();

    cout << "My name is " << MY_NAME << '\n';
    cout << sum(one,two) << '\n'; 
    cout << sub(one,two) << '\n'; 
    return 0;
}
