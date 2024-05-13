// String

//Anagram of a string

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int areAnagrams(char *str1, char *str2) {
    // Create two count arrays and initialize all values as 0
    int count1[MAX_CHARS] = {0}, count2[MAX_CHARS] = {0};
    int i;

    // For each character in input strings, increment count in the corresponding count array
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // If both strings are of different lengths, they cannot be anagrams
    if (str1[i] || str2[i])
        return 0;

    // Compare count arrays
    for (i = 0; i < MAX_CHARS; i++)
        if (count1[i] != count2[i])
            return 0;

    return 1;
}

int main() {
    char str1[MAX_CHARS], str2[MAX_CHARS];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}


