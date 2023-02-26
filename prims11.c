#include<stdio.h>
#define MAX 10
int main()
{
	int cost_matrix[MAX][MAX];
	int min_cost=0;
	int sum_cost=0;
	int vertex_array[MAX],visited[MAX]={0},count=1,counter,edge_count=0,vertex_count=0,vertex1,vertex2,row,col,row_no,col_no;
	printf("Enter no.of  vertices:");
	scanf("%d",&vertex_count);
	printf("vertices are:\n");
	for(counter=1;counter<=vertex_count;counter++)
	{
		printf("vertex[%d]:",counter);
		scanf("%d",&vertex_array[counter]);
	}
	printf("Enter MAtrix\nFormat is :\n");
	for(row=1;row<=vertex_count;row++)
	{
		for(col=1;col<=vertex_count;col++)
		{
			printf("x\t");
		}
		printf("\n");
	}
	printf("Elements are:");
	for(row=1;row<=vertex_count;row++)
        {       
                for(col=1;col<=vertex_count;col++)
                { 
			scanf("%d",&cost_matrix[row][col]);
			if(cost_matrix[row][col]==0)
			{
				cost_matrix[row][col]=999;
			}
		}
	}
	visited[1]=1;
	edge_count=vertex_count-1;
	while(count<=edge_count)
	{
		for(row=1,min_cost=999;row<=vertex_count;row++)
        	{
                	for(col=1;col<=vertex_count;col++)
                	{
				if(cost_matrix[row][col]<min_cost)
				{
					if(visited[row]!=0)
					{
						min_cost=cost_matrix[row][col];
						vertex1=row_no=row;
						vertex2=col_no=col;
					}
				}
			}
		}
		if(visited[row_no]==0 || visited[col_no]==0)
		{
			printf("edge %d (%d <- %d): %d\n",count++,vertex_array[vertex1],vertex_array[vertex2],min_cost);
			sum_cost=sum_cost+min_cost;
			visited[col_no]=1;
		}
		cost_matrix[vertex1][vertex2]=cost_matrix[vertex2][vertex1]=999;
	}
	printf("minimum cost:%d\n",sum_cost);
	return 0;
}
