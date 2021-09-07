#include<stdio.h>
int main(){
    char vowel;
    printf("Enter any character\n");
    scanf("%c",&vowel);


    if (vowel=='a' || vowel =='e' || vowel =='i' || vowel=='o' ||vowel=='u' || vowel=='A' || vowel == 'E' || vowel == 'I' || vowel == 'O'|| vowel =='U')
    {
        printf("This character is vowel\n");
    }else{
        printf("This character is not vowel\n");
    }
return 0;
}
