#include <iostream>

 #include <string>

 using namespace std;
 int main() {
 string str = "hi";
 // Concatenation
 string greeting = str + ",om";
 cout << "Concatenation: " << greeting << endl;
 
 // Substring
 string part = greeting.substr(3, 9); // Extracts "World"
 cout << "Substring: " << part << endl;
 
 // Find
 size_t pos = greeting.find("om");
 cout << "Find: 'swaraj' found at position " << pos << endl;
 
 // Replace
 string replaced = greeting;
 replaced.replace(pos, 6, "atharva");
 cout << "Replace: " << replaced << endl;
 
 // Insert
 string inserted = greeting;
 inserted.insert(3, "cool");
 cout << "Insert: " << inserted << endl;
 
 // Erase
 string erased = greeting;
 erased.erase(2, 7); // Removes " cool"
 cout << "Erase: " << erased << endl;
 
 // To uppercase
 string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
 cout << "To Uppercase: " << uppercase << endl;
 
 // To lowercase
 string lowercase = greeting;
 for (char &c : lowercase) c = tolower(c);
 cout << "To Lowercase: " << lowercase << endl;
 
 
 return 0;
}