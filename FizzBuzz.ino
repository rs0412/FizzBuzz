#define WAIT_TIME           (20) // [ms]

int num =0;

void setup() 
{
	Serial.begin(115200);
}

void loop() 
{
	delay(WAIT_TIME);

    num++;

    //1~100のFizzBuzzを表示
    if(num > 0 && num <= 100){

    printf("%d",num);

        //5で割り切れればFizz
		if(num % 5 == 0) {
            printf(":Fizz");
        }
        //3で割り切れればBuzz
		else if(num % 3 ==0) {
            printf(":Buzz\n");
        }
        //15で割り切れればFizzBuzz
        else if(num % 15 ==0) {
            printf(":FizzBuzz\n");
        }
        
        printf(":\n");
    }
}
