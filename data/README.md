Datalogs
=======

These are four datasets with accompanying videos. The videos were slowed down to count actual hits and the titles were changed to reflect the number of hits in the data.

The data looks like this:

    12894,114,-198,452
    12896,115,-198,449
    12898,116,-199,448

timestamp,x,y,z:

* timestamp is milliseconds since system powerup
* x is raw reading of -2047 to 2048
* y is raw reading of -2047 to 2048
* z is raw reading of -2047 to 2048

The accelerometer is the [MMA8452Q](https://www.sparkfun.com/products/12756) and is configured in software to +/-4g range. Each reading is 12-bit (0-4096) so 4g = 2048 and and -4g = -2047. In the above reading the accelerometer is stationary at some oblique angle. If we take sqrt(x^2+y^2+z^2) we get a magnitude of 0.97 which is pretty close to what it should be (one gravity pulling down).

In the reading above the readings are 2ms apart recorded roughly 12 seconds after power-up. We record at roughly 500Hz.

You will see a few lines in the log that look like the following:

    Accel response timeout: 16

If the accelerometer fails to respond after 10ms the controller re-initializes and re-connects with the accelerometer.
