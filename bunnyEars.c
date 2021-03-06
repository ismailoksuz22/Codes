//ISMAIL OKSUZ
//150119516

#include<stdio.h>

//I CREATED A FUNCTION TO GET NUMBER AS AN INPUT FROM THE USER
int numbercontroller(){
	
	//I DEFINED "NUMBEROFLINES" AS AN INTEGER
	int numberoflines;
	
	//I PRINTED THAT MESSAGE TO SAY THE USER THAT HE SHOULD ENTER A NUMBER
	printf("Please enter the number of lines: \n");
	
	//I ASSIGNED "NUMBEROFLINES" WITH THE INPUT THAT CAME FROM THE USER
	scanf("%d",&numberoflines);
	
	//I CREATED AN IF ELSE STRUCTURE TO KNOW WHETHER THE USER WILL ENTER A VALID VALUE	
	if (numberoflines >= 0)
	
		//IF USER WILL ENTER A VALID INPUT, THE PROGRAM WILL CONTINUE TO THE NEXT FUNCTION.
		return counterc(numberoflines,0,0);
		
	else
	
		//IF USER WILL ENTER AN INVALID INPUT, THE PROGRAM WILL GIVE WARNING TO THE USER 
		printf("You entered an invalid value: \n");
		
		//AND ASK FOR A NEW VALUE WITH RECURSION
		return numbercontroller();	
}

//I CREATED A FUNCTION TO MANAGE THE PROGRAMS STEP NUMBER AND SUM OF THE NUMBERS
int counterc(int a,int b,int c){
	
	//I DEFINED "NUMBEROFLINES" AS AN INTEGER AND GIVE IT THE SAME VALUE WITH A (THE INPUT)
	int numberoflines=a;
	
	//INT B WORKS FOR COUNT THE STEP (STARTING FROM ZERO)
	
	//I DEFINED MOD AS AN INTEGER TO DETERMINE WHETHER THE NEXT NUMBER IS ODD OR EVEN 
	int mod=b%2;
	
	//I DEFINED SUM AS AN INTEGER
	int sum=c;
	
	//I CREATE AN IF ELSE STRUCTURE 
	if(b>a)
		
		//WHEN STEP NUMBER BECOME HIGHER THAN INPUTTED NUMBER, THE PROGRAM WILL END.
		return 0;
	
	//WHILE STEP NUMBER IS LOWER THAN INPUTTED NUMBER, WE HAVE 2 OPTION	
	else
		
		//IF MOD=0, THE STEP NUMBER WILL BE EVEN
		if(mod==0)
		
			//WE CALL EVENADDER FUNCTION THERE TO ADD 2 TO THE SUM AND MOVE INTO THE NEXT STEP
			evenadder(b,a,sum);
		
		//ELSE; MOD WILL BE EQUAL TO 1, THE STEP NUMBER WILL BE ODD
		else
		
			//WE CALL ODDADDER FUNCTION THERE TO ADD 3 TO THE SUM AND MOVE INTO THE NEXT STEP
			oddadder(b,a,sum);
}

//I CREATED ODDADER FUNCTION
int oddadder(int a,int b,int c){
	
	//I DEFINED "COUNTER" AS AN INTEGER AND GIVE IT THE SAME VALUE WITH "A"
	int counter=a;
	
	//I DEFINED "SUM" AS AN INTEGER AND GIVE IT THE SAME VALUE WITH "C"
	int sum=c;
	
	//I CREATED AN IF ELSE STRUCTURE THERE
	if(counter>b)
	
		//WHEN STEP NUMBER BECOME HIGHER THAN INPUTTED NUMBER, PROGRAM WILL BE END
		return 0;
	else
	
		//PROGRAM PRINTS A MESSAGE TO SHOW THE STEP NUMBER AND THE SUM
		printf("bunnyEars2(%d",a);
		printf(") -> %d\n",sum);
		
		//COUNTER WILL BE INCREASE BY 1 TO PASS TO THE NEXT STEP
		counter=counter+1;
		
		//THE PROGRAM RETURNS TO THE "COUNTERC" FUNCTION AGAIN WITH ADDING 3 TO THE SUM AND
		return counterc(b,counter,sum+3);
}

//I CREATED EVENADDER FUNCTION
int evenadder(int a,int b,int c){
	
	//I DEFINED "COUNTER" AS AN INTEGER AND GIVE IT THE SAME VALUE WITH "A"
	int counter=a;
	
	//I DEFINED "SUM" AS AN INTEGER AND GIVE IT THE SAME VALUE WITH "C"
	int sum=c;
	
	//I CREATED AN IF ELSE STRUCTURE THERE
	if(counter>b)
	
			//WHEN STEP NUMBER BECOME HIGHER THAN INPUTTED NUMBER, PROGRAM WILL BE END
			return 0;
	else
	
		//PROGRAM PRINTS A MESSAGE TO SHOW THE STEP NUMBER AND THE SUM
		printf("bunnyEars2(%d",a);
		printf(") -> %d\n",sum);
		
		//COUNTER WILL BE INCREASE BY 1 TO PASS TO THE NEXT STEP
		counter=counter+1;
		
		//THE PROGRAM RETURNS TO THE "COUNTERC" FUNCTION AGAIN WITH ADDING 2 TO THE SUM AND
		return counterc(b,counter,sum+2);
}

//I CREATED MAIN FUNCTION THERE		
int main(){
	
	//I CALLED THE FIRST FUNCTION THERE TO START THE PROGRAM
	numbercontroller();
	
	//THE PROGRAM WILL STOP WHEN IT PRINTS THE SUPER DIGITS OF NUMBER	
	return 0;
	
}
