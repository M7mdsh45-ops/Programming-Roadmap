#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Initialize a string with a sentence
    string s1 = "My Name Is Mohamed Ahmed , I love Programing .";

    // Print the entire string
    cout << s1 << endl;

    // .length() : Returns the number of characters in the string
    cout << s1.length() << endl;

    // .at() : Safely accesses the character at a specific index (index 3 is 'N')
    cout << s1.at(3) << endl;

    // .append() : Adds another string to the end of the current string
    s1.append(" I study It At UNI .");
    cout << s1 << endl;

    // ==========================================
    // 1. Insert & Direct Erase Section
    // ==========================================

    // .insert() : Inserts a string at a specific index position (inserts " Ali " at index 7)
    s1.insert(7, " Ali ");
    cout << "After Insert: " << s1 << endl;

    // Directly erasing the inserted word " Ali " using its index and length (index 7, length 5)
    s1.erase(7, 5);
    cout << "After Erasing the Inserted Word: " << s1 << endl;


    // ==========================================
    // Other string operations
    // ==========================================

    // .substr() : Extracts a substring (starts at index 16 and takes 8 characters)
    cout << s1.substr(19, 5) << endl;

    // .push_back() : Adds a single character to the very end of the string
    s1.push_back('X');
    cout << s1 << endl;

    // .pop_back() : Removes the last character from the string
    s1.pop_back();
    cout << s1 << endl;

    // .find() : Searches for a substring and returns its starting index (case-sensitive)
    cout << s1.find("Mohamed") << endl;

    // .find() : Returns string::npos if the search item is not found ("ali" lowercase)
    cout << s1.find("ali") << endl;

    // string::npos : Represents a non-position / not found, used to check if a search failed
    if (s1.find("ali") == s1.npos)
    {
        cout << "Ali Is Not Found \n";
    }


    // ==========================================
    // 2. Smart Deletion Section (Find + Erase any other word)
    // ==========================================

    // Finding any other existing word in the string (e.g., "Programing") to erase it dynamically
    int index = s1.find("Programing");
    if (index != s1.npos)       // Make sure the word actually exists
    {
        s1.erase(index, 10);    // Erase "Programing" (10 characters starting from its found index)
        cout << "After smart erasing 'Programing': " << s1 << endl;
    }


    // ==========================================
    // Cleanup Section
    // ==========================================

    // Remove the appended part (" I study It At UNI .") from index 44 to the end
    s1.erase(44);
    cout << "After erasing append: " << s1 << endl;

    // .clear() : Deletes all characters from the string, making it empty
    s1.clear();
    cout << s1 << endl;

    return 0;
}
