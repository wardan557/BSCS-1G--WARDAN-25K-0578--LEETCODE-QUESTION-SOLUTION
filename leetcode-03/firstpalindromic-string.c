#include<stdio.h>
#include<string.h>
int ispalindrome(char *s){
	int left = 0;
	int right = strlen(s) - 1;
	while(left < right){
		if(s[left] != s[right])
		return 0;
		left++;
		right--;
	}
	return 1;
}
char* firstPalindrome(char words[][20], int size) {
	int i;
    for (i = 0; i < size; i++) {
        if (ispalindrome(words[i])) {
            return words[i]; 
        }
    }
    return ""; 
}
int main(){
	char words[][20] = {"abc", "car", "ada", "racecar", "cool"};
    int size = sizeof(words) / sizeof(words[0]);
    char *result = firstPalindrome(words, size);
    printf("The first palindromic string is: %s\n", result);
	return 0;
}
