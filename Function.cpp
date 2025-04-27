#include<stdio.h>
int isPrime(int player){
	if(player <= 1){
		return 0; //Player less than 2 disqualified
	}
	for(int i =2; i <= player/2;i++){
		if(player%i == 0){
			return 0; //Player Tackled by others need more training
		}
	}
	return 1; //Prime Players
}
int main(){
	int jnum;
	printf("Enter the Jersey Number of Player: ");
	scanf("%d", &jnum);
	if(isPrime(jnum)){
		printf("Player #%d is a PRIME STAR!", jnum);
	} else {
		printf("Player #%d needs More Training!!", jnum);
	}
	return 0;
}
