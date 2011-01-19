#include "WProgram.h"
#include <stdio.h>
#include "avrRos/Ros.h"
#include "avrRos/String.h"
#include "avrRos/AvrLaserVector.h"
#include "Servo.h"

extern "C" void __cxa_pure_virtual()
{
  cli();
  for (;;);
}


Publisher respavrlaservector;


maximus_sensors::AvrLaserVector responseavrlaservector_msg;

float tempfloat;

#define ACCURACY 2
Servo turret;

void toggle(){
	static char t=0;
	if (!t ) {
			 digitalWrite(13, HIGH);   // set the LED on
			 t = 1;
		 }
	else {
			 digitalWrite(13, LOW);    // set the LED off
			 t = 0;
		 }
}

void response(Msg *msg){
	toggle();
	
}


// Since we are hooking into a standard arduino sketch, we must define our program in
// terms of the arduino setup and loop functions.

void setup(){
	ros.initCommunication();

	tempfloat = 0.0;

	pinMode(13, OUTPUT);
	//resp = ros.advertise("response");
//	ros.subscribe("call",response, &call_msg);


	//call_msg.data.setMaxLength(30);

    responseavrlaservector_msg.ranges = ROS::vector<float>(18);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);

    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);

    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);

    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();

    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);

    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);

    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);
    responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(tempfloat);


    respavrlaservector = ros.advertise("responseavrlaservector");

    turret.attach(4);

    //ros.publish(resp, &response_msg);

	digitalWrite(13, HIGH);
}

void loop(){
	ros.spin();
	delay(10);

    float volts;
    float distance;
    delay(200);


    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();
    responseavrlaservector_msg.ranges.ROS::vector<float>::pop_back();

    int angle = 0;

    for (angle = 75; angle < 111; angle += ACCURACY) {

        turret.write(angle);
        // Compute sensors
        delay(40);

        volts = analogRead(1) * 0.0048828125;
        //distance = 65 * pow(volts, -1.10);
        distance = 65 * 1/volts -1;
        responseavrlaservector_msg.ranges.ROS::vector<float>::push_back(distance);
    }
    turret.write(75);

	ros.publish(respavrlaservector, &responseavrlaservector_msg);

}



