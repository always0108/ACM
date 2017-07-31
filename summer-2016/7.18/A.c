/*************************************************************************
	> File Name: D.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月18日 星期二 11时22分00秒
************************************************************************/

/*
POJ 注册的时候需要用户输入邮箱，验证邮箱的规则包括： 
1)有且仅有一个'@'符号 
2)'@'和'.'不能出现在字符串的首和尾 
3)'@'之后至少要有一个'.'，并且'@'不能和'.'直接相连 
满足以上3条的字符串为合法邮箱，否则不合法， 
编写程序验证输入是否合法

输入包含若干行，每一行为一个代验证的邮箱地址，长度小于100

每一行输入对应一行输出
如果验证合法，输出 YES
如果验证非法：输出 NO
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[110];
	while(scanf("%s",str)!=EOF){
		int flag=0;
		int n=strlen(str);
		int numa=0,num=0;
		if(str[0]=='@'||str[0]=='.'||str[n-1]=='@'||str[n-1]=='.'){
			printf("NO\n");  flag=1;
		}
		else {
			for(int i=0;i<n-1;i++){
				if(str[i]=='@'&&str[i+1]=='.'||str[i]=='.'&&str[i+1]=='@'){
					printf("NO\n");  flag=1;
				}//'@'与'.'不能相邻	
	 	    }
	 	    for(int i=0;i<n;i++){
	 	    	if(str[i]=='@'){
	 	    		numa++;
	 	    	}
	 	    }
	 	    if(numa!=1){
	 	    	printf("NO\n");  flag=1;
	 	    }
	 	    else{
	 	    	int j;
	 	    	for(int i=0;i<n;i++){
	 	    		if(str[i]=='@'){
	 	    			 j=i;
	 	    		}
	 	    	}
	 	    	for(int i=j;i<n;i++){
	 	    		if(str[i]=='.'){
	 	    			num++;
	 	    		}
	 	    	}
	 	    	if(num==0){
	 	    		printf("NO\n"); flag=1;
	 	    	}
	 	    }
		}
	    if(flag==0)	
            printf("YES\n");
	}
    return 0;
} 
