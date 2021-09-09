unsigned int randaux()
{
	static long seed = 1;
	return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int tabuleiro[24] = {-2,0,0,0,0,5,   0,3,0,0,0,-5,   5,0,0,0,-3,0,   -5,0,0,0,0,2};
int barra[2] = { 0,0 };
int retiradas[2] = { 0,0 };

void tabuleirox(){
	
	char tabs[120];
    char barrax[5];
    char barrao[5];
    int linha=0;
    int i=0;
    int j=0;
  
while(linha<5){

    for(i; i<24; i++){
        
    if(tabuleiro[i]==0 && linha==0){
        tabs[j]='_';
	j=j+1;
    	};

    if(tabuleiro[i]==0 && linha>0){
        tabs[j]='.';
	j=j+1;
    	};

    if(abs(tabuleiro[i])>0 && linha>=abs(tabuleiro[i])){
        tabs[j]='.';
	j=j+1;
    	};

    if(tabuleiro[i]>0 && linha<abs(tabuleiro[i])){
        tabs[j]='x';
	j=j+1;
    	};

    if(tabuleiro[i]<0 && linha<abs(tabuleiro[i])){
        tabs[j]='o';
	j=j+1;
    	};
    };

        
    linha=linha+1;
    i=0;

    };

//barra

        if(barra[0]==0){
    for(i=0;i<5;i++){
        barrax[i]='\0';
        };
        barrax[0]='_';
		for(i=1;i<5;i++){
		barrax[i]='.';	
		};
        };

        if(barra[0]>0){
    for(i=0;i<5;i++){
        if(i<barra[0]){
        barrax[i]='x';}else{
    barrax[i]='.';};
            };
        };

     if(barra[1]==0){
    for(i=0;i<5;i++){
        barrao[i]='\0';
        };
        barrao[0]='_';
		for(i=1;i<5;i++){
		barrao[i]='.';	
		};
        };

        if(barra[1]>0){
    for(i=0;i<5;i++){
        if(i<barra[1]){
        barrao[i]='o';}else{
    barrao[i]='.';};
            };
        };
	

    printf("\n[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ] o >> ",tabs[12],tabs[13],tabs[14],tabs[15],tabs[16],tabs[17],barrax[0],tabs[18],tabs[19],tabs[20],tabs[21],tabs[22],tabs[23]);
    if(retiradas[1]>0){	for(i=0;i<retiradas[1];i++){
    printf("o");
    };}else{printf("_");};
    printf("\n[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[36],tabs[37],tabs[38],tabs[39],tabs[40],tabs[41],barrax[1],tabs[42],tabs[43],tabs[44],tabs[45],tabs[46],tabs[47]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[60],tabs[61],tabs[62],tabs[63],tabs[64],tabs[65],barrax[2],tabs[66],tabs[67],tabs[68],tabs[69],tabs[70],tabs[71]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[84],tabs[85],tabs[86],tabs[87],tabs[88],tabs[89],barrax[3],tabs[90],tabs[91],tabs[92],tabs[93],tabs[94],tabs[95]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[108],tabs[109],tabs[110],tabs[111],tabs[112],tabs[113],barrax[4],tabs[114],tabs[115],tabs[116],tabs[117],tabs[118],tabs[119]);
    printf("\n");
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[107],tabs[106],tabs[105],tabs[104],tabs[103],tabs[102],barrao[4],tabs[101],tabs[100],tabs[99],tabs[98],tabs[97],tabs[96]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[83],tabs[82],tabs[81],tabs[80],tabs[79],tabs[78],barrao[3],tabs[77],tabs[76],tabs[75],tabs[74],tabs[73],tabs[72]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[59],tabs[58],tabs[57],tabs[56],tabs[55],tabs[54],barrao[2],tabs[53],tabs[52],tabs[51],tabs[50],tabs[49],tabs[48]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[35],tabs[34],tabs[33],tabs[32],tabs[31],tabs[30],barrao[1],tabs[29],tabs[28],tabs[27],tabs[26],tabs[25],tabs[24]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ] x >> ",tabs[11],tabs[10],tabs[9],tabs[8],tabs[7],tabs[6],barrao[0],tabs[5],tabs[4],tabs[3],tabs[2],tabs[1],tabs[0]);
    if(retiradas[0]>0){	for(i=0;i<retiradas[0];i++){
    printf("x");
    };}else{printf("_");};
	

}



void tabuleiroo(){
	
	char tabs[120];
    char barrax[5];
    char barrao[5];
    int linha=0;
    int i=0;
    int j=0;
  
while(linha<5){

    for(i; i<24; i++){
        
    if(tabuleiro[i]==0 && linha==0){
        tabs[j]='_';
	j=j+1;
    	};

    if(tabuleiro[i]==0 && linha>0){
        tabs[j]='.';
	j=j+1;
    	};

    if(abs(tabuleiro[i])>0 && linha>=abs(tabuleiro[i])){
        tabs[j]='.';
	j=j+1;
    	};

    if(tabuleiro[i]>0 && linha<abs(tabuleiro[i])){
        tabs[j]='x';
	j=j+1;
    	};

    if(tabuleiro[i]<0 && linha<abs(tabuleiro[i])){
        tabs[j]='o';
	j=j+1;
    	};
    };

        
    linha=linha+1;
    i=0;

    };

//barra

        if(barra[0]==0){
    for(i=0;i<5;i++){
        barrax[i]='\0';
        };
        barrax[0]='_';
		for(i=1;i<5;i++){
		barrax[i]='.';	
		};
        };

        if(barra[0]>0){
    for(i=0;i<5;i++){
        if(i<barra[0]){
        barrax[i]='x';}else{
    barrax[i]='.';};
            };
        };

     if(barra[1]==0){
    for(i=0;i<5;i++){
        barrao[i]='\0';
        };
        barrao[0]='_';
		for(i=1;i<5;i++){
		barrao[i]='.';	
		};
        };

        if(barra[1]>0){
    for(i=0;i<5;i++){
        if(i<barra[1]){
        barrao[i]='o';}else{
    barrao[i]='.';};
            };
        };
	
	
	printf("\n[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ] x >> ",tabs[11],tabs[10],tabs[9],tabs[8],tabs[7],tabs[6],barrao[0],tabs[5],tabs[4],tabs[3],tabs[2],tabs[1],tabs[0]);
	if(retiradas[0]>0){	for(i=0;i<retiradas[0];i++){
    printf("x");
    };}else{printf("_");};
	printf("\n[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[35],tabs[34],tabs[33],tabs[32],tabs[31],tabs[30],barrao[1],tabs[29],tabs[28],tabs[27],tabs[26],tabs[25],tabs[24]);
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[59],tabs[58],tabs[57],tabs[56],tabs[55],tabs[54],barrao[2],tabs[53],tabs[52],tabs[51],tabs[50],tabs[49],tabs[48]);
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[83],tabs[82],tabs[81],tabs[80],tabs[79],tabs[78],barrao[3],tabs[77],tabs[76],tabs[75],tabs[74],tabs[73],tabs[72]);
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[107],tabs[106],tabs[105],tabs[104],tabs[103],tabs[102],barrao[4],tabs[101],tabs[100],tabs[99],tabs[98],tabs[97],tabs[96]);
	printf("\n");
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[108],tabs[109],tabs[110],tabs[111],tabs[112],tabs[113],barrax[4],tabs[114],tabs[115],tabs[116],tabs[117],tabs[118],tabs[119]);
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[84],tabs[85],tabs[86],tabs[87],tabs[88],tabs[89],barrax[3],tabs[90],tabs[91],tabs[92],tabs[93],tabs[94],tabs[95]);
	printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[60],tabs[61],tabs[62],tabs[63],tabs[64],tabs[65],barrax[2],tabs[66],tabs[67],tabs[68],tabs[69],tabs[70],tabs[71]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ]\n",tabs[36],tabs[37],tabs[38],tabs[39],tabs[40],tabs[41],barrax[1],tabs[42],tabs[43],tabs[44],tabs[45],tabs[46],tabs[47]);
    printf("[ %c %c %c %c %c %c ] %c [ %c %c %c %c %c %c ] o >> ",tabs[12],tabs[13],tabs[14],tabs[15],tabs[16],tabs[17],barrax[0],tabs[18],tabs[19],tabs[20],tabs[21],tabs[22],tabs[23]);
    if(retiradas[1]>0){	for(i=0;i<retiradas[1];i++){
    printf("o");
    };}else{printf("_");};


}

void jogadorx(){
  
    int jogadas;
	
    //dice roll
    
 
        randaux();
       int dado1 = 1 + randaux() % 6;
        randaux();
       int dado2 = 1 + randaux() % 6;
    
    int dado3;
    int dado4;
 
    if(dado1==dado2){
        dado3=dado1;
        dado4=dado2;
		jogadas=4;
		}else{
			jogadas=2;
		};
		
		
	while(jogadas>0 && retiradas[0]<15){
	
	tabuleirox();
	
	if(jogadas==4){printf("\nDados: %d %d %d %d\n", dado1, dado2, dado3, dado4);};
	if(jogadas==3){printf("\nDados: %d %d %d\n", dado1, dado2, dado3);};
	if(jogadas==2){printf("\nDados: %d %d\n", dado1, dado2);};
	if(jogadas==1){printf("\nDados: %d\n", dado1);};
    
	int i, j;
    int opcao=1;
    int verifjo;
	
	// show options
	
	    verifjo=0;
    for(j=0;j<6;j++){
        if(tabuleiro[j]>=0){
            verifjo=verifjo+tabuleiro[j];
        };
    };
    
    verifjo=verifjo+retiradas[0];

    printf("Lances: ");
    
    if(verifjo==15){    //all pieces can go out
        if(dado1==dado2){
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(i-dado1<0){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i-dado1>=0){
						if(tabuleiro[i-dado1]>=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
                    };
            
                };
            };
        }else{
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(dado1>dado2){
                        if(i-dado1<0){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i-dado1>=0){
                    if(tabuleiro[i-dado1]>=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
                    };
                    if(i-dado2>=0){
                    if(tabuleiro[i-dado2]>=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado2]==-1){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                    opcao=opcao+1;
						};
                    };
                    };
                    if(dado1<dado2){
                    if(i-dado1>=0){
                    if(tabuleiro[i-dado1]>=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                    opcao=opcao+1;
						};
                    };
                    if(i-dado2<0){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i-dado2>=0){
                    if(tabuleiro[i-dado2]>=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                    opcao=opcao+1;
						};
                    };
                    };
                    
            
                };
            };
        };
    opcao=1;
    };
        
    
    
if(barra[0]>0){ // how many pieces on the bar
    opcao=1;
        if(dado1==dado2){
            if(tabuleiro[24-dado1]>=0){
            printf("[%d:barra>%d]; ",opcao,25-dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado1]==-1){
            printf("[%d:barra>%d]; ",opcao,25-dado1);
            opcao=opcao+1;
            };
        }else{
            if(tabuleiro[24-dado1]>=0){    
            printf("[%d:barra>%d]; ",opcao,25-dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado2]>=0){
            printf("[%d:barra>%d]; ",opcao,25-dado2);
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado1]==-1){
            printf("[%d:barra>%d]; ",opcao,25-dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado2]==-1){
            printf("[%d:barra>%d]; ",opcao,25-dado2);
            opcao=opcao+1;
            };
        };
    };
    
    
    
if(verifjo<15 && barra[0]==0){
    opcao=1;
if(dado1==dado2){
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(tabuleiro[i-dado1]>=0){
                        if(i-dado1>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado1]==-1){
                        if(i+dado1>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                            opcao=opcao+1;
                        };
                    };
                };
                
            };
        }else{
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(tabuleiro[i-dado1]>=0){
                        if(i-dado1>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                            opcao=opcao+1;
                        };
                    
                    };
                    if(tabuleiro[i-dado2]>=0){
                        if(i-dado2>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                        opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado1]==-1){
                        if(i-dado1>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado1+1);
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado2]==-1){
                        if(i-dado2>=0){
                            printf("[%d:%d>%d]; ",opcao,i+1,i-dado2+1);
                            opcao=opcao+1;
                        };
                    };
                };
            };
        };
};

		// chose option
		
		int escolha;
		
		printf("\nJogada x: ");
		scanf("%d",&escolha);
		
if(verifjo==15){    //all pieces can go out
        if(dado1==dado2 || jogadas==1){
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(i-dado1<0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;retiradas[0]=retiradas[0]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
                    };
                    if(i-dado1>=0){
						if(tabuleiro[i-dado1]>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
            
                };
            };
        }else{
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(dado1>dado2){
                        if(i-dado1<0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;retiradas[0]=retiradas[0]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
                    };
                    if(i-dado1>=0){
                    if(tabuleiro[i-dado1]>=0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
                    if(i-dado2>=0){
                    if(tabuleiro[i-dado2]>=0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado2]==-1){
							if(opcao=escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
                    };
                    };
                    if(dado1<dado2){
                    if(i-dado1>=0){
                    if(tabuleiro[i-dado1]>=0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado1]==-1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
                    if(i-dado2<0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;retiradas[0]=retiradas[0]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
                    };
                    if(i-dado2>=0){
                    if(tabuleiro[i-dado2]>=0){
						if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i-dado2]==-1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
                    };
                    };
                    
            
                };
            };
        };
    opcao=1;
    };
        
    
    
if(barra[0]>0){ // how many pices on the bar
    opcao=1;
        if(dado1==dado2 || jogadas==1){
            if(tabuleiro[24-dado1]>=0){
				if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]+1;barra[0]=barra[0]-1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado1]==-1){
				if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]+2;barra[0]=barra[0]-1;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
        }else{
            if(tabuleiro[24-dado1]>=0){
				if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]+1;barra[0]=barra[0]-1;jogadas=jogadas-1;dado1=dado2;};				
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado2]>=0){
				if(opcao==escolha){tabuleiro[dado2]=tabuleiro[dado2]+1;barra[0]=barra[0]-1;jogadas=jogadas-1;};
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado1]==-1){
				if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]+2;barra[0]=barra[0]-1;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
            if(tabuleiro[24-dado2]==-1){
				if(opcao==escolha){tabuleiro[dado2]=tabuleiro[dado2]+2;barra[0]=barra[0]-1;barra[1]=barra[1]+1;jogadas=jogadas-1;};
            opcao=opcao+1;
            };
        };
    };
    
    
    
if(verifjo<15 && barra[0]==0){
    opcao=1;
if(dado1==dado2|| jogadas==1){
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(tabuleiro[i-dado1]>=0){
                        if(i-dado1>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado1]==-1){
                        if(i+dado1>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                };
                
            };
        }else{
            for(i=23;i>=0;i--){
                if(tabuleiro[i]>0){
                    if(tabuleiro[i-dado1]>=0){
                        if(i-dado1>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    
                    };
                    if(tabuleiro[i-dado2]>=0){
                        if(i-dado2>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+1;jogadas=jogadas-1;};
                        opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado1]==-1){
                        if(i-dado1>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado1]=tabuleiro[i-dado1]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i-dado2]==-1){
                        if(i-dado2>=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]-1;tabuleiro[i-dado2]=tabuleiro[i-dado2]+2;barra[1]=barra[1]+1;jogadas=jogadas-1;};
                            opcao=opcao+1;
                        };
                    };
                };
            };
        };
if(retiradas[0]==15){jogadas=0;};
};
	
    };
	

}

void jogadoro(){
  
    int jogadas;
	
    //dice rolling
    
        randaux();
       int dado1 = 1 + randaux() % 6;
        randaux();
       int dado2 = 1 + randaux() % 6;
    
    int dado3;
    int dado4;
 
    if(dado1==dado2){
        dado3=dado1;
        dado4=dado2;
		jogadas=4;
		}else{
			jogadas=2;
		};
		
		
	while(jogadas>0 && retiradas[1]<15){
	
	tabuleiroo();
	
	if(jogadas==4){printf("\nDados: %d %d %d %d\n", dado1, dado2, dado3, dado4);};
	if(jogadas==3){printf("\nDados: %d %d %d\n", dado1, dado2, dado3);};
	if(jogadas==2){printf("\nDados: %d %d\n", dado1, dado2);};
	if(jogadas==1){printf("\nDados: %d\n", dado1);};
    
	int i, j;
    int opcao=1;
    int verifjo;
	
	// show optons
	
	verifjo=0;
    for(j=18;j<24;j++){
        if(tabuleiro[j]<=0){
            verifjo=verifjo+tabuleiro[j];
        };
    };
    
    verifjo=abs(verifjo)+retiradas[1];
    //printf("%d",verifjo);

    printf("Lances: ");
    
    if(verifjo==15){    //all pieces can go out
	    opcao=1;
        if(dado1==dado2){
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(i+dado1>23){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i+dado1<24){
						if(tabuleiro[i+dado1]<=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
                    printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
                    };
            
                };
            };
        }else{
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(dado1>dado2){
                        if(i+dado1>23){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i+dado1<24){
					if(tabuleiro[i+dado1]<=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
                    printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
                    };
                    if(i+dado2<24){
					if(tabuleiro[i+dado2]<=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado2]==1){
                    printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
                    };
					};
                    if(dado1<dado2){
                    if(i+dado1<24){
					if(tabuleiro[i+dado1]<=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
                    printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
                    };
                    if(i+dado2>23){
                    printf("[%d:%d>saida]; ",opcao,i+1);
                    opcao=opcao+1;
                    };
                    if(i+dado2<24){
					if(tabuleiro[i+dado2]<=0){
							printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado2]==1){
                    printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                    opcao=opcao+1;
						};
                    };
                    };
                    
            
                };
            };
        };
    };
	
     
    
    
if(barra[0]>0){ // how many pices ar on the bar
    opcao=1;
        if(dado1==dado2){
            if(tabuleiro[dado1]<=0){
            printf("[%d:barra>%d]; ",opcao,dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[dado1]==1){
            printf("[%d:barra>%d]; ",opcao,dado1);
            opcao=opcao+1;
            };
        }else{
            if(tabuleiro[dado1]<=0){    
            printf("[%d:barra>%d]; ",opcao,dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[dado2]<=0){
            printf("[%d:barra>%d]; ",opcao,dado2);
            opcao=opcao+1;
            };
            if(tabuleiro[dado1]==1){
            printf("[%d:barra>%d]; ",opcao,dado1);
            opcao=opcao+1;
            };
            if(tabuleiro[dado2]==1){
            printf("[%d:barra>%d]; ",opcao,dado2);
            opcao=opcao+1;
            };
        };
    };
    
    
    
if(verifjo<15 && barra[0]==0){
    opcao=1;
if(dado1==dado2){
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(tabuleiro[i+dado1]<=0){
                        if(i+dado1<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado1]==1){
                        if(i+dado1<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                            opcao=opcao+1;
                        };
                    };
                };
                
            };
        }else{
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(tabuleiro[i+dado1]<=0){
                        if(i+dado1<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                            opcao=opcao+1;
                        };
                    
                    };
                    if(tabuleiro[i+dado2]<=0){
                        if(i+dado2<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado2+1);
                        opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado1]==1){
                        if(i+dado1<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado1+1);
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado2]==1){
                        if(i+dado2<24){
                            printf("[%d:%d>%d]; ",opcao,i+1,i+dado2+1);
                            opcao=opcao+1;
                        };
                    };
                };
            };
        };
};
	
			// choose options
		
		int escolha;
		
		printf("\nJogada o: ");
		scanf("%d",&escolha);
    
    if(verifjo==15){    //all pices can go out
	    opcao=1;
        if(dado1==dado2 || jogadas==1){
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(i+dado1>23){
					if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;retiradas[1]=retiradas[1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
                    };
                    if(i+dado1<24){
						if(tabuleiro[i+dado1]<=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
            
                };
            };
        }else{
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(dado1>dado2){
                        if(i+dado1>23){
					if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;retiradas[1]=retiradas[1]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
                    };
                    if(i+dado1<24){
					if(tabuleiro[i+dado1]<=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
                    if(i+dado2<24){
					if(tabuleiro[i+dado2]<=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado2]==1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
                    };
					};
                    if(dado1<dado2){
                    if(i+dado1<24){
					if(tabuleiro[i+dado1]<=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado1]==1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
                    opcao=opcao+1;
						};
                    };
                    if(i+dado2>23){
					if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;retiradas[1]=retiradas[1]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
                    };
                    if(i+dado2<24){
					if(tabuleiro[i+dado2]<=0){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
						if(tabuleiro[i+dado2]==1){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;};
                    opcao=opcao+1;
						};
                    };
                    };
                    
            
                };
            };
        };
    };
        
    
    
if(barra[1]>0){ // how many pices on the bar
    opcao=1;
        if(dado1==dado2 || jogadas==1){
            if(tabuleiro[dado1]<=0){
			if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]-1;barra[1]=barra[1]-1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
            if(tabuleiro[dado1]==1){
			if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]-2;barra[1]=barra[1]-1;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
        }else{
            if(tabuleiro[dado1]<=0){
			if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]-1;barra[1]=barra[1]-1;jogadas=jogadas-1;dado1=dado2;};				
            opcao=opcao+1;
            };
            if(tabuleiro[dado2]<=0){
			if(opcao==escolha){tabuleiro[dado2]=tabuleiro[dado2]-1;barra[1]=barra[1]-1;jogadas=jogadas-1;};
            opcao=opcao+1;
            };
            if(tabuleiro[dado1]==1){
			if(opcao==escolha){tabuleiro[dado1]=tabuleiro[dado1]-2;barra[1]=barra[1]-1;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
            opcao=opcao+1;
            };
            if(tabuleiro[dado2]==1){
			if(opcao==escolha){tabuleiro[dado2]=tabuleiro[dado2]-2;barra[1]=barra[1]-1;barra[0]=barra[0]+1;jogadas=jogadas-1;};
            opcao=opcao+1;
            };
        };
    };
    
    
    
if(verifjo<15 && barra[0]==0){
    opcao=1;
if(dado1==dado2 || jogadas==1){
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(tabuleiro[i+dado1]<=0){
                        if(i+dado1<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado1]==1){
                        if(i+dado1<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                };
                
            };
        }else{
            for(i=0;i<24;i++){
                if(tabuleiro[i]<0){
                    if(tabuleiro[i+dado1]<=0){
                        if(i+dado1<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    
                    };
                    if(tabuleiro[i+dado2]<=0){
                        if(i+dado2<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-1;jogadas=jogadas-1;};
							opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado1]==1){
                        if(i+dado1<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado1]=tabuleiro[i+dado1]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;dado1=dado2;};
                            opcao=opcao+1;
                        };
                    };
                    if(tabuleiro[i+dado2]==1){
                        if(i+dado2<24){
							if(opcao==escolha){tabuleiro[i]=tabuleiro[i]+1;tabuleiro[i+dado2]=tabuleiro[i+dado2]-2;barra[0]=barra[0]+1;jogadas=jogadas-1;};
                            opcao=opcao+1;
                        };
                    };
                };
            };
        };
	if(retiradas[1]==15){jogadas=0;};
};
};
	
	}

int main(){

int comeca;
scanf("%d",&comeca);

if(comeca<999){

while(retiradas[0]<15 && retiradas[1]<15){
	
	jogadorx();
	if(retiradas[0]<15 && retiradas[1]<15){
	jogadoro();};
	
};
int verx;
int vero;
int i;


vero=15-retiradas[1];
verx=15-retiradas[0];
	

if(retiradas[0]==15){
	if(retiradas[1]>0 && vero<15){printf("Ganhou x com 1 pontos (vitoria)");};
	if(retiradas[1]==0 && vero>0){printf("Ganhou x com 3 pontos (vitoria)");};
	if(retiradas[1]==0 && vero<15){printf("Ganhou x com 2 pontos (vitoria)");};
};
if(retiradas[1]==15){
	if(retiradas[0]>0 && verx<15){printf("Ganhou o com 1 pontos (vitoria)");};
	if(retiradas[0]==0 && verx>0){printf("Ganhou o com 3 pontos (vitoria)");};
	if(retiradas[0]==0 && verx<15){printf("Ganhou o com 2 pontos (vitoria)");};
};

}else{return 0;};
return 0;
}
