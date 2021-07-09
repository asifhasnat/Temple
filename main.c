#include <stdio.h>

int main(void) {
	// your code goes here
	int s;
	scanf("%d",&s);
	while(s--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    if(a[0]==1&&a[n-1]==1){
	       int i=1;
	       int j=n-2;
	       while(i<=j){
	           if((a[i]==a[j])&&(a[i]==(a[i-1]+1))){ i++;j--;} 
	           
	           else
	           {printf("no\n");
	           break; } 
	    }
	    printf("yes\n"); }
	    else printf("no\n"); }
	return 0;
}
