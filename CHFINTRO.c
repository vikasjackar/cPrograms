#include <stdio.h>

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int r;
	scanf("%d",&r);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
	  if(a[i]>=r)
	  printf("Good boi\n");
	  else
	  printf("Bad boi\n");
	}
	return 0;
}
