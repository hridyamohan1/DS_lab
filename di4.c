#include<stdio.h>
#define INFINITY 9999
#define MAX 10
void dijk(int G[MAX][MAX],int n,int startnode);
int i,j,G[MAX][MAX],u,n;
int main()
{
	printf("enter no.of vertices:");
	scanf("%d",&n);
	printf("Enter adjacency matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
	printf("Enter starting node:");
	scanf("%d",&u);
	dijk(G,n,u);
}
void dijk(int G[MAX][MAX],int n,int startnode)
{
	int count,cost[MAX][MAX],j,distance[MAX],pred[MAX],visited[MAX],mindistance,nextnode,i;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(G[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=G[i][j];
	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	distance[startnode]=0;
	visited[startnode]=1;
	count=1;
	while(count<n-1)
	{
		mindistance=INFINITY;
		for(i=0;i<n;i++)
			if(distance[i]<mindistance &&! visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
		visited[nextnode]=1;
		for(i=0;i<n;i++)
			if(!visited[i])
				if(mindistance+cost[nextnode][i]<distance[i])
				{
					distance[i]=mindistance+cost[nextnode][i];
					pred[i]=nextnode;
				}
		count++;
	}
	for(i=0;i<n;i++)
		if(i!=startnode)
		{
			printf("\nDistance of node %d:%d\n",i,distance[i]);
			printf("Path:%d",i);
			j=i;
			do
			{
				j=pred[j];
				printf("<-%d",j);
			}while(j!=startnode);
		}
}
