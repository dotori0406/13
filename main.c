#include <stdio.h>
#include <stdlib.h>


struct student {
       int ID;//�й� 
       char name[100];//�̸� 
       float score;//���� 
       };

int main(int argc, char *argv[])
{
    //instance ����  
  struct student s1 = {123, "SEHYUN",4.3};
  
  //�ٸ� �� ����  
  s1.ID = 123456;
  s1.name[0] = 'c';
  s1.score = 0.7;
  
  
  //���  
  printf("ID : %i\n",s1.ID);
  printf("name : %i\n",s1.name);
  printf("score : %i\n",s1.score);
  
  strcpy(s1.name,"Bongjun");
  printf("name2 : %s\n");
  
  system("PAUSE");	
  return 0;
}
