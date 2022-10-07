# USBDelete
Personal implementation of keyboard emulation with an Atmel 8-bit AVR ATTiny85 acting as a HID keyboard and automatically "pressing the delete key" every half-second.

## Description
Using a DigiSpark clone board bought from China for $1.50, using Digistump drivers, it was possible to use their default library "DigiKeyboard" that enables HID features on the ATTiny and makes it act as a standard keyboard.
Useful for servers that take 5 mins to initialize and the User doesnt want to stand there pressing the DEL key forever.

Included are the Gerber files for fabing your own, no IO digispark clone.
or you can order the boards [here](https://oshpark.com/shared_projects/NsB0rn4L). Parts can be had from digikey.

## HowTo
You will want to burn the [Micronucleus](https://github.com/micronucleus/micronucleus) bootloader to the ATTiny85. I'll post some instructions on that, hopefully, in the future.

## Problems
Here are a couple of issues that needs to be fixed:
* Sometimes the first time the unit is plugged in, the script doesn't get executed;
* A few systems will prompt new hardware installation window and may take a couple of minutes to install the proper drivers (even though the DigiSpark acts as a typical USB keyboard).
* Larger script sometimes will not execute in the intended order.
