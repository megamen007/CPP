//The static keyword is used with a variable to make the memory of the variable static
// once a static variable is declared its memory can’t be changed.

//Static Member in C++
// Static members of a class are not associated with the objects of the class.
// Only one copy of that member is created for the entire class and is shared by all the objects of that class,
// no matter how many objects are created.
// Once a static member is declared it will be treated as same for all the objects associated with the class.

//Static Member Function in C++
//A static member function is independent of any object of the class. 
// A static member function can be called even if no objects of the class exist.
// A static member function can also be accessed using the class name through the scope resolution operator.
// A static member function can access static data members and static member functions inside or outside of the class.
// Static member functions have a scope inside the class and cannot access the current object pointer.
// You can also use a static member function to determine how many objects of the class have been created.

// The reason we need Static member function:
// Static members are frequently used to store information that is shared by all objects in a class. 