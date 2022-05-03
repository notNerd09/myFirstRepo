#include<stdio.h>
#include<stdlib.h>

int main(){
    int prime;
    int i;
    int counter = 0;
    printf("Enter some Random Integer :");
    scanf("%d",&prime);
    
    //looping
    for (i=2 ; i<=prime ; i++){
    	//to check if the integer is in even value 
        if(prime % i == 0){
        	//the counter will increment when the number devisible by some other number
            counter++;
        }
        //this comment comment u can use to see what number that have been devided
//        printf("%d, ",i);
    }
    printf("\nTotal counter :%d\n",counter);
    // counter = 1 is when the only divisor the the number itself
    if (counter == 1){
        printf("Bilangan prima");
    }
    else {
    	// the counter is != 0 its mean that there is another divisor execpt the number itself
        printf("Bilangan adalah bukan bilangan prima");
    }

    return 0;
}
