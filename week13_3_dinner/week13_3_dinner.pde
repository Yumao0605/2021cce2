void setup()//只做1次
{
  size(300,300);
  fill(#BEDDF5);
  textSize(50);
  textAlign(CENTER,CENTER);
}
void draw()//每秒60次
{
  background(#F5BEBE);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  //text("Hello",mouseX,mouseY);
}
