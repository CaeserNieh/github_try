#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N  710
int n;
struct point
{
	int x,y;
}p[N];

int in_line(int p_i,int q_i,int c)
{
	int point_number = 0;
	int i;
	for(i = c+1;i<n;i++)
	{
		if(p_i*(p[i].y - p[c].y) == q_i*(p[i].x-p[c].x))
		{
			point_number++;
		}
	}
	return point_number;
}

int s_problem()
{
	int max = 2;
	int i,j;
	for(i = 0;i<=n;i++)
	{
		for(j = i+1;j<n;j++)
		{
			int cur = in_line((p[j].x - p[i].x),(p[j].y - p[i].y),j) + 2;
			if(cur>max)
			{
				max = cur;
			}
		}
	}
	return max;
}

int main(void)
{
	int  input;
	scanf("%d",&input);
	getchar();
	getchar();
	while(input--)
	{
		char str[100];
		n = 0;
		while(1)
		{
			if(!gets(str))
			{
				break;
			}
			if(strcmp(str,""))
			{
				break;
			}
			sscanf(str,"%d%d",&p[n].x,&p[n].y);
			n++;
		}
		printf("%d\n",s_problem());
		if(input)
		{
			printf("\n");
		}
	}
	return 0;
}