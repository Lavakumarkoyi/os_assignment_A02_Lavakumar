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
	for(k=0;k<n-1;k++)  //bubble sort
	{
		for(m=0;m<n-k-1;m++)
		{
			if(s[m].at>s[m+1].at)  //sorting according to the arrival time
			{
				temp.at=s[m].at;
				s[m].at=s[m+1].at;
				s[m+1].at=temp.at;
				temp.giftnum=s[m].giftnum;
				s[m].giftnum=s[m+1].giftnum;
				s[m+1].giftnum=temp.giftnum;
				temp.r=s[m].r;
				s[m].giftnum=s[m+1].r;
				s[m+1].r=temp.r;
				temp.totalbill=s[m].totalbill;
				s[m].totalbill=s[m+1].totalbill;
				s[m+1].totalbill=temp.totalbill;
				strcpy(temp.s_name,s[m].s_name);
				strcpy(s[m].s_name,s[m+1].s_name);
				strcpy(s[m+1].s_name,temp.s_name);
			}
		}
	}
	for(k=0;k<n-1;k++)   //bubble sort
	{
		for(m=0;m<n-k-1;m++)
		{
			if((s[m].giftnum<s[m+1].at)&&(s[m].at==s[m+1].at))     //sorting of the structures with respect to number of gifts and arrival time
			{
				
				temp.totalbill=s[m].totalbill;
				s[m].totalbill=s[m+1].totalbill;  //swaping of totalbill.
				s[m+1].totalbill=temp.totalbill;
				temp.at=s[m].at;
				s[m].at=s[m+1].at;          
				s[m+1].at=temp.at;
				temp.giftnum=s[m].giftnum;
				s[m].giftnum=s[m+1].giftnum;    //swapping according to the number of gifts
				s[m+1].giftnum=temp.giftnum;
				temp.r=s[m].r;
				s[m].giftnum=s[m+1].r;
				s[m+1].r=temp.r;
				strcpy(temp.s_name,s[m].s_name);
				strcpy(s[m].s_name,s[m+1].s_name);   //swapping of names
				strcpy(s[m+1].s_name,temp.s_name);
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nStudent name:");
		printf("\n%s",&s[i].s_name);
		printf("\n\tTotal Bill:%d",s[i].totalbill);  //total bill for the items buyed by each students
	}
}
