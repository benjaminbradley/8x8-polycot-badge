# Requirements

This software is designed to run on the EightByEight hardware created by BlinkinLabs.
https://shop.blinkinlabs.com/collections/wearables/products/eightbyeight-blinky

These setup instructions are written for set up on a Mac, although it should be possible to set up via other OSes as well.


# Arduino Setup

1. Download, install and run the Arduino IDE from https://www.arduino.cc/en/Main/Software#download
2. Follow the instructions at https://github.com/esp8266/Arduino/blob/master/README.md#installing-with-boards-manager
(just the "installing with boards manager" section)
3. Customize the Arduino IDE according to step 2 "Use the following settings to connect to the board" from the Getting Started instructions at https://github.com/Blinkinlabs/EightByEight/blob/master/documentation/Getting%20started%20guide.pdf


# Software Installation / Update

1. Download the polycot EightByEight git repository (where you're reading this README) to your local computer, and expand the .zip if needed.
2. Make sure the board is plugged in via USB
3. From the Arduino IDE, open the polycot.ino sketch file from the repository that you just downloaded.
4. Select Tools > Port > /dev/cu.usbmodemNNNN (where NNNN is some number)
5. Upload the sketch (via menu: Sketch > Upload, or via keyboard: Command-U)
6. You should see messages about compilation, possibly some warnings, and if it's successful you'll see a progress bar followed by "100%" and the EightByEight should start running the new software.


# Customization

Feel free to clone/fork this repository and customize it to your own needs.

If you'd like to pay someone else to do this for you, contact us at http://polycotassociates.com
