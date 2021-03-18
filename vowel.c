// c program to find whether alphabet is vowel or constant
// created by vishal on 17 march 2020
// Vowels : a,e,i,o,u 
#include <stdio.h>
int main() { 
    char c; //data type declaration
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");//print f function calling
    scanf("%c", &c);//It will scan the alphabet entered by user.

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}