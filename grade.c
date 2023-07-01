#include <stdio.h>
int main (void)
{
    int percentage;
      printf("Enter what percentage did u get :: ");
      scanf("%d",&percentage);
  
       if(percentage < 60 || percentage > 100)
      {
        printf("bad");
      }

      else if(percentage>= 90)
      {
          printf("excellent");
      }

      else if(percentage>=80)
      {
          printf("very good ");
      }

      else if(percentage>=70)
      {
          printf("good");
      }

      else if(percentage>=60)
      {
          printf("ok ok ");
      }

return 0;

}
