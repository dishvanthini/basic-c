#include<stdio.h>
int main(){
	int t;
	printf("test case :");
	scanf("%d",&t);
	while(t--)
{
		int a[10],b[10],c[10],n,i;
	    printf("\nn:");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("a[%d] element :",i+1);
			scanf("%d",&a[i]);
		}
			for(i=0;i<n;i++){
			printf("b[%d] element :",i+1);
			scanf("%d",&b[i]);
		}
		
		for(i=0;i<n;i++){
			printf("%d + ",a[i]);
			printf("%d ",b[i]);
			c[i]=a[i]+b[i];
			printf("=%d\n",c[i]);
			
		}

			
	}
	return 0;
}
ar
