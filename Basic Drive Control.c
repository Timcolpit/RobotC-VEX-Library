#pragma config(Motor,  port1,           frontRight,    tmotorVex393, openLoop)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393, openLoop)
#pragma config(Motor,  port3,           backRight,     tmotorVex393, openLoop)
#pragma config(Motor,  port4,           backLeft,      tmotorVex393, openLoop)
#pragma config(Motor,  port5,           towerRight,    tmotorVex269, openLoop)// <--
#pragma config(Motor,  port6,           towerLeft,     tmotorVex269, openLoop)   //|
                                                                                 //|
//once you have chosen your motors click apply and ok. Then your code should       |
//look a little like this ---------------------------------------------------------
//next we will learn about Task Main.

//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//




task main ()
{
	while(1==1)
	{
		motor[frontRightMotor] = vexRT[Ch2];
		motor[backRightMotor] = vexRT[Ch2];
		
		motor[frontLeftMotor] = vexRT[Ch3];
		motor[backLeftMotor] = vexRT[Ch3];
		
	}
}
