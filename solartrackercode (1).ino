//Servo motor library
#include <Servo.h>
//Initialize variables
int mode = 0;
int axe = 0;            

int ldrright= A4;                // top-right LDR                          
int ldrleft = A5;               // top-left LDR                          
                  
int left = 0;
int right = 0; 


//Declare servo
Servo servo_rightleft;

int threshold_value=10;           //measurement sensitivity

void setup()
{
  Serial.begin(9600);                                //serial connection setup  //opens serial port, sets data rate to 9600 bps
  Serial.println("CLEARDATA");                       //clear all data that’s been place in already
  Serial.println("LABEL,t,voltage,current,power,Mode");   //define the column headings (PLX-DAQ command)

  servo_rightleft.attach(6);          //Servo motor right-left movement
}

void loop(){    

    //capturing analog values of each LDR
    int rightdata= analogRead(ldrright);         //capturing analog value of  right LDR
    int leftdata= analogRead(ldrleft);         //capturing analog value of  left LDR


    // calculating average
    int avg = (rightdata + leftdata) / 2;     //average of LDRs
    
    //left-right movement of solar tracker
     
    if (abs(avg) >= threshold_value){        //Change position only if light difference is bigger then the threshold_value
     if (avg > 0) {
      if (servo_rightleft.read() < 180) {
        servo_rightleft.write((servo_rightleft.read() + 2));
      }
    }
    if (avg <  0) {
      if (servo_rightleft.read() > 0) {
        servo_rightleft.write((servo_rightleft.read() - 2));
      }
    }
  }     
 }  
