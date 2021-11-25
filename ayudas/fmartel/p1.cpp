#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1=0;
	int num2=0;
	int* val = (int*) calloc(1000000, sizeof(int));// si agrego el 0 para que no de error de memoria el codigo no hace nada
	
	while(scanf("%d %d",&num1,&num2) != EOF){
		printf("%d %d ",num1,num2);
		int carry=0;
		if(num1>=num2){
			int porter=num2;
			num2=num1;
			num1=porter;
		}	
		for (int i = 0; i < 10; ++i){
			printf("%d\n", val[i]);
		}	
		for(num1;num1!=num2+1;num1++){
			int counter=1;
			
			if(val[num1]!=0){
				counter=val[num1];
			}
			else{
				int numx=num1;
				while(numx!=1){
					counter++;
					if((numx+1)%2==0){numx=3*numx+1;}
					else numx/=2;		
				}
				val[numx]=counter;
			}
			
			if(carry<counter){carry=counter;}
		}
		printf("%d\n",carry);
	}

	return 0;
}
