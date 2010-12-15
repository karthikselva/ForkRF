
import jpcap.*;
import jpcap.packet.Packet;

public class  NetCapture{

public static void main(String args[]) throws Throwable {

NetworkInterface[] devices = JpcapCaptor.getDeviceList();

JpcapCaptor captor=JpcapCaptor.openDevice(devices[0], 65535, false, 20);
Packet p=null;
while(true){
  //capture a single packet and print it out

if((p=captor.getPacket())!=null)  System.out.println(p);
}


}
}