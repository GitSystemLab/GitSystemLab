	#include "ValueToCharArray.h"
	
	int main(){
		// This sample file should be in the same directory as the Header file, ValueToCharArray.h , is included in.
		int i = 0;
		for(i=1;i<=100;i++){
			printf("[%s]\n",ValueToCharArray(998999.99951,i-8,62-i,62-i,3,3,1,5,10,1));
		}//i
		return(0);
	}//main
	