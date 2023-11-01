## Description
The Mouse Input Reader is a simple C program that reads input from a mouse device file located at "/dev/input/mouse1" and processes the mouse input to track the mouse's position. This program is designed to help you understand the basics of reading input from a mouse device and provides a starting point for mouse input processing.


## Usage
No installation is required for this program, as it directly reads from the mouse device file. However, it should be run with appropriate permissions. You may need to run it with superuser privileges or adjust the file permissions to access the mouse device.
You should first complie the program and then run the program. You will see the output on the terminal.

## Safety Concerns
File Permissions: Ensure that you have the necessary permissions to read from the mouse device file. Running the program with superuser privileges may be required.
Endless Loop: The program runs in an infinite loop and will continuously read and process mouse input until you manually terminate it. Be cautious when running it, as it may affect system performance.