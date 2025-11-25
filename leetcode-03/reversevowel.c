#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(char c){
	c = tolower(c);
	return (c =='a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u');
}
void reversevowels(char *s){
	int left = 0;
	int right = strlen(s) - 1;
	while(left<right){
		while(left < right && !isvowel(s[left])){
			left++;
		}
		while(left < right && !isvowel(s[right])){
			right--;
		}
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left ++;
		right--;
	}
}
int main(){
	char s[] = "IceCreAm";
	reversevowels(s);
	printf("%s\n",s);
	return 0;
}
