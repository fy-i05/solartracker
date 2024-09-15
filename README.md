# Title: Solar Tracker NASA HUNCH

Description- This is a basic solar tracker or light tracking system I made in C++ and Arduino UNO. Created for the NASA HUNCH project, I demoed this project along with my team where the code was used with the second half of the porject which was a collapsible mirror. This code, running while wired up to the Arduino, gears, and servomotors, allowed for the collapsible mirror to rotate when detecting a bright light source.

It was challenging to connect all the components and actually rotate the collapsible mirror with the servomotors as the mirror part was heavy. To fix this, we used gear ratios to create enough torque to rotate the mirror. It was similarly difficult to track just the Sun as opposed to a different bright light source interfering with the project, so in the future, I would use the same mechanical components but create an algorithm that uses this code along with the coordinates of where the sun should be approximately in the sky. Also, I would update this code so that if it is tracking a light source and it finds something even brighter, then it should track that source instead. That way, the project would become more accurate.

How to Run: If you download the project you should be able to run it by hooking up some Servomotors to a power source with the Arduino and connecting it to the computer before you run the code. The servos should also be attached to gears with something in the middle that can demonstrate which way the servo rotated when detecting light.
 
