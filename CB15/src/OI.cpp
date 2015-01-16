// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"
#include "JoystickMap.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/BLANK.h"
#include "Commands/ClawToggle.h"
#include "Commands/ContainerDown.h"
#include "Commands/ContainerUp.h"
#include "Commands/Drive.h"
#include "Commands/LiftDown.h"
#include "Commands/LiftUp.h"
#include "Commands/PivotDown.h"
#include "Commands/PivotUp.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	gamePad = new Joystick(2);
	
	rightJoy = new Joystick(1);
	
	leftJoy = new Joystick(0);
	
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("Drive", new Drive());

	SmartDashboard::PutData("LiftUp", new LiftUp());

	SmartDashboard::PutData("LiftDown", new LiftDown());

	SmartDashboard::PutData("PivotUp", new PivotUp());

	SmartDashboard::PutData("PivotDown", new PivotDown());

	SmartDashboard::PutData("ContainerUp", new ContainerUp());

	SmartDashboard::PutData("ContainerDown", new ContainerDown());

	SmartDashboard::PutData("ClawToggle", new ClawToggle());

	SmartDashboard::PutData("BLANK", new BLANK());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	//Tote Elevator buttons
	toteUpBtn = new JoystickButton(gamePad, RIGHTTRIGGER);
	toteUpBtn->WhenPressed(new LiftUp());
	toteDownBtn = new JoystickButton(gamePad, RIGHTBUMPER);
	toteDownBtn->WhenPressed(new LiftDown());
	//Container Elevator buttons
	clawBtn = new JoystickButton(gamePad, ABUTTON);
	clawBtn->WhenPressed(new ClawToggle());
	conUpBtn = new JoystickButton(gamePad, LEFTTRIGGER);
	conUpBtn->WhileHeld(new ContainerUp());
	conDownBtn = new JoystickButton(gamePad, LEFTBUMPER);
	conDownBtn->WhileHeld(new ContainerDown());
	pivotUpBtn = new JoystickButton(gamePad, XBUTTON);
	pivotUpBtn->WhenPressed(new PivotUp());
	pivotDownBtn = new JoystickButton(gamePad, BBUTTON);
	pivotDownBtn->WhenPressed(new PivotDown());
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getgamePad() {
	return gamePad;
}

Joystick* OI::getrightJoy() {
	return rightJoy;
}

Joystick* OI::getleftJoy() {
	return leftJoy;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
