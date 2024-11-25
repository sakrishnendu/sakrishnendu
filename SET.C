#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void input()
void output();
void setunion()
void intersection()
void difference()
int a[]={0,0,0,0,0,0,0,0,}
b[]={0,0,0,0,0,0,0,0,0}
c[]={0,0,0,0,0,0,0,0,0}
void main()
{
int ch,wish;
clrscr();
do{
print("\n menu\n");
printf("\n1.input\n2.Union\n3.intersection\n4.difference\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
input();
break;
case 2:
setunion();
case 3:
intersection();
break;
case 4:
difference();
break;
default:
printf("wrong choice");
}
while(wish==1)
getch();
}
}
void input()
{
int n,ele,i;
printf("\n enter the size of first set:");
scanf("%d",&n);
printf("\n enter the element \n");
for(i=1;i<n;i++)
{
scanf("%d",&ele);
a[ele]=1;
}
printf("enter the size of second set:");
scanf("%d",&n);
printf("\n enter the elements \n");
for(i=1;i<n;i++)
{
scanf("%d",&ele);
b[ele]=1;
}
printf("\n set1:{");
for(i=1;i<9;i++)
{
printf("%d",a[i]);
}
printf("}");
printf("\n set2:{");
for(i=1;i<9;i++)
{
printf("%d",b[i]);
}
printf("}");
void output(int[])
{
int;
print("\n set:{");
for(i=1;i<9;i++)
{
if(c[i]!=0)
printf("%d\t",i);
}
printf("}");
}
void setunion(){
int i,c[10];
for(i=1;i<=9;i++)
{
if(a[i]!=b[i])
c[i]=1;
else
c[i]=a[i];
}
print("union of set1 and set2 is:{");
for(i=1;i<=9;i++)
{
printf("%d",c[i]);
}
printf("}");
output(i);
}
void intersection()
{
int i,c[10];
for(i=1;i<9;i++)
if(a[i]==b[i])
c[i]=a[i];
else
c[i]=0;
}
printf("intersection set1 and set2 is:{");
for(i=1;i<=9;i++)
{
printf("%d",c[i]);
printf("}");
output(1);
}
}
void difference()
{
int i,c[10];
for(i=1;i<=9;i++)
{
if a[i]==1 && b[i]==0)
c[i]=0;
}
printf("difference of set1 and set2 is:{");
for(i=1;1<=9;i++){
printf("%d",c[i]);
printf("}");
output(i);
}
}