/**
 * 
 * COMPETITION TEMPLATE
 * Written By ~~ Jess Zarchi
 *
 * TUG OF WAR
 * SPUR-FLY FRESHMAN CHALLENGE 
 *
 */

#define START_BUTTON dgtl12
task auton( );
void
allMotorsOff( ) {
	for(int i = 0; i < 10; i++) {
		motor[i] = 0;
	}
}

task
main( ) {
	bool bIsAutonomousRunning = false;
	while(true) {
		
		/* Toggle for Competition Control */
		if(SensorValue[START_BUTTON]) {
			//If true, set false. If false, set true. 
			bIsAutonomousRunning = !bIsAutonomousRunning;
			while(SensorValue[START_BUTTON]) {
				delay( 1 ); //Don't hog the CPU!
			}
			
			if(bIsAutonomousRunning) {
				startTask(auton);
			}
			else {
				stopTask(auton);
				allMotorsOff();
			}
		}
		
		delay( 20 ); //Don't hog the CPU!
	}
}


task
auton( ) {
	while(true) {
		/* Place main code here */
		motor[ port1 ]  = 
		motor[ port10 ] = 127;
	}
}
