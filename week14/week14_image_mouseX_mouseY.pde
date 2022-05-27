PImage img;//在外面宣告 才能在setup跟draw用
void setup()//設定
{
    size(500,400);
    img = loadImage("xiaoxin.jpg");
}
void draw()
{
    image( img, mouseX, mouseY);
}
