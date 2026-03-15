#include<stdio.h>

int main(){
	int T1[100],T2[100],T3[100];
	int n1,n2,n3,i;

	printf("entrer la taille de n1: ");
	scanf("%d",&n1);
	printf("la tqille de n2: ");
	scanf("%d",&n2);
	
	for(i=0,i<n1,i++){
		printf("remplir le tableau T1[%d]: ",i);
		scanf("%d",*T1+i);
	}

	for(i=0,i<n2,i++){
		printf("remplir le tableau T1[%d]: ",i);
		scanf("%d",*T2+i);
	}

	if (n1<n2){
		n3 = n2;
		for(i=0;i<n1;i++){
			T3[i] = T1[i] + T2[i];
			printf("T3[%d] = %d",i,T3[i]);
			printf("\n");
		for(i=n1;i<n3;i++){
			T3[i] = T2[i];
			printf("T3[%d] = %d",i,T3[i]);
			printf("\n");
		}
	}

	else if (n1>n2){
		n3 = n1;
		for(i=0;i<n2;i++){
			T3[i] = T1[i] + T2[i];
			printf("T3[%d] = %d",i,T3[i]);
			printf("\n");
		for (i=n2;i<n3;i++){
			T3[i] = T1[i];
			printf("T3[%d] = %d",i,T3[i]);
			printf("\n");
		}
	}

	return 0;
}

			