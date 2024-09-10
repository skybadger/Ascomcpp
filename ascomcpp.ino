/*
 * Prog to test alpaca ascom cpp libs structure. 
 * 
 */
#include <Wifi.h>
#include <HttpServer.h>

/*
 * @ Handle the common discovery mechanism for each device. 
 */
class ASCOMDiscovery
{
public: 
  ASCOMDiscovery::ASCOMDiscovery( )
  { 
    ;
  };
  ASCOMDiscovery::ASCOMDiscovery(int port )
  { 
    _port = port;
  };
private:   
  int _port = 32227;
  

protected:
};

class ASCOMDriver
{
public: 
  String _hostname("testhost");
  int _port = 80;
  

  //Required overrides
  virtual boolean OnCommandBool( String command, boolean arg );
    
private:   
protected:
  
};

class ASCOMDriver:ASCOMGenericDevice
{
public: 
   ASCOMDriver::ASCOMGenericDevice( int deviceType, int deviceIndex )
   {
     this.super( deviceType, deviceIndex);
   };
private:   
  String _deviceName;
  String _deviceVersion;
  
protected:
  
};



void setup() 
{
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
