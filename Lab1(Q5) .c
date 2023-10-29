#include <stdio.h>
#include <stdlib.h>


int fibonacci(int x){
 if (x>1){
    return fibonacci(x-1)+fibonacci(x-2);

 }else if (x==0){
     return 0;
 }else if(x==1){
  return 1;
  }
}
void Print(int n,int current){
if (current<n){
    printf("%d\n",fibonacci(current));
    Print(n,current+1);
}

}
int main(){
int num;
printf("Enter any number:");
scanf("%d",&num);
if (num<0){
    printf("Enter positive num:");
}else{
Print(num,0);
}
return 0;
}
