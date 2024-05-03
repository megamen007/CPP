// The const variable cannot be left un-initialized at the time of the assignment.
// It cannot be assigned value anywhere in the program.
// Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.

// const int var ---> error 

// const int vr; ---> error 
// var = 5;

// const int var = 5 ; ---> correct


//Const Keyword With Pointer Variables:
// Pointers can be declared with a const keyword. 
// So, there are three possible ways to use a const keyword with a pointer, which are as follows:

// When the pointer variable point to a const value .
// C++ program to demonstrate the
// above concept
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
//     int x{ 10 };
//     char y{ 'M' };

//     const int* i = &x;
//     const char* j = &y;

//     // Value of x and y can be altered,
//     // they are not constant variables
//     x = 9;
//     y = 'A';

//     // Change of constant values because,
//     // i and j are pointing to const-int
//     // & const-char type value
//     // *i = 6;
//     // *j = 7;

//     cout << *i << " " << *j;
// }



// When the const pointer variable point to the value .
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
//     // x and z non-const var
//     int x = 5;
//     int z = 6;

//     // y and p non-const var
//     char y = 'A';
//     char p = 'C';

//     // const pointer(i) pointing
//     // to the var x's location
//     int* const i = &x;

//     // const pointer(j) pointing
//     // to the var y's location
//     char* const j = &y;

//     // The values that is stored at the memory location can
//     // modified even if we modify it through the pointer
//     // itself No CTE error
//     *i = 10;
//     *j = 'D';
//     cout << *i << " and " << *j << endl;
//     cout << i << " and " << j;

//     return 0;
// }


// When const pointer pointing to a const variable
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
//     int x{ 9 };

//     const int* const i = &x;

//     // *i=10;
//     // The above statement will give CTE
//     // Once Ptr(*i) value is
//     // assigned, later it can't
//     // be modified(Error)

//     char y{ 'A' };

//     const char* const j = &y;

//     // *j='B';
//     // The above statement will give CTE
//     // Once Ptr(*j) value is
//     // assigned, later it can't
//     // be modified(Error)

//     cout << *i << " and " << *j;

//     return 0;
// }