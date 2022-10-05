#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	int id1,id2;
	int matris[5][5];
	int *p = &matris[0][0];
	int counter=1,multi=1,sum=0,temp;
	
	
	for (id1=0;id1<5;id1++){
		for(id2=0;id2<5;id2++){
			matris[id1][id2]=1+rand()%5;
		}
	}
	
		printf("\n\n\n");
		

	
	for(int i=0;i<25;i++){
		printf(" %d ",*(p));
		sum+=*(p);//sum of elements
		counter++;
		if(i%6==0){//product of diagonals
			
			multi*=*(p);
		}
		if(counter%6==0){
			counter=1;
			printf("\n");
		}
		
		p++;
	}
	
	printf("\n");
	p = &matris[0][0];
	
    for (int i = 0 ; i < 24; i++)
  {
    for (int j= 0 ; j < 24-i; j++)
    {
      if (*(p+j) > *(p+j+1))
      {
        temp         = *(p+j);
        *(p+j)   = *(p+j+1);
        *(p+j+1) = temp;
      }
    }
  }
  
    printf("product of diagonals:%d\n",multi);
	printf("sum of elements:%d\n\n",sum);
  
    printf("sorted out:\n\n");
    for(int i=0;i<25;i++){
		printf(" %d ",*(p));
		counter++;
		if(counter%6==0){
			counter=1;
			printf("\n");
		}
		
		p++;
	}	
	return 0;
	}
