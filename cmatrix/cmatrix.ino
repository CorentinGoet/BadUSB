/**
 * @file cmatrix.ino
 * @author Corentin Goetghebeur
 * @brief This program lauches a terminal in Windows, lauches the powershell from this terminal,
 *  lauches a linux subsystem from the powershell, and executes the cmatrix command. 
 * (This is for fun only and it requires the installation of a linux subsystem on the windows machine)
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Keyboard.h>

void setup(){
    // These instructions are executed only once

    // Initialize communication using the French AZERTY layout
    Keyboard.begin(KeyboardLayout_fr_FR);

    // Leave some time to change the program before the execution (10 sec)
    delay(10000);

    // Open the Windows terminal using Win+R
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(50);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.println("cmd");
    delay(500);

    // Make fullscreen
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_UP_ARROW);
    delay(50);
    Keyboard.releaseAll();
    
    // Lauch the powershell
    Keyboard.println("powershell");
    delay(500);
    // Launch the Linux subsystem
    Keyboard.println("bash");

    //wait for the subsystem to start
    delay(1000);

    // execute the cmatrix program
    Keyboard.println("cmatrix");

}

void loop(){
    // these instructions are executed in a loop 

}
