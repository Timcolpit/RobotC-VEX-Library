RobotC-VEX-Libary
=================

Welcome to the 2158 ausTIN Cans Vex Library. 
This resource has been designed for new and older members of Vex who would like to have
a better knowledge about programming.


   Download

	1)open up your web browser
	2)go to http://robotc.net/download/vexrobotics/
	3) Click the link to download the free 10 day trial
    The will download a file called "RobotCforVexRobotics_406.exe"
	4) open up this application and follow the installation instructions




   Motors in RobotC

To set up your motors first go to robot in the top left hand corner between view and window
And click on it. From there you need to go to the second option fr bom the bottom where it
Says motors and sensors set up. Click on it. After you click on it there will be four options
To choose from 
1)Standard Models- you generally do not have to mess with this, 
2)motors- you will have to use this ALOT! So always remember where this is. 
3)Analog sensors- you may or may not use this feature it just depends on how far along you get on your robot and how
ambitious you are to get the robot done. 
4)digital sensors- you may or may not use this as well.

So now that we have the motors and sensors page all described you should go back to motors if
you are not already there and click the empty box to type in the name for your robot.
Just remember the name of your motors are case sensitive throughout all of the code
so you must put in something easy enough to type. After you type in the names of your motors you
will need to select what motor it is that you are using. For this example program we are using
4 high strength motors and 4 low strength motors. (393 motors and 269 motors)


    Pre-Autonomous Functions
Pre-Autonomous functions are inserted into the code to initiate different procedures such as 
preparing the control functions for the motors, pneumatics, and sensors.

    
The Pre-Autonomous section is used to 'Set up' your robot before competition. It's generally used to set up potentiometer positions, LCD display etc. This is all functions that your robot will do before the match 

    
    Autonomous Task


This is the portion of your code that tells the cortex what motors to initiate during the 
autonomous period of the game.

For the Autonomous tasks you program the robot to be able to move on it's own. In this section you will define what motors you would like to run, and for how long you would like them to run for. For example if you wanted to run all your drive base motors for 1 second you would tell all your motors to run at full power (127) using the snippet ‘wait1Msec(1000); ‘ **Make sure that all of your snippets end with a semi colon (;) to signal the end of that command.**
    

    
    
    User Control Task
The user control task is the code that tells what motors or processes to activate or deactivate
when a certain button or limit on a sensor is recognized as 1/0.

    
    
    


    Sensors

sensors are used to sense acceleration, direction, and how level the robot is. 
these are very helpful in the autonomous portion of the game. 

     

     

