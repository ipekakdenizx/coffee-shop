#include <stdio.h>
int main()
{
	int coffee, size, sugar;
	float sum, sum2;
	
	printf("Coffee 1 Latte\n Coffee 2 Mocha\n Coffee 3 Ice Chocalate Mocha");
	printf("\n Choose a coffee.");
	scanf("%d",&coffee);
	
	switch(coffee){
		case 1:
			printf("Choose a size: 1.Tall 2.Grande 3.Venti");
			scanf("%d",size);
			if(size==1){
				sum=3*1.25;
			} else if(size==2){
				sum=3*1.5;
			} else if(size==3){
				sum=3*2;
			}
			printf("Price:%f",sum);
			break;
		
		case 2:
		printf("Choose a size: 1.Tall 2.Grande 3.Venti");
		scanf("%d",&size);
		if(size==1){
			sum=4;
		}  else if(size==2){
			sum=4*1.25;
		}  else if(size==3){
			sum=4*1.5;
		}	printf("Price:%f",sum);
		break;
		
		case 3:
			printf("Choose a size: 1.Tall 2.Grande 3.Venti");
			scanf("%d",&size);
			if(size==1){
				sum=10;
			} else if(size==2){
				sum=10*1.25;
			} else if(size==3){
				sum=10*1.5;
			} printf("Price:%f",sum);
			break;
	}    
	printf("\n Do you want sugar:\n 1.Yes\n 2.No");
	scanf("%d",&sugar);
	if(sugar==1){
		sum2=sum+1;
		printf("New price:%f",sum2);
	} else if(sugar==2){
		printf("Price:%f",sum);
	}
	
	return 0;
}
