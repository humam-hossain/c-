#include <stdio.h>

int main()
{
	int p, i;
	float sum = 0;
	
	scanf("%d", &p);
	
	p -= 5;
	
	if(p < 0){
		sum += 0.3 * (5+p);
		
	}else{
		sum += 0.3 * 5;
		p -= 30;
		
		if(p < 0){
			sum += 0.5 * (30 + p);
		}else{
			sum += 0.5 * 30;
			p -= 60;
			
			if(p < 0){
				sum += 0.75 * (60 + p);
			}else{
				sum += 0.75 * 60 + p;
			}
		}
	}
	
	sum = sum * 1.15;
	
	printf("%f", sum);
	
	return 0;
}
