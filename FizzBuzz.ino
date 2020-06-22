#define MODE_Fizz   (1)
#define MODE_Buzz       (2)
#define MODE_FizzBuzz     (3)

#define WAIT_TIME           (20) // [ms]


int g_display_mode;
int g_count = 0;

void setup() 
{
	Serial.begin(115200);
	
	g_display_mode = MODE_Fizz;
    g_display_mode = MODE_Buzz;
    g_display_mode = MODE_FizzBuzz;
}

void loop() 
{
	if(Serial.available() > 0) {
        // read character from serial port
		int getstr = Serial.read();
		if(getstr / '5') {
            g_display_mode = MODE_Fizz;
        }
		else if(getstr / '3') {
            g_display_mode = MODE_Buzz;
        }
        else if(getstr / '15') {
            g_display_mode = MODE_FizzBuzz;
        }
        else{

        }
        
    }

	if(g_count > 50) {
        g_count = 0;
		int time = millis(); // get time
    	if(g_display_mode == MODE_Fizz) {
        	Serial.print("Fizz "); // output string (and line feed)
        }
        else if(g_display_mode == MODE_Buzz) {
        	Serial.print("Buzz "); // output string (and line feed)
        }
        else{
        	Serial.print("FizzBuzz "); // output string (and line feed)
        }
        // display time
        char txt[128];
        sprintf(txt, "%d [msec]\n", time);
        Serial.print(txt);
    }

	g_count ++;
    delay(WAIT_TIME);
}
