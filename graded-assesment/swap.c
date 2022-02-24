# include <stdio.h>
# include <string.h>
# define LENGTH 15

int main(void) {
  char input[LENGTH], output[LENGTH];
  scanf("%s", input);  //Input string 
  int length = strlen(input);
  int i;
  
  for (i=0; i<length; i++) {
  if (length % 2 == 0) {
      if (i < length/2)
          output[length/2+i] = input[i] ;
      else 
          output[i-length/2] = input[i] ;
  }
   
  else {
     if (i < length/2)
          output[length/2+i+1] = input[i] ;
      else if (i == length/2)
           output[i] = input[i];
           else
               output[i-1-length/2] = input[i] ;
      }
  
      
  
  }  // end of for loop
  output[i] = '\0';
  
  printf("%s", output);
  return 0;
}
