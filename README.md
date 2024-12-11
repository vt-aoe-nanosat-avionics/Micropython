# Micropython on the HOKIE SAT
This repository covers the process of installing Micropython on the HOKIE SAT C&DH Board. Eventually, you will be able to flash the roughly 300KB file onto the redesigned 100-pin HOKIE SAT board (but the original 64-pin microcontroller board won't reflect it). 

## Building the software
Before we can flash the board, we need to assemble some files to get the .bin file required. First, we need to clone the existing Micropython repository as we need things to build the firmware. To do this:

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

## Building Custom Firmware for the Board
What you will need to do is navigate to the STM32 Port and copy an existing board to use in your project. It is best to use the a board copy that closely relates to your microcontroller. For instance, I utilized the STM32L496GDISC board because we are using an STM32L496 in this HOKIE_SAT. To do this:

```bash
cd micropython/ports/stm32
cp -r boards/STM32L496GDISC/CUSTOM_NAME_HERE
```
Next you will need to update a couple of the files in this new folder you made with the firmware that you are using on your board. First, update mpconfigboard.h to match the parts that you are utilizing on your device. Next, specifiy in the mpconfigboard.mk file the MCU series and the CMSIS_MSCU. For ours, we used:
```bash
MCU_SERIES = l4
CMSIS_MSCU = STM32L496xx
```
Once this is gone, it is also important to update the pins.csv file. You need to make sure that the pins that you are using reflect the ones being used to make the firmware. If you get stuck on this, feel try to refer to the csv file in this repository. If you want to configure the clock, feel free to update stm32l4xx_hal_config.h. From here you should be good to go to make the firmware.bin file. To do this, go to the following directory in the file and do the following:
```bash
cd micropython/ports/stm32
make BOARD=MY_CUSTOM_BOARD
```
From here in the stm32 folder, you should see a build file that has your firmware.bin file, which is what you need to flash the board with. 
