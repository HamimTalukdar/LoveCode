#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=0,k=0;i<13;i++,k=k+2){
    if(i==5){ 
      k=k-1;
    }
    for(j=0;j<31;j++){
        if(i<3 && ((j>=3-k && j<=9+k) || (j>=21-k && j<=27+k))){
          printf("*");
        }
        else if((i==3 && j!=15) || (i>3 && (j>=k-7 && j<=37-k)) || (i==12 && j==15 )){
          printf("*");
        }
        else 
        printf(" ");
    }
    printf("\n");
  }
  return 0;  
}
