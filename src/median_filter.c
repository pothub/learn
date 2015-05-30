//#include  <stdio.h>
//
//void BubSort(int x[ ], int n);
//int main(void);
//
//#define NUM_DATA 40
//int flag=0,n=0,k=0,x[5] = {0},tmp[5] = {0};
//int input[NUM_DATA]={200,210,230,200,0,260,280,220,640,290,320,300,0,340,350,400,370,380,390,400,
//											0,380,350,380,640,320,320,310,300,300,330,290,280,0,260,250,290,220,200,200};
//
//void set();
//void BubSort(int x[ ], int n);
//
//int main(void){
//	printf("in\tsort\tx0\tx1\tx2\tx3\tx4\n");
//	while(k<NUM_DATA){
//		set();
//		BubSort(x, 5);
//		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",input[k],(x[1]+x[2]+x[3])/3,x[0],x[1],x[2],x[3],x[4]);
//		k++;
//	}
//	return 0;
//}
//
//void set(){
//	int flag_t;
//	if(flag==0){
//		for(flag_t=0;flag_t<5;flag_t++)
//			tmp[flag_t]=input[0];
//		flag=1;
//	}
//	else
//		tmp[n]=input[k];
//	if(n==4)
//		n=0;
//	else
//		n++;
//	int i;
//	for(i=0;i<5;i++)
//		x[i]=tmp[i];
//}
//void BubSort(int x[], int n){
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (x[j - 1] > x[j]) {
//				temp = x[j];
//				x[j] = x[j - 1];
//				x[j - 1]= temp;
//			}
//		}
//	}
//}
