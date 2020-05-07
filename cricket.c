#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct {

	int runs,balls;
	float strikerate;
	int fours,sixes;
}batsmen;

typedef struct {

	int overs,runs,wickets,maiden;
	float econ;
}bowler;
int opt;
batsmen bats[11],bats2[11];
bowler bowl[11],bowl2[11];
char date[12];
char match[35];
char team1[20];
char team2[20];
int extr2;
int extr1;
char place[30];
void newscoresheet();
int totalr(batsmen b[],int e);
void viewscoresheet();
int totalw(bowler b[]);
void menu();

int main()
{
	menu();
}

void menu()
{
	int choice;
	printf("\n\n\n\n\t\t\t\tCRICKET SCORE SHEET\t\t\t\t\n\n");
	printf("\n\t1.New score sheet:\n\t2.View scoresheet(At a time only one scoresheet can be viewed )\n\t3.Exit\n\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:newscoresheet();
		       printf("\n Enter 1 to go to main menu and 0 to exit:");
		       scanf("%d",&opt);
		       if(opt==1)
		            menu();
		        else
		            exit(-1);
				break;
		case 2:viewscoresheet();
		       printf("\n Enter 1 to go to main menu and 0 to exit:");
			   scanf("%d",&opt);
			   if(opt==1)
			        menu();
				else
				    exit(-1);
				break;
		case 3:exit(-1);    
		       break;
		default:printf("\n Enter the right option:");
		        printf("\n 1 to go to the main menu ,0 to exit");
		        scanf("%d",&opt);
			    if(opt==1)
			        menu();
				else
				    exit(-1);
				break;
	}
	
}
void newscoresheet()
{

	int i=0,chance;

	FILE *fp;
	fp=fopen("cricket.dat","w");
	if(fp==NULL)
	{
		printf("\n Error in opening file:");
		exit(-1);
	}
	printf("\n Enter date of match(dd/mm/yyyy)");
	scanf("%s",date);
	printf("\n The teams playing in the match are(Team1VsTeam2)(No spaces):");
	scanf("%s",match);
	printf("\n Enter the place where match is going on:");
	scanf("%s",place);
	printf("\n Enter team name batting first:");
	scanf("%s",team1);
	printf("\n Enter team name bowling first:");
	scanf("%s",team2);
	printf("\n Enter the data of the batting team first:");
	printf("\n Enter the extras in first innings:");
	scanf("%d",&extr1);
	for(i=0;i<11;i++)
	{
		printf("\n Enter 1 if batsmen[%d] batted and 0 if didn't bat:",i+1);
		scanf("%d",&chance);
		if(chance==0)
		{
			printf("\n Batsmen[%d] and lower down the order didn't get the opportunity to bat\n",i+1);
			 bats[i].runs=-1;
			 break;
		}
		printf("\n Enter the number of runs made:");
		scanf("%d",&bats[i].runs);
		printf("\n Enter the number of balls faced:");
		scanf("%d",&bats[i].balls);
		printf("\n Enter the number of fours hit:");
		scanf("%d",&bats[i].fours);
		printf("\n Enter the number of sixes hit:");
		scanf("%d",&bats[i].sixes);
		bats[i].strikerate=(float)bats[i].runs*100/bats[i].balls;
	}
	printf("\n Now enter the data of the bowling team:");
	for(i=0;i<11;i++)
	{
		printf("\n Enter 1 if player[%d] bowled and 0 if didn't bowl:",i+1);
		scanf("%d",&chance);
		if(chance==0)
		{
			printf("\n Captain used only %d bowling options\n",i);
			bowl[i].overs=0;
		    break;
		}
		printf("\n Enter the number of overs bowled:");
		scanf("%d",&bowl[i].overs);
		printf("\n Enter the number of runs hit to the bowler:");
		scanf("%d",&bowl[i].runs);
		printf("\n Enter the number of maiden overs bowled:");
		scanf("%d",&bowl[i].maiden);
		printf("\n Enter the number of wickets taken:");
		scanf("%d",&bowl[i].wickets);
		bowl[i].econ=(float)bowl[i].runs/bowl[i].overs;
	}
	
	for(i=0;i<11;i++)
	{
		fprintf(fp,"%d %d %d %d %d %f\n",i+1,bats[i].runs,bats[i].balls,bats[i].fours,bats[i].sixes,bats[i].strikerate);
	}
	
	for(i=0;i<11;i++)
	{
		fprintf(fp,"%d %d %d %d %d %f\n",i+1,bowl[i].overs,bowl[i].runs,bowl[i].maiden,bowl[i].wickets,bowl[i].econ);
	}
	printf("\n Enter the data of the second batting team :");
		printf("\n Enter the extras in second innings:");
	scanf("%d",&extr2);
	for(i=0;i<11;i++)
	{
		printf("\n Enter 1 if batsmen[%d] batted and 0 if didn't bat:",i+1);
		scanf("%d",&chance);
		if(chance==0)
		{
			printf("\n Batsmen[%d] and lower down the order didn't get the opportunity to bat\n",i+1);
		    bats2[i].runs=-1;
		    break;
		}
		printf("\n Enter the number of runs made:");
		scanf("%d",&bats2[i].runs);
		printf("\n Enter the number of balls faced:");
		scanf("%d",&bats2[i].balls);
		printf("\n Enter the number of fours hit:");
		scanf("%d",&bats2[i].fours);
		printf("\n Enter the number of sixes hit:");
		scanf("%d",&bats2[i].sixes);
		bats2[i].strikerate=(float)bats2[i].runs*100/bats2[i].balls;
	}
	printf("\n Now enter the data of the bowling team:");
	for(i=0;i<11;i++)
	{
		printf("\n Enter 1 if player[%d] bowled and 0 if didn't bowl:",i+1);
		scanf("%d",&chance);
		if(chance==0)
		{
			printf("\n Captain used only %d bowling options\n",i);
			bowl2[i].overs=0;
		    break;
		}
		printf("\n Enter the number of overs bowled:");
		scanf("%d",&bowl2[i].overs);
		printf("\n Enter the number of runs hit to the bowler:");
		scanf("%d",&bowl2[i].runs);
		printf("\n Enter the number of maiden overs bowled:");
		scanf("%d",&bowl2[i].maiden);
		printf("\n Enter the number of wickets taken:");
		scanf("%d",&bowl2[i].wickets);
		bowl2[i].econ=(float)bowl2[i].runs/bowl2[i].overs;
	}
	
	for(i=0;i<11;i++)
	{
		fprintf(fp,"%d %d %d %d %d %f\n",i+1,bats2[i].runs,bats2[i].balls,bats2[i].fours,bats2[i].sixes,bats2[i].strikerate);
	}
	
	for(i=0;i<11;i++)
	{
		fprintf(fp,"%d %d %d %d %d %f\n",i+1,bowl2[i].overs,bowl2[i].runs,bowl2[i].maiden,bowl2[i].wickets,bowl2[i].econ);
	}
	printf("\n NEW record added successfully");
	fclose(fp);
    printf("\n Enter 1 to go to main menu and 0 to exit:");
	scanf("%d",&opt);
	if(opt==1)
		            menu();
    else
		            exit(-1);
}
void viewscoresheet()

{
	int i;
	
	printf("\n \t\t\t\t\t\t\tCRICKET SCORE SHEET\n\n\n\n");
	printf("\n Date of match is %s",date);
	printf("\n Match is played between %s in %s",match,place);
	
	printf("\n \t\t\t\t\t\t\t%s-BATTING\n",team1);
	printf("\n\n\t\t\t%s-%d/%d",team1,totalr(bats,extr1),totalw(bowl));
	printf("\n\n\nSR.NO\t\tRUNS\t\tBALLS\t\tFOURS\t\tSIXES\t\tSTRIKERATE\n\n");
     for(i=1;(i<=11&&(bats[i-1].runs!=-1));i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n",i,bats[i-1].runs,bats[i-1].balls,bats[i-1].fours,bats[i-1].sixes,bats[i-1].strikerate);
	}
	printf("\n Rest didn't bat:\n");
	printf("\nExtras:%d",extr1);
	printf("\n\n\n \t\t\t\t\t\t\t%s-BOWLING\n",team2);
	printf("\nSR.NO\t\tOVERS\t\tRUNS\t\tMAIDEN\t\tWICKETS\t\tECONOMY\n\n");
	
    for(i=0;i<11&&bowl[i].overs!=0;i++)
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n",i+1,bowl[i].overs,bowl[i].runs,bowl[i].maiden,bowl[i].wickets,bowl[i].econ);
	printf("\n Rest didn't bowl:");
	printf("\n\n \t\t\tFOR THE SECOND INNINGS\n");
	printf("\n \t\t\t\t\t\t\t%s-BATTING\n",team2);
	printf("\n\n\t\t\t%s-%d/%d",team2,totalr(bats2,extr2),totalw(bowl2));
	printf("\n\n\nSR.NO\t\tRUNS\t\tBALLS\t\tFOURS\t\tSIXES\t\tSTRIKERATE\n\n");
     for(i=1;(i<=11&&(bats2[i-1].runs!=-1));i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n",i,bats2[i-1].runs,bats2[i-1].balls,bats2[i-1].fours,bats2[i-1].sixes,bats2[i-1].strikerate);
	}
	printf("\n Rest didn't bat:\n");
	printf("\n Extras:%d",extr2);
	printf("\n\n\n \t\t\t\t\t\t\t%s-BOWLING\n",team1);
	
	printf("\nSR.NO\t\tOVERS\t\tRUNS\t\tMAIDEN\t\tWICKETS\t\tECONOMY\n\n");
	
    for(i=0;i<11&&bowl2[i].overs!=0;i++)
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n",i+1,bowl2[i].overs,bowl2[i].runs,bowl2[i].maiden,bowl2[i].wickets,bowl2[i].econ);
	printf("\n Rest didn't bowl:");
	if(totalr(bats,extr1)>totalr(bats2,extr2))
	       printf("\n%s wins",team1);
	else if(totalr(bats2,extr2)>totalr(bats,extr1))
	        printf("\n%s wins",team2);
	else
	        printf("\n Match ended in a draw");
	printf("\n Enter 1 to go to main menu and 0 to exit:");
	scanf("%d",&opt);
	if(opt==1)
		            menu();
    else
		            exit(-1);
}
int totalr(batsmen b[],int e)
{
	int i,sum=0;
	 for(i=1;(i<=11&&(b[i-1].runs!=-1));i++)
	{
		sum+=b[i-1].runs;
	}
    sum+=e;
	return sum;
}
int totalw(bowler b[])
{
	int i,sum=0;
	 for(i=0;i<11&&b[i].overs!=0;i++)
	      sum+=b[i].wickets;
	return sum;
}

