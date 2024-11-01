  #include "add.h"
  #include<iostream>
 
  void sommeMatrice2 ( float  matA[2][2]  , float  matB[2][2] ) {
     
       //addition des matrices  
     float matsomme[2][2] = {};
     for( int i = 0; i < 2; i++) {
      for( int j = 0; j < 2; j++) {
        matsomme[i][j] = matA[i][j] + matB[i][j] ;  

     }
     }
      //affichage de la matrice sommme
     for( int i = 0;  i< 2; i++) {
      for( int j = 0; j < 2; j++) {
        std::cout << matsomme[i][j] << "   "  ;
      }
      std::cout << std::endl;
     }

     
    }

  


 void soustractionMat2( float matA1[2][2], float matB1[2][2] ) {

//soustraction de deux matrices d'ordre 2

 float matsoust[2][2] = {};
     for( int i = 0; i < 2; i++) {
      for( int j = 0; j < 2; j++) {
        matsoust[i][j] = matA1[i][j] - matB1[i][j] ;
      }

     }


      //affichage de la matrice 

     for( int i = 0;  i< 2; i++) {
      for( int j = 0; j < 2; j++) {
        std::cout << matsoust[i][j] << "   "  ;
      }
      std::cout << std::endl;
     }


}
 
//multiplication des deux matrices d'ordre 2

void multiMat2 ( float matA3[2][2], float matB3[2][2] ) {
float matproduit[2][2] = {}; 

matproduit[0][0]= matA3[0][0] * matB3[0][0] + matA3[0][1] * matB3[1][0] ;
matproduit[0][1]= matA3[0][0] * matB3[0][1] + matA3[0][1] * matB3[1][1] ;
matproduit[1][0]= matA3[1][0] * matB3[0][0] + matA3[1][1] * matB3[1][0] ;
matproduit[1][1]= matA3[1][0] * matB3[0][1] + matA3[1][1] * matB3[1][1] ;


for ( int i=0; i<2 ; i++ ) {
  for ( int j=0 ; j<2 ; j++ ) {
 std::cout << matproduit[i][j] << "   "  ;
  }
   std::cout << std::endl;
}



}

//determinant d'une matrice

float determinant ( float matE[2][2] ) {
  float det2 ;
  det2 = ( matE[0][0] * matE[1][1] ) - ( matE[0][1] * matE[1][0] ) ;
  std::cout << det2 << "   " ;
  std::cout << std::endl;
  return det2 ;
  
}

//inverse d'une matrice

void inverseMat2 ( float matF[2][2] ) {
  float det ;
  float inv2[2][2] = {} ;
  float frac ;

   det = ( matF[0][0] * matF[1][1] ) - ( matF[0][1] * matF[1][0] ) ;

  if ( det == 0 ) {
    std::cout << "l'inverse de cette matrice n'existe pas" << std::endl ;

  }
  else {
   frac = 1 / det ;
  
    inv2[0][0] =  frac * matF[1][1] ;
    inv2[0][1] = - frac * matF[0][1] ;
    inv2[1][0] = - frac * matF[1][0] ;
    inv2[1][1] = frac * matF[0][0]  ;
  }
  for ( int i =0 ; i < 2 ; i++ ) {
    for ( int j = 0 ; j < 2 ; j++ ) {
      std::cout << inv2[i][j] << "  " ;

    }
    std::cout << std::endl ;
  }

}

 //transpose d'une matrice d'ordre 2

 void transpoMat2 ( float matG[2][2]  ) {
  float transpo[2][2] ;

  //calcul de la transpose

 for ( int i = 0 ; i < 2 ; i++ ) {
   for ( int j = 0 ; j < 2 ; j++ ) {
     transpo[i][j] = matG[j][i] ;
   }
 }

//affichage de la matrice initiale

 std::cout << " matrice initiale :" << std::endl ;
 for ( int i = 0 ; i < 2 ; i++ ) {
  for ( int j = 0 ; j < 2 ; j++ ) {
    std::cout << matG[i][j] << "   " ;
  }
  std::cout << std::endl ;
 }
 
 //affichage de la matrice transpose

 std::cout << " matrice transpose :" << std::endl ;
  for ( int i = 0 ; i < 2 ; i++ ) {
  for ( int j = 0 ; j < 2 ; j++ ) {
    std::cout << transpo[i][j] << "   " ;
  }
  std::cout << std::endl ;
 }
}
 
//trace d'une matrice d'ordre 2

float traceMat2 (float matH[2][2] ) {

  float tr ;

  tr = matH[0][0] + matH[1][1] ;
  std::cout << tr << "   " ;
std::cout << std::endl ;
  return tr ;
}
