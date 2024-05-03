// i will tomorrow make an example for all this types of c++ string type shit :
// str.length(). Count the number of characters in a string
// str[]. Use square brackets to access individual characters within a string. No range-checking
// str.at(int index). Retrieve the character at a position with the benefit of built-in range-checking.
// == / !=. Compare two strings for equality
// s1 + s2 / +=. Appending another string or a single character to the end of a string
// str.find(key) / str.find(key, n). Search within a string for a particular string or character. key can either be a string or a character. We say the find member function is overloaded to allow more than one usage.
// str.substr(start, length). Extract substrings. Create new strings by extracting portions of a larger one. This member function does not change the receiver string, as it makes a new string with a copy of the characters specified.
// str1.insert(start, str2) / str1.replace(start, length, str2). Modify a string by inserting and replacing. These functions do modify the receive string
// C-style string. Although old-style C char * strings and C++ strings can co-exist in a program, almost all use will be of C++ strings, since they have a much richer set of operations and are less error-prone to work with. However, when working with file streams, it's unavoidable to use C-style string
// Important: When using (std::string str) as parameter, it takes a copy from the calling function to the destination function. It is not fast to dynamically allocate a string to create a copy. If you are not going to modify the string, send it as a const &, in this way, it will not create a copy