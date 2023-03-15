#include <iostream>
#include <string>

using namespace std;

int main() {
  int rodada = 6;
  int aux_int = 0;
  cout << "Bem vindo senhor Felicio, vamos descobrir o campeao?" << endl<<endl;

  // vetor para guardar os jogos
  string jogos[12] = {"Felizardo x Alegre","Sorriso x Gargalhada","Felizardo x Sorriso", "Alegre x Gargalhada", "Felizardo x Gargalhada","Alegre x Sorriso","Alegre x Felizardo", "Gargalhada x Sorriso","Sorriso x Felizardo", "Gargalhada x Alegre","Gargalhada x Felizardo", "Sorriso x Alegre"};
  //vetor para guardar os resultados
  //0 = empate, 1 = casa, 2 = visitante
  int resultados[12];
  //vetor para guardar o saldo de gols de cada jogo
  int saldos_casa[12];
  int saldos_visitante[12];
  int iterador_jogos = 0;
  int gol_casa=0;
  int gol_visitante=0;
  // lendo os resultados das partidas
  for (int i = 1; i < rodada+1; i++) {
    cout << i << " rodada"<<endl<<endl;
    //primeiro jogo darodada
    cout << "Quantos gols o time da CASA fez no jogo " << jogos[iterador_jogos]<<" ?"<<endl;
    cin >> gol_casa;
    cout << "Quantos gols o time VISITANTE fez no jogo " << jogos[iterador_jogos]<<" ?"<<endl;
    cin >> gol_visitante;

    if(gol_casa>gol_visitante){
      resultados[iterador_jogos] = 1;
    }else if(gol_visitante>gol_casa){
      resultados[iterador_jogos] =2;
    }else{
      resultados[iterador_jogos] =0;
    }
    saldos_casa[iterador_jogos] = gol_casa - gol_visitante;
    saldos_visitante[iterador_jogos] = gol_visitante - gol_casa;
    
    iterador_jogos++;
    //segundo jogo da rodada
    cout << "Quantos gols o time da CASA fez no jogo " << jogos[iterador_jogos]<<" ?"<<endl;
    cin >> gol_casa;
    cout << "Quantos gols o time VISITANTE fez no jogo " << jogos[iterador_jogos]<<" ?"<<endl;
    cin >> gol_visitante;

    if(gol_casa>gol_visitante){
      resultados[iterador_jogos] = 1;
    }else if(gol_visitante>gol_casa){
      resultados[iterador_jogos] =2;
    }else{
      resultados[iterador_jogos] =0;
    }
    saldos_casa[iterador_jogos] = gol_casa - gol_visitante;
    saldos_visitante[iterador_jogos] = gol_visitante - gol_casa;
    iterador_jogos++;

  }
 
  //Calculando os resultados
  int Felizardo=0;
  int Alegre =0;
  int Sorriso =0;
  int Gargalhada =0;
  int saldo_felizardo=0;
  int saldo_sorriso=0;
  int saldo_gargalhada=0;
  int saldo_alegre=0;
  int vitoria_casa_alegre=0;
  int vitoria_visitante_alegre=0;
  int vitoria_casa_felizardo=0;
  int vitoria_visitante_felizardo=0;
  int vitoria_casa_sorriso=0;
  int vitoria_visitante_sorriso=0;
  int vitoria_casa_gargalhada=0;
  int vitoria_visitante_gargalhada=0;
  int empate_alegre=0;
  int empate_gargalhada=0;
  int empate_felizardo=0;
  int empate_sorriso=0;
  int pos;
  string casa;
  string visitante;
  for(int i=0; i<12; i++){
    pos = jogos[i].find("x");
    casa = jogos[i].substr(0,pos-1);
    visitante =jogos[i].substr(pos+2);
    if(casa=="Felizardo"){
      if(resultados[i]==1){
        Felizardo+=4;
        vitoria_casa_felizardo++;
      }else if(resultados[i]==0){
        Felizardo+=2;
        empate_felizardo++;
      }
      saldo_felizardo = saldo_felizardo + saldos_casa[i];
    }else if(casa == "Alegre"){
      if(resultados[i]==1){
        Alegre+=4;
        vitoria_casa_alegre++;
      }else if(resultados[i]==0){
        Alegre+=2;
        empate_alegre++;
      }
      saldo_alegre = saldo_alegre + saldos_casa[i];
    }else if(casa =="Sorriso"){
      if(resultados[i]==1){
        Sorriso+=4;
        vitoria_casa_sorriso++;
      }else if(resultados[i]==0){
        Sorriso+=2;
        empate_sorriso++;
      }
      saldo_sorriso = saldo_sorriso + saldos_casa[i];
    }else if(casa == "Gargalhada"){
      if(resultados[i]==1){
        Gargalhada+=4;
        vitoria_casa_gargalhada++;
      }else if(resultados[i]==0){
        Gargalhada+=2;
        empate_gargalhada++;
      }
      saldo_gargalhada = saldo_gargalhada + saldos_casa[i];
    }

    if(visitante == "Alegre"){
     if(resultados[i]==2){
        Alegre+=5;
        vitoria_visitante_alegre++;
      }else if(resultados[i]==0){
        Alegre+=2;
        empate_alegre++;
      }
      saldo_alegre = saldo_alegre + saldos_visitante[i];
            
    }
    if(visitante == "Felizardo"){
      if(resultados[i]==2){
        Felizardo+=5;
        vitoria_visitante_felizardo++;
      }else if(resultados[i]==0){
        Felizardo+=2;
        empate_felizardo++;
      }
      saldo_felizardo = saldo_felizardo + saldos_visitante[i];
    }
    if(visitante == "Gargalhada"){
      if(resultados[i]==2){
        Gargalhada+=5;
        vitoria_visitante_gargalhada++;
      }else if(resultados[i]==0){
        Gargalhada+=2;
        empate_gargalhada++;
      }
      saldo_gargalhada = saldo_gargalhada + saldos_visitante[i];      
    }
    if(visitante == "Sorriso"){
      if(resultados[i]==2){
        Sorriso+=5;
        vitoria_visitante_sorriso++;
      }else if(resultados[i]==0){
        Sorriso+=2;
        empate_sorriso++;
      }
      saldo_sorriso = saldo_sorriso + saldos_visitante[i];
    }
  }

  //calculando a pontuação final
  Felizardo = Felizardo + saldo_felizardo;
  Alegre = Alegre + saldo_alegre;
  Sorriso = Sorriso + saldo_sorriso;
  Gargalhada = Gargalhada + saldo_gargalhada;
  
  //ordenando de forma decrescente
  int ordenador[4];
  ordenador[0] = Felizardo;//Felizardo
  ordenador[1] = Alegre;//Alegre
  ordenador[2] = Sorriso;//Sorriso
  ordenador[3] = Gargalhada;//Gargalhada
  int temp;
  //bubbleSort
  for(int i=0;i<4;i++){
   for(int j = i+1; j<4; j++)
   {
      if(ordenador[j] > ordenador[i]) {
         temp = ordenador[i];
         ordenador[i] = ordenador[j];
         ordenador[j] = temp;
      }
   }
  }

  //Imprimindo o resultado
  cout<< "pontuacao final" <<endl<<endl;
  for(int i=0;i<4;i++){
    if(ordenador[i]==Felizardo){
      cout<< "Felizardo "<<Felizardo<<" pontos, "<<vitoria_visitante_felizardo<<" vitorias fora de casa, "<<vitoria_casa_felizardo<<" vitorias em casa, "<<empate_felizardo<<" empates e saldo de "<<saldo_felizardo <<" gols" <<endl<<endl;
    }else if(ordenador[i]==Alegre){
      cout<< "Alegre "<<Alegre<<" pontos, "<<vitoria_visitante_alegre<<" vitorias fora de casa, "<<vitoria_casa_alegre<<" vitorias em casa, "<<empate_alegre<<" empates e saldo de "<<saldo_alegre <<" gols" <<endl<<endl;
    }else if(ordenador[i]==Gargalhada){
        cout<< "Gargalhada "<<Gargalhada<<" pontos, "<<vitoria_visitante_gargalhada<<" vitorias fora de casa, "<<vitoria_casa_gargalhada<<" vitorias em casa, "<<empate_gargalhada<<" empates e saldo de "<<saldo_gargalhada <<" gols" <<endl<<endl;
    }else if (ordenador[i]==Sorriso){
  cout<< "Sorriso "<<Sorriso<<" pontos, "<<vitoria_visitante_sorriso<<" vitorias fora de casa, "<<vitoria_casa_sorriso<<" vitorias em casa, "<<empate_sorriso<<" empates e saldo de "<<saldo_sorriso <<" gols" <<endl<<endl;
    }
  }
}