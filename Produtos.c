//Arquivo para manipulação dos dados

#include <stdio.h>
#include <stdlib.h>

void mediun_price(const char *arq) {
 
     FILE *fp = fopen(arq,"r");
    
     int i,div;
     float preco_atk_file[100],preco_var_file[100],quantidade_file[100],soma1,soma2,media_atk,media_var;

     if(!(fp)) {
            fputs("Erro ao abrir arquivo\n", stdout);
            exit(EXIT_FAILURE);
      }
      
      while(!feof(fp)){
		  fscanf(fp,"%f\t%f\t%f\n",&preco_atk_file[i],&preco_var_file[i],&quantidade_file[100]); 
		  i++;
		  div++;
		  }
      
      for(i=0;i<100;i++){
		  soma1+=preco_atk_file[i];
		  soma2+=preco_var_file[i];
		  }
		  
	media_atk = soma1/div;
	media_var = soma2/div;		
	
	printf("%f %f",media_atk,media_var);
	
	fclose(fp);
			  
}

void cheap_price_atacado(const char *arq){
	
	FILE *fp = fopen(arq,"rt");

     int i,div,j,k;
     float preco_atk_file[100],preco_var_file[100],quantidade_file[100],aux;

     if(!(fp)) {
            fputs("Erro ao abrir arquivo\n", stdout);
            exit(EXIT_FAILURE);
      }
      
      while(!feof(fp)){
			
		fscanf(fp,"%f\t%f\t%f\n",&preco_atk_file[i],&preco_var_file[i],&quantidade_file[100]);
		i++;
		div++;
	}

	for(i = 0; i <div; i++){		
        for (j = 0; j < div; j++){			
            if (preco_atk_file[i] < preco_atk_file[j]){
                        aux = preco_atk_file[i];
                        preco_atk_file[i] = preco_atk_file[j];
                        preco_atk_file[j] = aux;
                    }
                }
            }

            for (k =0; k <div;k++)
            {
                printf("Preço %d: %.2f\n",k+1,preco_atk_file[i]);                
            }
            
    fclose(fp);        
}

void cheap_price_varejo(const char *arq){
	
	FILE *fp = fopen(arq,"rt");

     int i,div,j,k;
     float preco_atk_file[100],preco_var_file[100],quantidade_file[100],aux;

     if(!(fp)) {
            fputs("Erro ao abrir arquivo\n", stdout);
            exit(EXIT_FAILURE);
      }
      
      while(!feof(fp)){
			
		fscanf(fp,"%f\t%f\t%f\n",&preco_atk_file[i],&preco_var_file[i],&quantidade_file[100]);
		i++;
		div++;
	}

	for(i = 0; i <div; i++){		
        for (j = 0; j < div; j++){			
            if (preco_var_file[i] < preco_var_file[j]){			
                        aux = preco_atk_file[i];
                        preco_var_file[i] = preco_var_file[j];
                        preco_var_file[j] = aux;
                    }
                }
            }

            for (k =0; k<div;k++)
            {
                printf("Preço %d: %.2f\n",k+1,preco_var_file[i]);                
            }
		fclose(fp);
}



	
