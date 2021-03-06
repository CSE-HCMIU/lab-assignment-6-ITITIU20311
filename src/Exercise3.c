/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void printword(char *str,int start,int end ){
	int len = strlen(str);
	for(int i=start;i<=end-1;i++){
		printf("%c",str[i]);
	}

}

void Ex3(char *str){
	//Your codes here
	int len=strlen(str);
	int start=0;
	int end=0;
	int startmax,endmax,startmin,endmin;
	int min,max;
	while(end<=len){
		if(end<len && str[end] != ' '){
			end=end+1;
		}else{
			max=end-start;
			min=end-start;
			break;
		}
	}
	while(end<=len){
		if(end<len && str[end] != ' '){
			end=end+1;
		}else{
			int wlen=end-start;
			if(wlen>max){
                max=wlen;
                startmax=start;
                endmax=end;
            }
            if(wlen<min){
                min=wlen;
                startmin=start;
                endmin=end;
            }
			end++;
			start=end;
			
		}
	}
	printf("Shortest word: ");
	printword(str,startmin,endmin);
	printf("\n");
	printf("Longest word: ");
	printword(str,startmax,endmax);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
