#include <stdio.h>

//f=dy/dx
double f(double x){
  return 2*x;
}

int main(){
  double x=0,y=0,dx=0.5;

  for(int i=0;i<10/dx+1;i++){
    y = y + f(x)*dx;
    if(i%(int)(1/dx) == 0){
      printf("x=%.5lf y=%.5lf\n",x,y);
    } 
    x = x + dx;
  }
}
