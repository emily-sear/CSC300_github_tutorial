#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char* argv[])
{
    //allocating 7 spots in memory for the char 
    //You can change that 7 to a smaller number... but you are building a boat house in your
    //neighbors yard -- this is bad programming practice 
    char* s = (char*)malloc(7 * sizeof(char));

    strcpy(s, "Hello");

    cout << s << endl;

    //these two print out the same thing 
    cout << s[4] << endl;
    cout << *(s + 4) << endl;

    //Java way of pointing stuff into a pointer
    s[5] = 'b';

    //pointer arthimetic -- the fancy way to do this 
    *(s+6) = 'c';
    *(s+7) = 'w';

    //you are basically building houses down the street, you did not allocate enough memory 
    //for this 
    *(s+13) = 'z';

    //this will keep you from getting to anything past bucket 8 when you print the string 
    *(s+8) = '\0';

    //this won't print out a "z" becuase of '/0' -- String termination 
    cout << s << endl;

    int a = 5; //type int 

    //pointing an & before a variable will give you the memory address 
    int* a_ptr = &a; //int pointer... capable of holding the memory address of a integer 
    int b = *a_ptr;
    int* b_ptr = &b;

    cout << a << endl;
    cout << a_ptr << endl;
    cout << b << endl;
    cout << b_ptr << endl;

    return 0;

}