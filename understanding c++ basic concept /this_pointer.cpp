//objects & functions :
// it is important to know how objects look at functions and data members of a class .
// when you create an object of a class in oop , it contains both data and functions .
// each member has its own set of data members , but they all share the same set of member functions .

// "this" Pointer :
// there's a special pointer called this ,
// this refers to the current intsance of a class , It's a pointer that holds the memory address of the object that's currently executing the member function.

// Address of this pointer :
// #include <iostream>

// class Myclass 
// {
//     public :
//        void  printaddress()
//        {
//             std::cout << "Address of this object : " << this << std::endl;
//        }
// };

// int main()
// {
//     Myclass K;
//     K.printaddress();
// }

// Usage of this Pointer :
// accessing Member Variables inside a member function , you can use this to access to member variables of the current objects .

// #include <iostream>

// class Myclass 
// {
//     private:
//         int x;
//     public:
//         void setX(int x)
//         {
//             this->x = x;
//             std::cout << x << std::endl ;
//         }
// };

// int main ()
// {
//     Myclass K;
//     K.setX(23);
// }

//chaining member function call :
// this can be particulary useful for chaining member function calls ,
// espcailly in situations when u want to return a refrence to the current 

// #include <iostream>

// class Myclass
// {
//     public :
//         Myclass& doBig()
//         {
//             std::cout << " doBig " << std::endl ;
//             return *this ;
//         }
// };

// int main()
// {
//     Myclass K;
//     K.doBig();
// }


//Passing the current Object :
//Sometimes, you might need to pass the current object itself to another function.
// In such cases, you can use this.

// #include <iostream>

// class Myclass
// {
//     public: 
//         void another(Myclass *)
//         {
//             std::cout << " another " << std::endl ;
//         }
//         void call_another()
//         {
//             another(this);
//         }
// };

// int main()
// {
//     Myclass K;
//     K.call_another();
//     K.another(&K);
// }


