// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef TOTEELEVATOR_H
#define TOTEELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ToteElevator: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* toteDrive;
	AnalogInput* totePot;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	ToteElevator();
	void InitDefaultCommand();
	void PIDLiftControl();
	float lastError, setpoint;
	float integral, error, derivative;
	Timer tE;
	float lastT;
	float output;
};

#endif
