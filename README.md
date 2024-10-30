# Console motor library

### About:

A simple library you can use to test out the TB6612FNG H-bridge. The following includes a list of commands that you can execute with the serial monitor. 

### Setup up: 

You must first include the header file in your arduino code: 

```c++
#include "motor_lib.h"

```
After this you must setup your pin definitions or assign them, here is an example: 

```c++
//Power
#define pwmM 11

// Motor A
#define in1A 12
#define in2A 13
 
// Motor B
#define in1B 7
#define in2B 8
```
You do not have to use the same pin defintions as shown this example. Your in1 and in2 pins can be connected to the digital pins while the power itself must be connected to an analog pin, as you can control the motor speed from values of 0 to 255, 0 being off and 255 being full speed. 

Remember to setup these pins in the setup function. 

Once you are finished with this, you can call the following function in the loop function and input your pin definitions into this order: 

```c++
//switchMotor() func;
switchMotor(byte in1A, byte in2A, byte inPwm, byte in1B, byte in2B, int ms)
```
Here is an example using the pin definitions I showed you before: 

```c++
switchMotor(in1A, in2A, pwmM, in1B, in2B, MotorSpeed);
```

### How to use it: 

After calling the function, you can run your code and check for any erros. Once it is running, in the terminal you can type the **1** for the motors to spin clockwise, **2** for the motors to spin counterclockwise and **3** to make the motors stop. 
```c++

1 == CW
2 == CCW
3 == STOP 

```
### Check out how its used:

You can go to my [Arduino Car Project](https://github.com/AliK070/Arduino-Car-Project) over here. You'll see how I implement this code within my car project and you can use that towards your own usage.
