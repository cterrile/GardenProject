

#include "Arduino.h"
#include "Gardensensor.h"
Gardensensor::Gardensensor(int ld1, int ld2, int ld3, int snsr)
{
	
	led1 = ld1;
	led2 = ld2;
	led3 = ld3;
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	
	sensor = snsr;
} 	


void Gardensensor::checkStatus(int input)
{
    }
	if (input>= 550)
  	{
	    digitalWrite(led1, HIGH);
	    digitalWrite(led2, HIGH);
	    digitalWrite(led3, HIGH);


	}
  	else if (input >= 250 && input < 550)
  	{
    	    digitalWrite(led1, HIGH);
    	    digitalWrite(led2, HIGH);
    	    digitalWrite(led3, LOW);
    

  	}
  	else if (input >= 100 && input < 250)
  	{
    	    digitalWrite(led1, HIGH);
    	    digitalWrite(led2, LOW);
    	    digitalWrite(led3, LOW);
 
    
  	}
  	else if (input >= 1 && input < 100)
  	{
	    digitalWrite(led1, LOW);
	    digitalWrite(led2, LOW);
    	    digitalWrite(led3, LOW);
    
	}
};
    

   
