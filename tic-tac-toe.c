//hi !!! thanks for viewing this code,it is tic tac toe game for automatic and 2 player version created by bhavy chawda
//thanks:)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int k=1;
int printtab();
int check();
int play();
int complist();
int winner();
int drawcheck();
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//-------------------------main game loop starts------------------

int main(void){

int num,x,v,s,y,p1,p2,l=1,g=1;
while(1){
system("cls");
printtab(a);
printf("\n\n");
if(k!=1){break;}
//-------------------------player 1 starts----------------------------

printf("    Your Chance:  ");
scanf("%d",&num);
printf("\n");
p1=play(num,1);
if(p1==0){scanf("%d",&num);
printf("\n");
play(num,1);}g=winner(1);
if(g==5){ system("cls");
printtab(a);break;}
system("cls");
//-------------------------player 2 ends-------------------------------

printtab(a);
printf("\n\n");

if(k!=1){break;}
//-------------------------player 2 starts---------------------------------

printf("   Computer is choosing....");
//-------------------------artifical delay-----------------------------------

v=0,s=0;
num=complist();
v=time(0)%1000;

while(s!=v+3)
{
s=time(0)%1000;
}
//-------------------------artifical delay ends---------------------------------

printf("\n");
p2=play(num,2);
//if(p2==0){scanf("%d",&num);
//printf("\n");
//play(num,2);}
l=winner(2);
if(l==5){ system("cls");
printtab(a);break;}
//-------------------------player 2 ends--------------------------------------------
}

if(g==5){ printf(" \a\n you are winner !!\n");
printf("\n\n\n\n\n");}
else if(l==5){ printf(" \a\n you lose!!\n");printf("\n\n\n\n\n");}
else{printf("\a\n game draw!!");printf("\n\n\n\n\n");}
return 0;

}
//-------------------------main game loop ends------------------------------------------

//function

//-------------------------printing updated board------------------------------------------
int printtab(int a[3][3]){
    int i,j;
    k=drawcheck(a);

 printf("\n\n\n");
  printf("  --------------------------- \n");
  printf("  player 1 = O & player 2 = X \n");
  printf("  --------------------------- \n");
   printf("\n"); printf("\n");
    printf("         TIC   TAC  TOE      ");
      printf("\n");
     printf("\n");
   for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{if(j<=1){

if(a[i][j]==0||a[i][j]==10){printf("     %c  |",check(a[i][j]));}
else{printf("     %d  |",a[i][j]);}
}
else{
if(a[i][j]==0||a[i][j]==10){printf("     %c  ",check(a[i][j]));}
else{printf("     %d   ",a[i][j]);}
}
}
printf("\n");
if(i<=1){
    printf("   ------");
    printf("---------");
    printf("---------");
    printf("\n");
}

}

}
int check(int z)
{ if(z==0){return 'O';}
if(z==10){return 'X';}
else{return z;}

}
//-------------------------updated board ends--------------------------------------


//-------------------------assign value in board array starts-------------------------
int play(int n,int x){
if(n==1 &&(a[0][0]!=0&&a[0][0]!=10)){
if(x==1){a[0][0]=0;}else{a[0][0]=10;}
}
else if(n==2 &&(a[0][1]!=0&&a[0][1]!=10)){
if(x==1){a[0][1]=0;}else{a[0][1]=10;}
}
else if(n==3 &&(a[0][2]!=0&&a[0][2]!=10)){
if(x==1){a[0][2]=0;}else{a[0][2]=10;}
}
else if(n==4 &&(a[1][0]!=0&&a[1][0]!=10)){
if(x==1){a[1][0]=0;}else{a[1][0]=10;}
}
else if(n==5 &&(a[1][1]!=0&&a[1][1]!=10)){
if(x==1){a[1][1]=0;}else{a[1][1]=10;}
}
else if(n==6 &&(a[1][2]!=0&&a[1][2]!=10)){
if(x==1){a[1][2]=0;}else{a[1][2]=10;}
}
else if(n==7 &&(a[2][0]!=0&&a[2][0]!=10)){
if(x==1){a[2][0]=0;}else{a[2][0]=10;}
}
else if(n==8 &&(a[2][1]!=0&&a[2][1]!=10)){
if(x==1){a[2][1]=0;}else{a[2][1]=10;}
}
else if(n==9 &&(a[2][2]!=0&&a[2][2]!=10)){
if(x==1){a[2][2]=0;}else{a[2][2]=10;}
}
else{
    printf("invalid input try again!!\n");

return 0;
}
//-------------------------assign value in board array ends--------------------


//-------------------------winner check starts------------------------------------
}
int winner(int x){
int f;
if(x==1){f=0;}else{f=10;}
if(a[0][0]==f&&a[1][0]==f&&a[2][0]==f){
    return 5;
  }

  if(a[0][0]==f&&a[0][1]==f&&a[0][2]==f){
    return 5;
  }

  if(a[0][0]==f&&a[1][1]==f&&a[2][2]==f){
    return 5;
  }

  if(a[0][2]==f&&a[1][1]==f&&a[2][0]==f){
    return 5;
  }

  if(a[0][1]==f&&a[1][1]==f&&a[2][1]==f){
    return 5;
  }

  if(a[0][2]==f&&a[1][2]==f&&a[2][2]==f){
    return 5;
  }

  if(a[1][0]==f&&a[1][1]==f&&a[1][2]==f){
    return 5;
  }

  if(a[2][0]==f&&a[2][1]==f&&a[2][2]==f){
    return 5;
  }
}
int drawcheck(int a[3][3]){
int i,j,c=0;
for(i=0;i<=9;i++)
{
    for(j=0;j<=9;j++){
        if(a[i][j]==0||a[i][j]==10){c++;}
        else{continue;}
    }
if(c==9){return 0;}
else{return 1;}
}

}
//-------------------------winner check ends---------------------------------


//-------------------------computer random move generator------------------------------
int complist()
{
    int comp[9]={};
    int u=-1,i,j,t;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[i][j]!=0&&a[i][j]!=10){
                u=u+1;
                comp[u]=a[i][j];
            }
        }
    }
    srand(time(0));
    t=rand()%(u+1);
    return comp[t];
}

//-------------------------program ends-----------------------------------------------------

