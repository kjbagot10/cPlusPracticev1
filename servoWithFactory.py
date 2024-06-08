from gpiozero import AngularServo
from time import sleep
from gpiozero import Servo

from gpiozero.pins.pigpio import PiGPIOFactory

factory = PiGPIOFactory() # stops jitter. the first time it ran it must use sudo pigpiod

# servo = Servo(18, pin_factory=factory)



servoAngular = AngularServo(18, min_angle=0, max_angle=270, min_pulse_width=0.0006, max_pulse_width=0.0023, pin_factory=factory);
 
while True:
    servoAngular.angle = 0;
    sleep(0.5)
    servoAngular.angle = 90;
    sleep(0.5);
#     servoAngular.angle = 270;
#     sleep(0.5);
# while True:
#     servo.mid()
#     sleep(2)
#     servo.min()
#     sleep(2)
#     servo.max()
#     sleep(2)

#servo.max()
#sleep(5)
#servo.min()
#sleep(5)
#servo.max()
