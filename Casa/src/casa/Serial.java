/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package casa;

import com.fazecast.jSerialComm.SerialPort;
import com.fazecast.jSerialComm.SerialPortDataListener;
import com.fazecast.jSerialComm.SerialPortEvent;
import java.io.IOException;
import java.io.InputStream;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.event.Event;
import javafx.scene.control.Button;
import javafx.scene.image.ImageView;

/**
 *
 * @author joaop
 */
public class Serial{
  public static void go(Button luz1, Button luz2, Button luz3, Button luz4, Button luz5,
                        Button porta1, Button porta2, Button porta3, Button porta4, Button porta5, Button porta6,
                        Button janela1, Button janela2, Button janela3, Button janela4, Button janela5,
                        Button alarme){
    SerialPort comPort = SerialPort.getCommPorts()[0];
    comPort.openPort();
    comPort.addDataListener(new SerialPortDataListener(){
      @Override
      public int getListeningEvents(){
        return SerialPort.LISTENING_EVENT_DATA_AVAILABLE;
      }

      @Override
      public void serialEvent(SerialPortEvent event){
        if (event.getEventType() != SerialPort.LISTENING_EVENT_DATA_AVAILABLE){
          return;
        }
        InputStream in = comPort.getInputStream();
        char t = 'a';
        
        try{
          t = (char)in.read();
        }
        catch (IOException ex){
          Logger.getLogger(Serial.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        switch(t){
          case '1':
            luz1.fire();
            break;
            
          case '2':
            luz2.fire();
            break;
            
          case '3':
            luz3.fire();
            break;
            
          case '4':
            luz4.fire();
            break;
            
          case '5':
            luz5.fire();
            break;
            
          case 'q':
            porta1.fire();
            break;
            
          case 'w':
            porta2.fire();
            break;
            
          case 'e':
            porta3.fire();
            break;
            
          case 'r':
            porta4.fire();
            break;
            
          case 't':
            porta5.fire();
            break;
            
          case 'y':
            porta6.fire();
            break;
            
          case 'a':
            janela1.fire();
            break;
            
          case 's':
            janela2.fire();
            break;
            
          case 'd':
            janela3.fire();
            break;
            
          case 'f':
            janela4.fire();
            break;
            
          case 'g':
            janela5.fire();
            break;
            
          case 'z':
            alarme.fire();
            break;
        }
      }
    });
  }
}
