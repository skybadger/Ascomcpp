# Ascomcpp
This project to test building Alpaca device drivers using cpp classes
I have some quibbles with blackdragon astro and have always planned to use cpp objects to build ascom Alpaca objets. 
The key thing is that they need to support REST invocation through the HTTP server and multiple drivers in one device. 

## Structure 
This class library asserts that more than one driver needs to be supported on one device instance . A good example is the use of the focuser to manage collimator motors - I need at least two on a three-point support. 
Which do you prefer- a separate device and driver for each motor or a a common device and the motors numbered 1-2 or 1-3 through the instance number ? 

ASCOMDiscoveryManager Object to manage UDP discovery & settings
ASCOMDevice Object to manage the core common device attributes. ie support one or more drivers on  1 device. 
ASCOMCommonDriver - manages the common core functions - name, version etc. 
ASCOMDriver - derives fro ASCOMCOmmonDriver and overrides on specific type basis. 

Each class of this type supports a register() function that registers the REST aPi static handlers for each driver class.
Each class supports static handler functions for the REST API handlers. 
The key test is whether the staatic handler functions can address and interact with the class internals or just call functions on the class object that do that internally. 
Supplementarty classes iwll be required to handle things like motors, encoders, sensors etc. 

## Use

## Testing 

## Licensing. 
The ASCOM Alpaca api and the source code or a link to this project is required in teh credits iof this code is used in your project . Thats it. 


