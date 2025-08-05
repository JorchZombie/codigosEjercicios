package fisica;

class matematicas { // es la clase padre
        private int tiempo;
        private int ace;
        private int velo;
        private int x1,y1,x2,y2;

        public matematicas (int tiempo, int ace, int velo){
            this.tiempo = tiempo;
            this.ace = ace;
            this.velo = velo;
        }

        public int getTiempo(){
            return tiempo;
        }
        public int getAce(){
            return ace;
        }
        public int getVelo(){
            return velo;
        }

        public matematicas (int x1, int y1, int x2, int y2){
            this.x1 = x1;
            this.y2 = y2;
            this.y1 = y1;
            this.x2 = x2;
        }

        public int getX1(){
            return x1;
        }
        public int getY1(){
            return y1;
        }
        public int getX2(){
            return x2;
        }
        public int getY2(){
            return y2;
        }

}// termina class matematicas
