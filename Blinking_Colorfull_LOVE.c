#include<stdio.h>

void slowDown(double d){
     for(double y=.1;y<100000;y=y+d){}
}

void Love(int n, char c, char color){
  for (int i=0,k=0,m=10;i<13;i++,k=k+2) {
      for (int t = 1; t <= n; t++) {printf(" ");}
      if(i==5){ 
          k=k-1;
      }
      for (int j=0;j<31;j++) {
          if(i<3 && ((j>=(m-7)-k && j<=(m-1)+k) || (j>=(2*m+1)-k && j<=(2*m+7)+k))){
              printf("\033[1;%dm%c\033[0m", color, c);
          }
          else if((i==3 && j!=15) || (i>3 && (j>=k-7 && j<=37-k)) || (i==12 && j==15 )){
              printf("\033[1;%dm%c\033[0m", color, c);
          }
          else
              printf(" ");
      }
      printf("\n");
  }         
}

void Move_MF(int a, int b){
    for(int i=a, k=b, t=0, color=30; ; color++){
        printf("\033[H\033[2J");
        printf("\n\n");
        if(t%2==0){
            Love(t,'*', color);
        }else{
            Love(t,'.', color);
        }
        slowDown(.002);
        if(i<=b){
            t=i++;
        }else if(k>=a){
            t=k--;
        }else{
            i=a;
            k=b;
        }
        if(color==36){
            color=29;
        }
        printf("\033[H");
  }
}

int main(){
    Move_MF(20, 60);
}
