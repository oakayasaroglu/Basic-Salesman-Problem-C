#include <stdio.h>

#define sehir_Sayisi 10

int main(){
	
	//þehirler arasý mesafeler
	int mesafeler[sehir_Sayisi][sehir_Sayisi]={
	0,17,9,21,3,6,13,2,5,10, 
	0,0,11,6,12,4,12,3,7,6,
	0,0,0,5,8,14,10,8,19,7,
	0,0,0,0,24,18,4,1,13,3,
	0,0,0,0,0,6,7,16,21,7,
	0,0,0,0,0,0,8,16,2,35,
	0,0,0,0,0,0,0,12,15,4,
	0,0,0,0,0,0,0,0,9,5,
	0,0,0,0,0,0,0,0,0,40,
	0,0,0,0,0,0,0,0,0,0
	};
	
	
	
	
	for(int i=0;i<sehir_Sayisi;i++){
		for(int j=0;j<sehir_Sayisi;j++){
			if(i==j){
				mesafeler[i][j]=0;
			}
			if(i<j){
			mesafeler[j][i]=mesafeler[i][j];
		}
		
		}
		
	}	
	
	// ve bunlarýn yazdýrýlmasý
	printf("        ");
	for(int i=0;i<sehir_Sayisi;i++){
		printf("\tSehir %d",i+1);
	}
	printf("\n\n");
	
	for(int i=0;i<sehir_Sayisi;i++){
		printf("Sehir %d ",i+1);
		for(int j=0;j<sehir_Sayisi;j++){
			if(mesafeler[i][j]<10){
			printf("\t  %d ",mesafeler[i][j]);	
			}
			else{
			printf("\t %d   ",mesafeler[i][j]);
		}
	}
	printf("\n");
}
	
/////////////////////////////rotolarýn belirleniþi/////////////////////	
	int rec1=9998;
	int rec2=9999;
	
	int temp;
	
	int rotalar[2][sehir_Sayisi];
	
	
	for (int i=0;i<sehir_Sayisi;i++){
		for (int j=0;j<sehir_Sayisi;j++){
		if(i!=j){
			
			for (int k=0;k<sehir_Sayisi;k++){
			if(i!=k && j!=k){
			
				
				for (int l=0;l<sehir_Sayisi;l++){
				if(i!=l && j!=l && k!=l){
					
					for (int m=0;m<sehir_Sayisi;m++){
					if(i!=m && j!=m && k!=m && l!=m){
						
						for (int n=0;n<sehir_Sayisi;n++){
						if(i!=n && j!=n && k!=n && l!=n && m!=n){
							
							for (int o=0;o<sehir_Sayisi;o++){
							if(i!=o && j!=o && k!=o && l!=o && m!=o && n!=o){
								
								for (int p=0;p<sehir_Sayisi;p++){
								if(i!=p && j!=p && k!=p && l!=p && m!=p && n!=p && o!=p){
									
									for (int r=0;r<sehir_Sayisi;r++){
									if(i!=r && j!=r && k!=r && l!=r && m!=r && n!=r && o!=r && p!=r){
										
										for (int s=0;s<sehir_Sayisi;s++){
										if(i!=s && j!=s && k!=s && l!=s && m!=s && n!=s && o!=s && p!=s && r!=s){

																				
												temp=mesafeler[i][j]+mesafeler[j][k]+mesafeler[k][l]+mesafeler[l][m]+mesafeler[m][n]+mesafeler[n][o]+mesafeler[o][p]+mesafeler[p][r]+mesafeler[r][s]+mesafeler[s][i];
												if(temp<=rec1){
													rec1=temp;
													rotalar[0][0]=i ;
													rotalar[0][1]=j ;
													rotalar[0][2]=k ;
													rotalar[0][3]=l ;
													rotalar[0][4]=m ;
													rotalar[0][5]=n ;
													rotalar[0][6]=o ;
													rotalar[0][7]=p ;
													rotalar[0][8]=r ;
													rotalar[0][9]=s ;
													
												}
												else{
													if(temp<rec2 && temp>rec1){
														rec2=temp;
													rotalar[1][0]=i ;
													rotalar[1][1]=j ;
													rotalar[1][2]=k ;
													rotalar[1][3]=l ;
													rotalar[1][4]=m ;
													rotalar[1][5]=n ;
													rotalar[1][6]=o ;
													rotalar[1][7]=p ;
													rotalar[1][8]=r ;
													rotalar[1][9]=s ;
													}
												}
												
										}
									}}
								}}
							}}
						}}

					}
					}
			    }
				}
			}
			}
		}
		}
	}
}

printf("\n\n\n");

printf("En kisa rota: ");
for(int i=0;i<sehir_Sayisi+1;i++){
	if(i!=sehir_Sayisi){
		printf("%d",rotalar[0][i]+1);
		printf(" - ");
	}
	else{
		printf("%d",rotalar[0][0]+1);
	}
}
printf("\n");
printf("En kisa rotanin mesafesi=%d", rec1);

printf("\n\n");
printf("En kisa 2. rota: ");
for(int i=0;i<sehir_Sayisi+1;i++){
	if(i!=sehir_Sayisi){
		printf("%d",rotalar[1][i]+1);
		printf(" - ");
	}
	else{
		printf("%d",rotalar[1][0]+1);
	}
}
printf("\n");
printf("En kisa 2. rotanin mesafesi=%d", rec2);
	
	
	

	
	
	
	
	
	
							

						
	
	
	
	
	
	
	
	
	
	
	return 0;
		
}
