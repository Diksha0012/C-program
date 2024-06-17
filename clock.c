#include<stdio.h>
#include<time.h>

int main(){
	
	time_t second,val=1;
	struct tm* current_time;
	
	//time in seconds
	second=time(NULL);
	
	//to get current time
	current_time = localtime(&second);
	printf("%d : %d : %d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
	
	return 0;
}
