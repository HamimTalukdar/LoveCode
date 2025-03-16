#include <stdio.h>
#include <unistd.h>

void Love(){
    for (;;) {
        printf("\033[H\033[2J");
        int a = 27, n = 0, l = 0, m=10, color=30;
        for (int i=0,k=0;i<13;i++,k=k+2) {
            for (int t = 1; t <= l; t++) {printf(" ");}
            if(i==5){ 
                k=k-1;
            }
            for (int j=0;j<31;j++) {
                if(i<3 && ((j>=(m-7)-k && j<=(m-1)+k) || (j>=(2*m+1)-k && j<=(2*m+7)+k))){
                    printf("\033[1;%dm*\033[0m", color);
                }
                else if((i==3 && j!=15) || (i>3 && (j>=k-7 && j<=37-k)) || (i==12 && j==15 )){
                    printf("\033[1;%dm*\033[0m", color);
                }
                else
                    printf(" ");
            }
            printf("\n");
            if (i == 12 && n < a) {
                n++;
                i = -1;
                k=-2;
                l = n * 3;
                color++;
                if(color==36){
                    color=29;
                }
                usleep(100000);
                printf("\033[H");
            }
        }
        
    }
}

int main() {
    Love();
}
