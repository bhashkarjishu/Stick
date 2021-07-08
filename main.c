#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,t;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i]<a[j])
	            {
	                t=a[i];
	                a[i]=a[j];
	                a[j]=t;
	            }
	        }
	    }
	    int c[3];
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==a[i+1])
	        {k=k+1;
	       c[k] =a[i];
	            i=i+1;
	        }
	    
	    if(k==2)
	    {
	        break;
	    }
	}
	    if(k!=2)
	    {
	        printf("-1\n");
	    }
	    else
	    {
	        printf("%d\n",c[1]*c[2]);
	            }
	}
	return 0;
}

