/**
 * @file cmatrix.ino
 * @author Corentin Goetghebeur
 * @brief Downloads and installs cmatrix using apt and executes it
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Keyboard.h>

void setup(){
    // Setup the Keyboard
    Keyboard.begin(KeyboardLayout_fr_FR);
    
    // Open the terminal Ctrl+alt+T
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');

    Keyboard.end();
}

void loop(){
    
}
