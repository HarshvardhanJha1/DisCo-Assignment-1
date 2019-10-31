#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
/* Function to print permutations of string 
   This function takes three parameters: 
   1. String 
   2. Starting index of the string 
   3. Ending index of the string. */
void permute(char *a, int l, int r) 
{ 
   int i; 
   if (l == r){
      printf("%s\n", a);
   } 
      
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permute(a, l+1, r); 
          swap((a+l), (a+i)); //backtrack 
       } 
   } 
} 
  
int main(){
  char s[1000];
  scanf("%s",s);
  
  permute(s,0,strlen(s)-1);

}