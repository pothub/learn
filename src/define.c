//#include <stdio.h>
//
//#define BRAKING_PWM     256
//#define MAX_SPEED       450
//int main(void) {
//	int pow=0;
//	printf("BRAKING_PWM:\t%d\n",BRAKING_PWM);
//	printf("MAX_SPEED:\t%d\n",MAX_SPEED);
//	printf("prease put num\n");
//	fflush(stdout);
//	scanf("%d",&pow);
//	if(pow<-MAX_SPEED){
//		pow=-MAX_SPEED;
//	}else if(pow>MAX_SPEED){
//		pow=MAX_SPEED;
//	}
//	printf("pwmA\t%d\n",BRAKING_PWM+pow/2);
//	printf("pwmB\t%d\n",BRAKING_PWM-pow/2);
//	printf("pow:\t%d\n",pow);
//	return 0;
//}
