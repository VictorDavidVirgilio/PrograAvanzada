/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package herenciayreutilizacion;
import java.awt.BorderLayout;
import java.awt.Dialog;
import java.awt.Button;
import java.awt.Checkbox;
import java.awt.Frame;
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;
import java.awt.Label;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.awt.event.ActionListener;//1/5 interface ActionListener
import java.awt.event.ActionEvent;//1/5

/**
 *
 * @author Sala2
 */
public class MyDialog implements ActionListener{
    Dialog D;
    Checkbox CB1,CB2,CB3,CB4,CB5,CB6;
    Button BC, BA, B;
    Frame F;
    BorderLayout BL;
    //GridBagConstraints C;
    
    public  MyDialog(/*String puesto[], Label L*/){
    //public  MyDialogFrame (f,boolean b){
      //D=new Dialog(new Frame(),"Tipo de eleccion"); 
        F=new Frame("elecciones");
        //conficuración window
                F = new Frame("Editor Línea por Línea");
        F.setLayout(BL = new BorderLayout());
      
        B.addActionListener(this);//3/5 interface ActionListener
        
        F.setSize(400, 300);
        F.setLocationRelativeTo(null);
        F.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                F.dispose();
                System.exit(0);
            }            
        });
         F.add(D,BorderLayout.CENTER);
        F.setVisible(true);
      
      D=new Dialog(F,"Tipo de eleccion");
      D.setLayout(new GridBagLayout());
      GridBagConstraints c=new GridBagConstraints();
      CB1=new Checkbox("presidente");
      CB2=new Checkbox("diputado");
      CB3=new Checkbox("senador");
      CB4=new Checkbox("gobernador");
      CB5=new Checkbox("meme king");
      CB6=new Checkbox("delegado");
      BC=new Button("Cancelar deez Nutz");
      BA=new Button("Acepatar fierro pariente");
        //L= new Label(" ");
     
      D.setSize(300, 200);
      D.setVisible(true);
      D.setLocationRelativeTo(null);
      
      
    }
        public void actionPerformed(ActionEvent ae){//4/5 interface ActionListener
        Boolean Bool=false;
        if(ae.getSource().equals(B)){//5/5 interface ActionListener
          
        }
    }
    public static void main(String[] args) {
        //new MyDialog();
    }
}
///agregar manej;