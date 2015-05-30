//#include <stdio.h>
//#define MOTOR0_TIM      TIM2    //TIMx
//#define MOTOR0_CHA      3       //CCRx
//#define MOTOR0_CHB      4       //CCRx
//#define MOTOR1_TIM      TIM3    //TIMx
//#define MOTOR1_CHA      1       //CCRx
//#define MOTOR1_CHB      2       //CCRx
//#define MOTOR2_TIM      TIM3    //TIMx
//#define MOTOR2_CHA      3       //CCRx
//#define MOTOR2_CHB      4       //CCRx
//#define MOTOR3_TIM      TIM4    //TIMx
//#define MOTOR3_CHA      1       //CCRx
//#define MOTOR3_CHB      2       //CCRx
//
//#define TIM1 111
//#define TIM2 222
//#define TIM3 333
//#define TIM4 444
//
//#define BRAKING_PWM     256
//#define MAX_SPEED       450
//
//void set_pwm( int num, int speed);
//
//int main(void) {
//	int num_t=0,speed_t=0;
//	printf("please put num and speed\n");
//	fflush(stdout);
//	scanf("%d%d",&num_t,&speed_t);
//
//	set_pwm(num_t,speed_t);
//
//	return 0;
//}
//
//int motor_tim[] ={
//		MOTOR0_TIM,
//		MOTOR1_TIM,
//		MOTOR2_TIM,
//		MOTOR3_TIM
//};
//
//int motor_ch[][2] ={
//		{MOTOR0_CHA, MOTOR0_CHB},
//		{MOTOR1_CHA, MOTOR1_CHB},
//		{MOTOR2_CHA, MOTOR2_CHB},
//		{MOTOR3_CHA, MOTOR3_CHB}
//};
//
//void set_pwm( int num, int speed){
//	if( speed > MAX_SPEED ) speed = MAX_SPEED;
//	if( speed < -MAX_SPEED ) speed = -MAX_SPEED;
//
//	printf("TIM\t%d\n",motor_tim[num]);
//	printf("PinNum\t%d\t%d\n",motor_ch[num][0],motor_ch[num][1]);
//	printf("Speed\t%d\n",speed);
//}
