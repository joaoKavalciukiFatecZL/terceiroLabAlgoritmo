/*
3� LABORAT�RIO DE ALGORITMOS

Objetivo: Entender a estrutura de um programa, trabalhando com organiza��o do c�digo em fun��es e procedimentos.

Tarefa: Escrever um algoritmo/programa que receba dois valores inteiros positivos (x e y) e informar se x � divis�vel por y. Vamos focar no problema quando y � 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 ou 25.

Integrantes:
Eduardo Martins Lima R.A: 1111392121036
Felipe Fernandes Soares R.A: 1111392121038
Jo�o Kavalciuki dos Santos Sanches R.A: 1111392121004
Nikolas Ramon Marques de Oliveira R.A: 1111392121006
Thalya dos Santos Cuin R.A: 1111392121002
*/
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<math.h>

//prot�tipo das fun��es conforme solicitado no requisito 4.
void imprimirObjetivoLab();
bool testarDivisibilidade(bool x, int divisor, int dividendo);
bool divisibilidade2(int num);
bool divisibilidade3(int num);
bool divisibilidade4(int num);
bool divisibilidade5(int num);
bool divisibilidade6(int num);
bool divisibilidade7(int num);
bool divisibilidade8(int num);
bool divisibilidade9(int num);
bool divisibilidade10(int num);
bool divisibilidade11(int num);
bool divisibilidade12(int num);
bool divisibilidade15(int num);
bool divisibilidade25(int num);
void flush_in();

int main(void){
    bool x;
    int loop, cont;
    int divisor,dividendo;
    setlocale(LC_ALL,"portuguese");
            loop = 1;
            imprimirObjetivoLab();// Impress�o do Procedimento conforme requisito 5.
    while (loop == 1){//repeti��o do la�o requisito 11.
            printf("Dividendo: ");// Solicita��o do valores e teste de entrada conforme requisito 6.
            scanf("%d",&dividendo);

            while(dividendo != 2 && dividendo != 3 && dividendo != 4 && dividendo != 5 && dividendo != 6 && dividendo != 7 && dividendo != 8 
            && dividendo != 9 && dividendo != 10 && dividendo != 11 && dividendo != 12 && dividendo != 15 && dividendo != 25) {
            printf("\nDivisor inválido, favor informar novos valores.");
            printf("\nDividendo: ");
            scanf("%d", &dividendo);
            }

            if(dividendo <= 0 || dividendo>99999){
                printf("O valor do dividendo deve ser maior que zero e menor 99999\n");
                loop = 1;
            }else{
                printf("Divisor: ");
                scanf("%d",&divisor);
                switch (divisor){
                case 2:
                    x = divisibilidade2(dividendo); // chamada da fun��o.
                    testarDivisibilidade(x,dividendo,divisor);//teste de divisibilidade conforme item 8.
                    loop = 0;
                    break;
                case 3:
                    x = divisibilidade3(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;  
                case 4:
                    x = divisibilidade4(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 5:
                    x = divisibilidade5(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 6:
                    x = divisibilidade6(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 7:
                    x = divisibilidade7(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 8:
                    x = divisibilidade8(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;  
                case 9:
                    x = divisibilidade9(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 10:
                    x = divisibilidade10(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 11:
                    x = divisibilidade11(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break; 
                case 12:
                    x = divisibilidade12(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 15:
                    x = divisibilidade15(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;
                case 25:
                    x = divisibilidade25(dividendo);
                    testarDivisibilidade(x,dividendo,divisor);
                    loop = 0;
                    break;               
                }
            }   
                    printf("\n");
                    cont = 1;
                    while(cont == 1){
                        flush_in();// fun��o para limpar as informa��es que estavam armazenadas na entrada de dados.
                        printf("Deseja realizar novo teste (s/n)?\n"); // solicita��o de repetir do procedimento e respeitando as regras de requisitos conforme item 11.
                        switch (getchar()){
                            case 's':
                            case 'S':
                                cont = 0;
                                loop = 1;
                                break;
                            case 'n':
                            case 'N':
                                cont = 0;
                                loop = 0;
                                break;
                            default:
                                printf("\n");
                                printf("Op��o inv�lida!\n");
                                cont = 1;
                                break;
                            }
                    } 
        }    
    system("pause");                       
    return 0;
}
//defini��es das fun��es
void imprimirObjetivoLab(){
    printf("Programa TESTE DE DIVISIBILIDADE\n");
    printf("\n");
    printf("O programa tem por objetivo informar se um determinado n�mero � ou n�o divis�vel por outro.\n");
    printf("\n");
    printf("Os testes de divisibilidade s�o v�lidos para os seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 e 25.\n");
    printf("\n");
}
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}
bool testarDivisibilidade(bool x,int dividendo, int divisor){
    if(x == true){
        printf("%d � divisivel por %d ",dividendo,divisor);
    }else{
        printf("%d n�o � divisivel por %d ",dividendo,divisor);
    }

}
bool divisibilidade2(int num){
    int dir;
    bool div2;
    dir = num%10;
        if((dir == 0)||(dir == 2)||(dir == 4)||(dir == 6)||(dir == 8)){
                div2 = true;
        }else{
                div2 = false;
        }
        return div2;
}
bool divisibilidade3(int num){
    int  esq, meio[10],dir,verificador;
    bool div3;
    if(num<=9){
        if((num == 3)||(num == 6)||(num == 9)){
            div3=true;
        }else{
            div3=false;
        }
    }else if(num>9 && num<=99){
        esq = num/10;
        dir = num%10;
        verificador = dir+esq;

        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>99 && num<=999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        verificador = esq + meio[0] + dir;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>999&&num<=9999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] + esq;
         if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else {
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        meio[2] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] +meio[2] + esq;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }

    }

    return div3;
}
bool divisibilidade4(int num){
    int dir;
    bool div4;
    dir = num%10;
        if((dir == 0)||(dir == 2)||(dir == 4)||(dir == 6)||(dir == 8)){
                div4 = true;
        }else{
                div4 = false;
        }
    return div4;
}
bool divisibilidade5(int num){
    int dir;
    bool div5;
    dir = num%10;
    if(dir == 5 || dir == 0){
        div5 = true;
    }else{
        div5 = false;
    }
    return div5;
}
bool divisibilidade6(int num){
    int  esq, meio[10],dir,verificador;
    bool div6,div2,div3;
    // Teste de divisibilidade por 2
    dir = num%10;
        if((dir == 0)||(dir == 2)||(dir == 4)||(dir == 6)||(dir == 8)){
                div2 = true;
        }else{
                div2 = false;
        }
    // Teste de divisibilidade por 3    
       if(num<=9){
        if((num == 3)||(num == 6)||(num == 9)){
            div3=true;
        }else{
            div3=false;
        }
    }else if(num>9 && num<=99){
        esq = num/10;
        dir = num%10;
        verificador = dir+esq;

        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>99 && num<=999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        verificador = esq + meio[0] + dir;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>999&&num<=9999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] + esq;
         if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else {
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        meio[2] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] +meio[2] + esq;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }
    if(div2 == true && div3==true){
        div6 = true;
    }else{
        div6 = false;
    }
        return div6;
}
bool divisibilidade7(int num){
    int dir, esq;
    bool div7;
    if(num<=99){
        do{
            num -= 7;
        }while(num>0);
        if(num == 0){
            div7 = true;
        }else{
            div7 = false;
        }      
    }else{
        do{
        dir = num%10;
        dir *= 2;
        esq = num/10;
        num = fabs(esq-dir);
        }while(num>=70);
            if((num == 0)||(num == 7)||(num == 14)||(num == 21)||(num == 28)||(num == 35)||(num == 42)||(num == 49)||(num == 54)||(num == 63)||(num == 70)){
                div7 = true;
            }else{
                div7 = false;
            }
        }
    return div7;
    
}
bool divisibilidade8(int num){
   int dir;
    bool div8;
    dir = num%10;
        if((dir == 0)||(dir == 2)||(dir == 4)||(dir == 6)||(dir == 8)){
                div8 = true;
        }else{
                div8 = false;
        }
        return div8;
}
bool divisibilidade9(int num){
    int  esq, meio[10],dir,verificador;
    bool div9;
    if(num<=9){
        if((num == 3)||(num == 6)||(num == 9)){
            div9=true;
        }else{
            div9=false;
        }
    }else if(num>9 && num<=99){
        esq = num/10;
        dir = num%10;
        verificador = dir+esq;

        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
               div9=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
                div9=false;
            }
        }
    }else if(num>99 && num<=999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        verificador = esq + meio[0] + dir;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
               div9=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
                div9=false;
            }
        }
    }else if(num>999&&num<=9999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] + esq;
         if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
               div9=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
                div9=false;
            }
        }
    }else {
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        meio[2] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] +meio[2] + esq;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
                div9=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div9=true;
            }else{
                div9=false;
            }
        }

    }
    return div9;
}
bool divisibilidade10(int num){
    int dir;
    bool div10;
    dir = num%10;
    if(dir == 0){
        div10 = true;
    }else{
        div10 = false;
    }
    return div10;
}
bool divisibilidade11(int num){
    int par[5], impar[5],somaPar=0,somaImpar=0,resp;
    bool div7;
   if(num<11){  
        div7 = false;
    }else if(num>=11&&num<100){
            impar[0] = num%10;
            par[0] = num/10;
            resp= fabs(par[0] - impar[0]);
                if(resp == 0){
                    div7 = true;
                }else{
                    div7 = false;
                }
    }else if (num>=100 && num<1000){
            impar[0]=num%10;
            par[0]=num%100;
            par[0]/=10;
            impar[1]=num/100;
            somaImpar = impar[0]+impar[1];
            somaPar = par[0];
            resp=fabs(somaPar-somaImpar);
                if(resp>=10){
                    impar[2] = resp%10;
                    par[2] = resp/10;
                    resp= fabs(par[2] - impar[2]);
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }else{
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }

    }else if(num>=1000 && num<10000){
            impar[0]=num%10;
            par[0]=num%100;
            par[0]/=10;
            impar[1] = num%1000;
            impar[1] /= 100;
            par[1] = num/1000;
            somaImpar = (impar[0]+impar[1]);
            somaPar = (par[0]+par[1]);
            resp = fabs(somaImpar-somaPar);
                if(resp>=10){
                    impar[2] = resp%10;
                    par[2] = resp/10;
                    resp= fabs(par[2] - impar[2]);
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }else{
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }
    }else{
            impar[0] = num%10;
            par[0] = num%100;
            par[0] /= 10;
            impar[1] = num%1000;
            impar[1] /= 100;
            par[1] = num%10000;
            par[1] /= 1000;
            impar[2] = num/10000;
            somaImpar = (impar[0]+impar[1]+impar[2]);
            somaPar = (par[0]+par[1]);
            resp = fabs(somaImpar-somaPar);
                if(resp>=10){
                    impar[3] = resp%10;
                    par[3] = resp/10;
                    resp= fabs(par[3] - impar[3]);
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }else{
                    if(resp == 0){
                        div7 = true;
                    }else{
                        div7 = false;
                    }
                }

    }
    return div7;
}
bool divisibilidade12(int num){
    int  esq, meio[10],dir,verificador;
    bool div3,div4,div12;
    //Teste de divisibilidade por 3.
    if(num<=9){
        if((num == 3)||(num == 6)||(num == 9)){
            div3=true;
        }else{
            div3=false;
        }
    }else if(num>9 && num<=99){
        esq = num/10;
        dir = num%10;
        verificador = dir+esq;

        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>99 && num<=999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        verificador = esq + meio[0] + dir;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>999&&num<=9999){
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] + esq;
         if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else {
        dir = num%10;
        esq = num/10;
        meio[0] = esq%10;
        esq /= 10;
        meio[1] = esq%10;
        esq /= 10;
        meio[2] = esq%10;
        esq /= 10;
        verificador = dir + meio[0] + meio[1] +meio[2] + esq;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }
    //teste de divisibilidade por 4.
    dir= num%100;
    do{
        dir-=4;
    }while(dir>0);
    if(dir == 0){
        div4=true;
    }
    else{
        div4=false;
    }
    if(div3 == true && div4 == true){
        div12 = true;
    }else{
        div12 = true;
    }
    return div12;
}
bool divisibilidade15(int num){
    int  esq, meio,meio1,meio2,dir,verificador;
    bool div3,div5,div15;
    //Teste de Divisibilidade por 3.
    if(num<=9){
        if((num == 3)||(num == 6)||(num == 9)){
            div3=true;
        }else{
            div3=false;
        }
    }else if(num>9 && num<=99){
        esq = num/10;
        dir = num%10;
        verificador = dir+esq;

        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>99 && num<=999){
        dir = num%10;
        esq = num/10;
        meio = esq%10;
        esq /= 10;
        verificador = esq + meio + dir;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else if(num>999&&num<=9999){
        dir = num%10;
        esq = num/10;
        meio1 = num%10;
        esq /= 10;
        meio = num%10;
        esq /= 10;
        verificador = dir + meio + meio1 + esq;
         if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
               div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }else{
        dir = num%10;
        esq = num/10;
        meio1 = num%10;
        esq /= 10;
        meio2 = num%10;
        esq /= 10;
        meio = esq%10;
        esq /= 10;
        verificador = dir + meio + meio1 +meio2 + esq;
        if(verificador<=9){
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false; 
            }
        }else{
            esq = verificador/10;
            dir = verificador%10;
            verificador = dir+esq;
            if((verificador == 3)||(verificador == 6)||(verificador == 9)){
                div3=true;
            }else{
                div3=false;
            }
        }
    }
    //teste de divisibilidade por 5.
    dir = num%10;
    if(dir == 5 || dir == 0){
        div5 = true;
    }else{
        div5 = false;
    }
    if(div3 == true && div5 == true){
        div15 = true;
    }else{
        div15 = false;
    }
    return div15;
}
bool divisibilidade25(int num){
    int dir;
    bool div25;
    dir = num%10;
    if(dir == 5 || dir == 0){
        div25 = true;
    }else{
        div25 = false;
    }
    return div25;
}
