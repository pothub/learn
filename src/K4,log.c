//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 100
//
//float kp=0.0,ki=0.0,kd=0.0,e=0.0,ei=0.0,ed=0.0,ep=0.0,out=0.0;
//void setPID(float kp_t,float ki_t,float kd_t);
//float calcPID(float target,float now);
//float outPID(float pid_t);
//
//int main(void) {
//	int cnt=0;
//	/*ファイルに自動で保存するためのプログラム*/
//	FILE *fp;
//	if((fp=fopen("log.csv","w")) == NULL){
//		printf("can't open file\n");
//		exit(1);
//	}
//	/****************************************/
//
//	float target_t=10.0,pow_t=0.0,out_t=0.0,in_t;
//	setPID(0.1,0.0,0.0);
//	printf("target_t\tout_t\tin_t\tp\ti\td\t\n");
//	fprintf(fp,"target_t,out_t,in_t,p,i,d\n");
//	while(1){
//		cnt++;
//		if(cnt>MAX)
//			break;
//		out_t=outPID(pow_t);					//出力する値
//		in_t=out_t-0.5+(float)(rand()%100+1)/100;	//外乱(0.01〜1.00)を含んだ入力
//		pow_t=calcPID(target_t,in_t);			//入力と目標値から出力を決定
//		printf("%f\t%f\t%f\t%f\t%f\t%f\n",target_t,out_t,in_t,kp*e,ki*ei,kd*ed);
//		fprintf(fp,"%f,%f,%f,%f,%f,%f\n",target_t,out_t,in_t,kp*e,ki*ei,kd*ed);		//ファイルに保存
//	}
//	printf("program finish");
//	fclose(fp);									//ファイルを閉じる
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
