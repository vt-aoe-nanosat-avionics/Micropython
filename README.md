# Micropython on the HOKIE SAT
This repository goes over the process of putting Micropython onto the HOKIE SAT C&DH Board.

## Building the software
Before we can flash the board, we need to put some files together to get the .bin file needed. First, we need to clone the existing Micropython repository as we need things in order to build the firmware. To do this:

```bash
cd git-repos/
git clone git@github.com:micropython/micropython.git
cd micropython
git submodule update --init
```
From here, we will need to install pyserial which is a port extension for WIN32, OSX, LINUX, etc.

```bash
pip install pyserial
```
