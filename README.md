si446x
======

Si446X Library for Arduino

-----------------
TOTAL FAIL ALERT:

I've sadly realized that the Chinese vendor who sold me the radios shipped me a Si4432 instead of an Si446x series chip, ergo I cannot develop this library without one. I'll try to buy one, but I cannot estimate when it will arrive.

Sorry

-----------------

Recently I ordered some low-mhz (400MHz band) Si4463 based RF-Communication boards, which seem to be quite a good chip (thanks to the Silicone Libs for that) for wireless transmission of packages in RcUNO project. However, as I saw, there is not a "general purpose" library built for this chip, which seems like could be of use.

So, I decided to make one myself - and distribute freely so others can use it too, if they want to use this chip. The library is going to be quite straightforward, simple to use and basic - since the chip is actually permits various configurations and offers many methods and configurations for various uses, I thought simplifying it is actually necessary for a simple library. Yet, I want it to use as much as functionalities as it can use, without messing around too much.

So, well, let's get started!


