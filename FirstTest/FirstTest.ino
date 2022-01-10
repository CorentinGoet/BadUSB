
/**
* @author Corentin Goetghebeur
* This is a test program designed to open a terminal in Windows and type Hello world!
*/

#include <Keyboard.h>


void setup(){
    // This function is the setup, executed only once
    Keyboard.begin(KeyboardLayout_fr_FR); // Use the french AZERTY keyboard layout
    delay(10000);

    // Open the terminal using win + r
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(500);
    Keyboard.releaseAll();
    delay(5000);
    Keyboard.println("cmd");
    delay(10000);
    Keyboard.println("Hello World!");

}

void loop(){
    // This function is the loop, it is executed until the power is cut.

}
