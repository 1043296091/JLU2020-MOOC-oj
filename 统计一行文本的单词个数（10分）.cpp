#include <stdio.h>
int main(){
	char str[100];
	gets(str);//�������� 
	int sum=0;
	for(int i=1;i<=98;i++){
		if((str[i]==' ')&&(str[i-1]!=' '))sum++;
	}//���ǵ��ʼ��ж���ո����� 
	sum++;
	printf("%d",sum);
	return 0;
}
