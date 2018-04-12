#include<stdio.h>
#include<conio.h>
#include<string.h>
struct process
{
	char s_name[10];
	int at;
	int r;
	int totalbill;
	int giftnum;
	struct gname
	{
		char name[30];
		int value;
	}g[10];
}s[10];
struct process temp;
void main()
{
	int i,n,k,r,f,t=0,m,size=0,j,h;
	printf("\nEnter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s[i].totalbill=0;
	}
