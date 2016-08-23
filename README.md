# Zapper
Zapper String to Binary Demonstration
Author: Ryan Pomario

Purpose of the demonstration is to convert a string input from the command line into a binary respresentation matrix.  The matrix width and height can be specified by the user.
Each binary value represents a pixel depth that can be used to create a Q-code.

Limitations:
Q-code Reference markers, revisions and error checksums are not encoded.

Further Enhancements:
The output string can be parsed our of the function into memory space.  This can then be further manipulated to 
place the result on a graphic display.  Special markers can be placed in the string to assist with building the Q-code, ie. refernce markers, etc..


Note:
Limited time that I had to focus on this project did not allow me the freedom to research the particuler CPU specified, install the necessary toolchains and then impliment a CPU ready version.
This implementation was compiled on Ubuntu Linux Kernel 4.4.0-31 using the gcc toolchain.
