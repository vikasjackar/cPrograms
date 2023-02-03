#include <stdio.h>

int main(void) {
    int a,bc,ma,rm,eb;
    char str[12];
    scanf("%d",&a);
	while(a--){
	    for(int i=0;i<4;i++){
    	    scanf("%s",&str);
    	    if(str[0] == 'B'){
    	        scanf("%d",&bc);
    	    }
    	    else if(str[0] == 'M'){
    	        scanf("%d",&ma);
    	    }
    	    else if(str[0] == 'R'){
    	        scanf("%d",&rm);
    	    }
    	    else if(str[0] == 'E'){
    	        scanf("%d",&eb);
    	    }
    	    
	    }
    	if(bc>eb && rm<ma){
    	    printf("Barcelona\n");
    	}
    	else{
    	    printf("RealMadrid\n");
    	}
	}
	return 0;
}

