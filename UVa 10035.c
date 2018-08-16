#include<stdio.h>

int main()
	{
    	long long int num1, num2;
    		while(scanf("%lld %lld", &num1, &num2) != EOF && num1 && num2 ) {
        		int carry = 0, count = 0;
        		while(num1 || num2) {
            		int sum = num1 % 10 + num2 % 10 + carry;
           				if(sum > 9)
							carry = 1;
						else
							carry = 0;
								           																			
            			if(carry == 1)
                			count++;

            		num1 /= 10;
            		num2 /= 10;
        		}

        if(count == 0)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
  
}
	return 0;
}
