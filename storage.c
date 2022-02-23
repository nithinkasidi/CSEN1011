# include <stdio.h>

int y=100;  //global variable
void sample_function(void){
  auto int x=50;
  printf("Value of auto variable x is %d\n", x);
  printf("Value of global variable y is %d\n", y);
  y += 7;
}

void static_variable_function(void){
  static int s = 60;
  printf("Value of s is %d\n", s++) ;
}

int main(){
  sample_function();
  //printf("Value of auto variable x declared in sample_function is %d\n", x);
  printf("Value of global variable y after changing is %d\n", y);

  
  for (int i=1; i<=3; i++)
    static_variable_function();

  return 0;
}
