class program {
    program () {
    while(frontIsClear){
    	move();
        if(nextToABeeper){
        	pickbeeper();
        }
    }
    
    iterate(3) turnleft();
        while(frontIsClear){
    	move();
        if(nextToABeeper){
        	pickbeeper();
        }
    }
    
        turnoff();
    }
}
