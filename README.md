# Automatic_Room_Temperature_Controller
Abstract:  
Weather changes become hard to adapt. That is, during
Winter we face difficulties tolerating the freezing cold, and that is why
people often prefer wearing coats during the season. On the other
hand, the weather becomes too warm in summer.So by using
Automatic temperature control system we can turn on fan at high
temperature and turn on heater at low temperature without any
physical touch/action.

Introduction:                                                   
Automatic temperature control system is an important
application used in almost all modern gadgets and smart homes. The
system for controlling temperature automatically is achieved by using
Arduino Uno-based microcontroller systems. Arduino Uno due to its
increased popularity finds its varied range of applications.Temperature
sensor TMP36 and Arduino Uno are the hardware used interfaced with a
computer, and the temperature is controlled in the room.

Methodology:                                   
Thus, having understood the switching operation of
transistors, unidirectional current flow in diodes, the principle of operation of
motors, the resistance from resistors combined with the transformation capability
of the transducer, the temperature sensor in this case, I would like to summarize
the operation of my project as follows.
1. If the temperature exceeds the maximum of the aforementioned
"desired" range, then the LCD displays that the temperature is higher and
informs the FAN to turn on. Then the FAN starts its rotation/vibration, and
after a while the temperature gets lowered falling in the range, then the
LCD commands the FAN to turn off.
2. Whenever the sensor's temperature reading goes down below the
possible minimum temperature in the range, the LCD notifies that the
temperature is LOWER and tells the heater to be turned on, and after the
temperature is in the range, it displays that temperature is OK and orders
the heater to be switched off.
3. The last condition is whenever the temperature is within the desired
range, the LCD tells that the temperature is normal. Thus, it asks to turn off
everything. This condition can, for instance, be observed if you run the
code and the glider's position remains unchanged. That tells one that the
default slider position is within the desired room temperature range (i.e. the
default is 24.78 degree C)                      
4. Likewise, system iterates forever unless it gets terminated by the user due
to the behavior of the loop ( ) function
