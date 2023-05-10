class program {
    program () {
        while(frontIsClear){
        	move();
        }
        
        if(frontIsBlocked){
        	pickbeeper();
            turnleft();
        }
        
        while(frontIsClear){
        	move();
        }
        
        if(frontIsBlocked){
        	pickbeeper();
            turnleft();
        }
        
        while(frontIsClear){
        	move();
        }
        
        if(frontIsBlocked){
        	pickbeeper();
            turnleft();
        }
        
        while(frontIsClear){
        	move();
        }
        
        while(anyBeepersInBeeperBag){
        	putbeeper();
        }
        
        turnleft();
        turnoff();
    }
}
