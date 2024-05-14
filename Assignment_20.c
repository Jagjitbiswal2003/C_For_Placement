#include <stdio.h>
#include <string.h>

// Function to implement Rabin-Karp algorithm
void search(char pattern[], char text[], int prime) {
    int pattern_length = strlen(pattern);
    int text_length = strlen(text);
    int pattern_hash = 0; // Hash value for pattern
    int text_hash = 0;    // Hash value for text
    int h = 1;

    // Calculate the hash value of the pattern and the first window of text
    for (int i = 0; i < pattern_length - 1; i++)
        h = (h * 256) % prime;

    for (int i = 0; i < pattern_length; i++) {
        pattern_hash = (256 * pattern_hash + pattern[i]) % prime;
        text_hash = (256 * text_hash + text[i]) % prime;
    }

    // Slide the pattern over the text one by one
    for (int i = 0; i <= text_length - pattern_length; i++) {
        // Check the hash values of the current window of text and pattern.
        // If the hash values match, then only compare characters
        if (pattern_hash == text_hash) {
            int j;
            // Check for characters one by one
            for (j = 0; j < pattern_length; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == pattern_length)
                printf("Pattern found at index %d\n", i);
        }
        // Calculate hash value for the next window of text
        if (i < text_length - pattern_length) {
            text_hash = (256 * (text_hash - text[i] * h) + text[i + pattern_length]) % prime;
            if (text_hash < 0)
                text_hash += prime;
        }
    }
}

int main() {
    char text[] = "AABAACAADAABAABA";
    char pattern[] = "AABA";
    int prime = 101; // A prime number to reduce chances of collision

    search(pattern, text, prime);

    return 0;
}
