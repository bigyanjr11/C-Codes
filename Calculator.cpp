#include<stdio.h>
int main(){
	int num1, num2, result;
	char op;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Enter the Operator: ");
	scanf(" %c", &op);
	switch (op)
	{
	case '+':
	result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
			break;
	case '*':
	result = num1 * num2;
		break;
	case '/':
	if(num2 != 0){
		result = num1 /num2;
	} else{
		printf("Error: Division by Zero");
	}
	return 1;
		break;
	default:
	printf("!!--Invalid Operator--!!");
		break;
		return 1;
	}
return 0;
}
