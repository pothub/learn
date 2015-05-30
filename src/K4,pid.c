//#include <stdio.h>
//#include <stdlib.h>
//
//float kp=0.0,ki=0.0,kd=0.0,e=0.0,ei=0.0,ed=0.0,ep=0.0,out=0.0;
//void setPID(float kp_t,float ki_t,float kd_t);
//float calcPID(float target,float now);
//float outPID(float pid_t);
//
//int main(void) {
//	float target_t=10.0,pow_t=0.0,out_t=0.0,in_t;
//	setPID(0.1,0.1,0.0);
//	printf("target_t\tout_t\tin_t\tp\ti\td\t\n");
//	fflush(stdout);
//	while(1){
//		out_t=outPID(pow_t);					//出力する値
//		in_t=out_t-0.5+(float)(rand()%100+1)/100;	//外乱(0.01〜1.00)を含んだ入力
//		pow_t=calcPID(target_t,in_t);			//入力と目標値から出力を決定
//		printf("%f\t%f\t%f\t%f\t%f\t%f",target_t,out_t,in_t,kp*e,ki*ei,kd*ed);
//		fflush(stdout);
//		while(getchar()!='\n');					//エンターが押されるまで待つ
//	}
//	return 0;
//}
//
//void setPID(float kp_t,float ki_t,float kd_t){
//	kp=kp_t;ki=ki_t;kd=kd_t;
//}
//float calcPID(float target,float now){
//	e=target-now;ei+=e;ed=e-ep;ep=e;
//	return kp*e+ki*ei+kd*ed;
//}
//float outPID(float pid_t){
//	out+=pid_t;
//	return out;
//}
