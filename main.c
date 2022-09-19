#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char gabarito[10]={'b','c','d','e','a','b','d','e','c','a'},resposta[10];
	int RA,i=0,acertos,cont=0;
	
	    
		do{
			printf("\nDigite sua RA:");
	        scanf("%d",&RA);
	         
	         if(RA != 0){
			 
			for(i=0;i<10;i++){
		printf("\nDigite a resposta da %d questao:",i+1);
		scanf(" %c",&resposta[i]);
		
		if(gabarito[i]==resposta[i]){
				cont++;
		  }
	    }
	    printf("\nO Aluno %d teve %d ACERTOS!",RA,cont);
	
	    if(cont>=7)
	    {
	    	printf("Aprovado");
		}
		if(cont<=5)
		{
			printf("Reporvado!");
		}
		if(cont>5 && cont<7)
		{
			printf("Exame!");
		}
		cont=0;
     }
	 else
	 {
	 	printf("Ate mais!");
		 }	
		}while(RA != 0);
	
}

