/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package casa;

import java.io.File;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.media.AudioClip;
import javafx.scene.media.Media;
import javafx.scene.media.MediaPlayer;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;

/**
 *
 * @author joaop
 */
public class FXMLDocumentController implements Initializable{
  
  @FXML
  private Button luz1;  
  
  @FXML
  private Button luz2;
  
  @FXML
  private Button luz3;
  
  @FXML
  private Button luz4;
  
  @FXML
  private Button luz5;
  
  @FXML
  private Button porta1;
  
  @FXML
  private Button porta2;
  
  @FXML
  private Button porta3;
  
  @FXML
  private Button porta4;
  
  @FXML
  private Button porta5;
  
  @FXML
  private Button porta6;
  
  @FXML
  private Button janela1;
  
  @FXML
  private Button janela2;
  
  @FXML
  private Button janela3;
  
  @FXML
  private Button janela4;
  
  @FXML
  private Button janela5;
  
  private int count_alarme = 11;
  private URL audio_url = getClass().getResource("sirene.mp3");
  private AudioClip audio = new AudioClip(audio_url.toString());
  
  @FXML
  private Button alarme;
  
  @FXML
  private Circle luz_alarme;
  
  @FXML
  private void luz_event(ActionEvent event){
    Button a = (Button)event.getSource();
    
    if (a.getText().equals(" ")){
      a.setStyle("-fx-background-color: #686868; -fx-background-radius: 5em; -fx-border-color: #000000; -fx-border-radius: 5em");
      a.setText("");
    }
    
    else{
      a.setStyle("-fx-background-color: #fff432; -fx-background-radius: 5em; -fx-border-color: #000000; -fx-border-radius: 5em");
      a.setText(" ");
    }
  }
  
  @FXML
  private void porta_event(ActionEvent event){
    Button a = (Button)event.getSource();    
    
    if (a.getOpacity() == 1){
      a.setOpacity(0);
      count_alarme--;
    }
    else{
      a.setOpacity(1);
      count_alarme++;
    }
    
    test_alarme();
  }
  
  @FXML
  private void janela_event(ActionEvent event){
    Button a = (Button)event.getSource();    
    
    if (a.getOpacity() == 1){
      a.setOpacity(0);
      count_alarme++;
    }
    else{
      a.setOpacity(1);
      count_alarme--;
    }
    
    test_alarme();
  }
  
  private void test_alarme(){
    if (count_alarme < 11){
      if (luz_alarme.getFill() == Color.LIME){
        audio.play();
        
        alarme.setText("Desativar");
        alarme.setDisable(false);
        luz_alarme.setFill(Color.RED);
      }
      
      else if (luz_alarme.getFill() == Color.YELLOW){
        alarme.setDisable(true);
      }
    }
    
    else{
      if (luz_alarme.getFill() == Color.YELLOW){
        alarme.setDisable(false);
      }
    }
  }
  
  @FXML
  private void ativa_alarme(){
    if (luz_alarme.getFill() == Color.RED){
      audio.stop();
      luz_alarme.setFill(Color.YELLOW);
      alarme.setText("Alarme");
      test_alarme();
    }
    
    else if (luz_alarme.getFill() == Color.YELLOW){
      luz_alarme.setFill(Color.LIME);
    }
    
    else if (luz_alarme.getFill() == Color.LIME){
      luz_alarme.setFill(Color.YELLOW);
    }
  }
  
  @Override
  public void initialize(URL url, ResourceBundle rb){
    Serial.go(luz1, luz2, luz3, luz4, luz5,
              porta1, porta2, porta3, porta4, porta5, porta6,
              janela1, janela2, janela3, janela4, janela5,
              alarme);
  }  
  
}
