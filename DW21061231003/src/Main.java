import java.awt.*;


public class Main {
    public static void main(String[] args) {
        Frame window=new Frame();
        MenuBar bar=new MenuBar();
        Menu file=new Menu("文件");
        Menu edit=new Menu("编辑");
        Menu help=new Menu("帮助");

        bar.add(file);
        bar.add(edit);
        bar.add(help);

        MenuItem open=new MenuItem("打开");
        MenuItem save=new MenuItem("保存");
        MenuItem copy=new MenuItem("复制");
        MenuItem paste=new MenuItem("粘贴");
        MenuItem find=new MenuItem("查看");
        MenuItem about=new MenuItem("关于");


        file.add(open);
        file.add(save);

        edit.add(copy);
        edit.add(paste);

        help.add(find);
        help.add(about);

        window.setMenuBar(bar);

        Button bt1=new Button("发射");
        Button bt2=new Button("发射");
        Button bt3=new Button("发射");

        window.setLayout(null);

        bt1.setBounds(100,100,200,50);
        bt2.setBounds(300,100,200,50);
        bt3.setBounds(500,100,200,50);

        window.add(bt1);
        window.add(bt2);
        window.add(bt3);

        window.setSize(800,600);
        window.setBackground(Color.red);
        window.setVisible(true);
    }
}