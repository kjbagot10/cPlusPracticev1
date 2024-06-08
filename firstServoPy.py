from gpiozero import AngularServo
from time import sleep

servo = AngularServo(18, min_angle=0, max_angle=270, min_pulse_width=0.0006, max_pulse_width=0.0023);

while True:
	servo.angle = 0; 
	sleep(2)
	servo.angle = 140;
	sleep(2);
	servo.angle = 270;
	sleep(2);
