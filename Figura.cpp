/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Classe criada para...
 * @author Tiago Chaves
 * @since Projeto criado em 26/09/2024
 */
public class Figura {
    Integer a, b, c, d;
    
    
    //Figura construtor para um Ponto
    public Figura(int a){
        this.a = a;
    }
    
    public Figura(int a, int b){
        this.a = a;
        this.b = b;
    }
    
    public Figura(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    
    public Figura(int a, int b, int c, int d){
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;        
        
    }
    
     public void exibirFigura(){
            if(a != null && b != null && c == null && d == null)
                exibirFigura(1);
            else if (a != null && b != null && c != null && d != null )
                exibirFigura(2);
            else if (a != null && b != null && c != null && d != null )
                exibirFigura(3);
            else if (a != null && b != null && c != null && d != null )
                exibirFigura(4);
        }
  
     
    
    //Metodo comum para exibir os dados de um Ponto
    public void exibirFigura(String w, float p){
        System.out.println("É um ponto de coordenadas " + a + " e " + b);
    }
    
        public void exibirFigura(int r){
        System.out.println("É uma linha de coordenadas " + a);
        
    }
        
        public void exibirFigura(String w, float p, float e){
        System.out.println("É um triângulo com as coordenadas:" + a + " e " + b + " e " + c);
    }
        
        public void exibirFigura(String w, float p, float e, float q){
        System.out.println("É um retângulo com as coordenadas: " + a + " e " + b + " e " + c + " e " + d);
        
    }
      
 }//Fim da classe
