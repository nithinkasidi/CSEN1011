# include <stdio.h>
int main(void) {

// Structure is a colletion of heterogenous data items

  struct student {
    char pin [15];
    char name[10];
    int marks;
    int rank;
  };

  struct student stu[2];
  
  
  printf("Enter student PIN:");
  scanf("%s", stu.pin);

  printf("Enter student Name:");
  scanf("%s", stu.name);

  printf("Enter student marks:");
  scanf("%d", &stu.marks);

  printf("Enter student rank:");
  scanf("%d", &stu.rank);

  printf("The details entered are:\n");
  printf("%s\n", stu.pin);
  printf("%s\n", stu.name);
  printf("%d\n", stu.marks);
  printf("%d\n", stu.rank);


  //printf("Size of the student structure is %d\n", sizeof(stu1));
  return 0;
}
