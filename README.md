BeatBag - A Speed Bag Counter
=======

![BeatBag](https://cdn.sparkfun.com/assets/1/a/6/3/b/514dd074ce395f8561000002.JPG)  

BeatBag is a speed bag counter that uses an accelerometer to counts the number hits. It's easily installed ontop of speed bag platform only needing an accelerometer attached to the top of platform. You don't have to alter the hitting surface or change out the swivel.

License Information
-------------------

The hardware design and firmware are released under [Creative Commons Share-alike 3.0](http://creativecommons.org/licenses/by-sa/3.0/).  

Feel free to use, distribute, and sell varients of BeatBag. All I ask is that you include attribution of 'Based on BeatBag'.

The BeatBag firmware was created by Nathan Seidle, and is open source so please feel free to do anything you want with it; 
you buy me a beer if you use this and we meet someday ([Beerware license](http://en.wikipedia.org/wiki/Beerware)).

Repository Contents
-------------------
* **/Firmware** 
	* SpeedBagCounter - Firmware that runs on an Arduino or RedBoard
	* MMA8452 - The library to interface to the MMA8452 accelerometer
* **/Hardware** - Hardware design files for the PCB. These are unproven (never been built) but should work. If you're building your own use a RedBoard with OpenSegment and an MMA8452 breakout board.

