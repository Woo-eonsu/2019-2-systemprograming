#include <stdio.h>

void main(){
	int i,n,m;
	char c;
	printf("반복할 수 입력: ");
	scanf("%d",&n);
	for (i=0; i<n;i++){
		printf("반복할 문자와 반복할 수 입력: ");
		//getchar();
		//fflush(stdin);
		__fpurge(stdin);
		scanf("%c %d",&c,&m);
		//%c 앞에 공백 있어도 가능
		for (int j=0;j<m;j++){
			printf("%c",c);
		}
	}
}
