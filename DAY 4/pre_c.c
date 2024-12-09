#include<stdio.h>
int main(){
    int marks=10;
    marks=++marks + marks++;
    printf("marks: %d",marks);
}