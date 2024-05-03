// std::cin >> string
// Each extracted character is appended to the string
// The extraction operations use whitespaces as separators. Therefore, this operation will only extract what can be considered as a word from the stream

// #include <iostream>
// #include <string>

// int main() {
//     std::string str;

//     std::cout << "Enter a word: ";
//     // Using std::cin to extract individual characters
//     std::cin >> str;

//     std::cout << "Word entered: " << str << std::endl;

//     return 0;
// }

// If you input "Hello World", str will contain "Hello" because std::cin extracts characters until it encounters whitespace (space, tab, newline).



// getline
// To extract entire lines of text
// The extraction stops until the delimitation character, or the end of file is reached, or some other error occurs during the input operation .

// #include <iostream>
// #include <string>

// int main() {
//     std::string line;

//     std::cout << "Enter multiple lines of text (Ctrl+D to end on Unix/Linux, Ctrl+Z on Windows):\n";

//     // Using getline to extract entire lines of text
//     while (std::getline(std::cin, line)) {
//         std::cout << "Line entered: " << line << std::endl;
//     }

//     return 0;
// }

//std::getline reads characters from the input stream until it encounters a newline character ('\n') or the end-of-file (EOF) condition.
// It then stores the characters in the string line. The loop continues until std::getline reaches the end of the input stream or an error occurs.

