// Panagram of two strings.



#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a string is a panagram
bool isPanagram(const char *str) {
    int frequency[26] = {0};

    // Count the frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            frequency[index]++;
        }
    }

    // Check if all letters of the alphabet are present
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == 0)
            return false;
    }

    return true;
}

// Function to handle test cases
void handleTestCases(const char *str1, const char *str2) {
    if (isPanagram(str1) && isPanagram(str2))
        printf("Both strings are panagrams.\n");
    else if (isPanagram(str1))
        printf("String 1 is a panagram, but String 2 is not.\n");
    else if (isPanagram(str2))
        printf("String 2 is a panagram, but String 1 is not.\n");
    else
        printf("Neither string is a panagram.\n");
}

int main() {
    // Test cases
    const char *testCases[][2] = {
        {"The quick brown fox jumps over the lazy dog", "Pack my box with five dozen liquor jugs."},
        {"abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxy"},
        {"", ""},
        {"Not a panagram", "Also not a panagram"}
    };

    // Iterate through test cases
    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); i++) {
        printf("Test Case %d:\n", i + 1);
        printf("String 1: %s\n", testCases[i][0]);
        printf("String 2: %s\n", testCases[i][1]);
        handleTestCases(testCases[i][0], testCases[i][1]);
        printf("\n");
    }

    return 0;
}
