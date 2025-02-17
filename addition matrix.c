#include<stdio.h>
int main()
{
int rows ,i,j,columns;
scanf("%d%d",&rows,&columns);

int a[rows][columns],b[rows][columns],c[rows][columns];

for(i=0;i<rows;i++){
         for(j=0;j<columns;j++){

                   scanf("%d",&a[i][j]);}}

for(i=0;i<rows;i++){
              for(j=0;j<columns;j++){
                  scanf("%d",&b[i][j]);}}
                  for(i=0;i<rows;i++){
              for(j=0;j<columns;j++){
                   c[i][j]=a[i][j]+b[i][j];}}

for(i=0;i<rows;i++){
           for(j=0;j<columns;j++){
                printf("%d",c[i][j]);}}


return 0;}














