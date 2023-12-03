#include <stdio.h>
#include <stdlib.h>

struct student {
       int ID;
       char NAME[100];
       float GRADE;
       
};

void main(void) {
     
     struct student s1 = {123, "JIWON", 4.3};
     
     s1.ID =123456;
     s1.NAME[0] = 'c';
     s1.GRADE = 0.7;
     
     
     printf("ID: %i\n", s1.ID);
     printf("NAME: %c\n", s1.NAME);
     printf("GRADE: %f\n", s1.GRADE);
     
     strcpy(s1.NAME, "YEOMJI");
     printf("NAME2 : %s\n");
     
  
  system("PAUSE");	
  return 0;
}
