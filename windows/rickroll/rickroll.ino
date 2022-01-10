/**
 * @file rickroll.ino
 * @author Corentin Goetghebeur
 * @brief This program lauches a browser and goes to youtube to Never Gonna Give You Up By Rick Astley
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Keyboard.h>

void setup(){
    Keyboard.begin(KeyboardLayout_fr_FR);
    delay(10000);

    // Open a windows command prompt
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(50);
    Keyboard.releaseAll();

    delay(50);
    Keyboard.println("cmd");
    
    delay(500);
    
    delay(500);
    // Open the link
    Keyboard.println("rundll32 url.dll,FileProtocolHandler https://youtu.be/a3Z7zEc7AXQ");

    Keyboard.end();
}

void loop(){
    
}
