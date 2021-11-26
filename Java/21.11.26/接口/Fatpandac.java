/*
** FileName: Fatpandac.java
** Author: Fatpandac
** Create: 2021/11/26
** Description: Create a interface of PatCarel. worker, farmer and cadre 
**              implement this interface.
*/

interface PatCarel{
    public void raise();
    public void play();
}

class worker implements PatCarel{
    @Override
    public void raise() {
        System.out.println("喂养小猫");
    }

    @Override
    public void play() {
        System.out.println("no time");
    }
}
class farmer implements PatCarel{
    @Override
    public void raise() {
        System.out.println("喂养小狗");
    }

    @Override
    public void play() {
        System.out.println("no money");
    }
}
class cadre implements PatCarel{
    @Override
    public void raise() {
        System.out.println("喂养小猫");
    }

    @Override
    public void play() {
        System.out.println("have money");
    }
}

public class Fatpandac {
    public static void main(String[] args) {
        PatCarel worker = new worker();
        worker.raise();
        worker.play();
        PatCarel farmer = new farmer();
        farmer.raise();
        farmer.play();
        PatCarel cadre = new cadre();
        cadre.raise();
        cadre.play();
    }
}
