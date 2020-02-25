import java.applet.Applet; 
import java.awt.Graphics; 
public class HelloWorld extends Applet 
{ 
	 
	@Override
	public void paint(Graphics g) 
	{ 
		g.drawString("Hello World", 200, 200); 
	} 
	
} 
