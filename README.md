# Progress Bar
## Description
This is a single-line implementation of a progress bar for C/C++. As more applications arise, I will create more version in the future.
Feel free to send me any suggestions!

## Usage
To incorporate the progress bar into your project, specify the length and declare the char array for the bar using the init function. Then, make the first line of the loop call progress_bar() with the current loop number and char array.<br /><br />
The current implementation uses a wait to simulate other code running and limit the execution speed of the progress bar. In actual use, the wait can be removed as additional lines of code will limit the execution speed.

## Existing Future Work
The current version exists as a standalone piece of code, but I am planning to develop this into a header file.

## Versions
**Progress_Bar:** The size of the progress bar is determined by a variable within the code.<br />
**Progress_Bar_CL:** The size of the progress bar is determined by a command-line argument.

## License
[GNU](https://choosealicense.com/licenses/gpl-3.0/)
