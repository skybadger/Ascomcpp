# Ascomcpp
This project to test building Alpaca device drivers using cpp classes. 
I have already provided C headers and common code for the API in the form of the ASCOMRest project (http://www.github.comskybasder/ASCOMRest ) which is a dependency from a lot of the ASCOM Alpacaa projects here.  
I have some quibbles with the blackdragon astro implementation  and have always planned to use cpp objects to build ascom Alpaca driverss. 
The key thing is that they need to support: 
* REST invocation through the HTTP server and
* multiple drivers in one device.

It doesn't seem to make sense to support some things like multiple telescopes or observatories from one device ( there's nothing ruling it our either but they would bneed to be identifal in behaviour for multiple instances of the same driver.  ) 
Some things seem to go well together like filter wheel and focuser as one pairing and colvercalibrator and dew heater as another, both on a single hardware device. So the class library structure should support this and still be performant.

## Structure 
ASCOMDiscoveryManager Object to manage UDP discovery & settings
ASCOMDevice Object to manage the core common device attributes. ie support one or more drivers on  1 device. 
ASCOMCommonDriver - manages the common core functions - name, version etc. 
ASCOMDriver - derives fro ASCOMCOmmonDriver and overrides on specific type basis. 

Each class of this type supports a register() function that registers the REST aPi static handlers for each driver class.
Each class supports static handler functions for the REST API handlers. 
The key test is whether the staatic handler functions can address and interact with the class internals or just call functions on the class object that do that internally. 
Supplementarty classes iwll be required to handle things like motors, encoders, sensors etc. 

## Use
Create a single Device  instance 
Add driver instances derived from the generic class to the Device identified by the Alpaca driver type and index. 
Register handlers with HTTP server instance. 
Run. 

## Testing 

## Licensing. 
The ASCOM Alpaca api and the source code or a link to this project is required in teh credits iof this code is used in your project . Thats it. 


