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
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of the student:");
		scanf("%s",&s[i].s_name);
		printf("\nEnter the arrival time of the student:");
		scanf("%d",&s[i].at);
		printf("\nEnter the number of the gifts:");
		scanf("%d",&s[i].giftnum);
		s[i].r=s[i].r;
		for(j=0;j<s[i].giftnum;j++)
		{
			printf("\nEnter the gift name::");
			scanf("%s",&s[i].g[j].name);
			printf("\nEnter the price of the gift::");
			scanf("%d",&s[i].g[j].value);
		}
		for(j=0;j<s[i].giftnum;j++)
		{
			s[i].totalbill=s[i].totalbill+s[i].g[j].value;    //total bill 
		}
	}
