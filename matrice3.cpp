#include <iostream> 
  #include "add3.h"


 void sommeMatrice3 ( int  matC[3][3]  , int  matD[3][3] ) {
     
      //addition des matrices   
     int mat3somme[3][3] = {};
     for( int i = 0; i < 3; i++) {
      for( int j = 0; j < 3; j++) {
        mat3somme[i][j] = matC[i][j] + matD[i][j] ;
      }

     }
      
      //affichage de la matrice somme
     for( int i = 0;  i< 3; i++) {
      for( int j = 0; j < 3; j++) {
        std::cout << mat3somme[i][j] << "   "  ;
      }
      std::cout << std::endl;  //nouvelle ligne apres chaque ligne de la matrice
     }

     
    }


void soustractionMat3( float matC1[3][3], float matD1[3][3] ) { 

//soustraction de deux matrices d'ordre 3

 float mat3soust[3][3] = {};
     for( int i = 0; i < 3; i++) {
      for( int j = 0; j < 3; j++) {
        mat3soust[i][j] = matC1[i][j] - matD1[i][j] ;
      }

     }


      //affichage de la matrice 

     for( int i = 0;  i< 3; i++) {
      for( int j = 0; j < 3; j++) {
        std::cout << mat3soust[i][j] << "   "  ;
      }
      std::cout << std::endl;
     }


}

//multiplication des deux matrices d'ordre 3

void multiMat3 ( float matC3[3][3], float matD3[3][3] ) {
float mat3produit[3][3] = {}; 

mat3produit[0][0]= matC3[0][0] * matD3[0][0] + matC3[0][1] * matD3[1][0] + matC3[0][2] + matD3[2][0] ;
mat3produit[0][1]= matC3[0][0] * matD3[0][1] + matC3[0][1] * matD3[1][1] + matC3[0][2] + matD3[2][1];
mat3produit[0][2]= matC3[0][0] * matD3[0][2] + matC3[0][1] * matD3[1][2] + matC3[0][2] + matD3[2][2];

mat3produit[1][0]= matC3[1][0] * matD3[0][0] + matC3[1][1] * matD3[1][0] + matC3[1][2] + matD3[2][0]; 
mat3produit[1][1]= matC3[1][0] * matD3[0][1] + matC3[1][1] * matD3[1][1] + matC3[1][2] + matD3[2][1] ;
mat3produit[1][2]= matC3[1][0] * matD3[0][2] + matC3[1][1] * matD3[1][2] + matC3[1][2] + matD3[2][2] ;

mat3produit[2][0]= matC3[2][0] * matD3[0][0] + matC3[2][1] * matD3[1][0] + matC3[2][2] + matD3[2][0] ;
mat3produit[2][1]= matC3[2][0] * matD3[0][1] + matC3[2][1] * matD3[1][1] + matC3[2][2] + matD3[2][1] ;
mat3produit[2][2]= matC3[2][0] * matD3[0][2] + matC3[2][1] * matD3[1][2] + matC3[2][2] + matD3[2][2] ;



for ( int i=0; i<3 ; i++ ) {
  for ( int j=0 ; j<3 ; j++ ) {
 std::cout << mat3produit[i][j] << "   "  ;
  }
   std::cout << std::endl;
}



}

//determinant d'une matrice

float determinant3 ( float matE1[3][3] ) {
  float det3 ;
  det3 =  matE1[0][0] * ( matE1[1][1] * matE1[2][2] - matE1[1][2] * matE1[2][1] ) - matE1[0][1] *( matE1[1][0] * matE1[2][2] - matE1[1][2] * matE1[2][0] ) + matE1[0][2] * ( matE1[1][0] * matE1[2][1] - matE1[1][1] * matE1[2][0] ) ; 
  std::cout << det3 << "   " ;
  std::cout << std::endl;
  return det3 ;
}

//inverse d'une matrice d'oerdre 3

void inverseMat3 ( float matF1[3][3] ) {
float invMat[3][3] ;
float detr = determinant3 (matF1);

if ( detr == 0 ) {
  std::cout << "la matrice n'a pas d'inverse , le determinant est nul" << std::endl ;
}
if ( detr != 0) {
  float invdetr = 1/detr ;

   //calcul des cofacteurs et de la matrice inverse
  
  invMat[0][0] = invdetr * ( matF1[1][1] * matF1[2][2] - matF1[1][2] * matF1[2][1] );
  invMat[0][1] = invdetr * ( matF1[0][2] * matF1[2][1] - matF1[0][1] * matF1[2][2] );
  invMat[0][2] = invdetr * ( matF1[0][1] * matF1[1][2] - matF1[0][2] * matF1[1][1] );
  invMat[1][0] = invdetr * ( matF1[1][2] * matF1[2][0] - matF1[1][0] * matF1[2][2] );
  invMat[1][1] = invdetr * ( matF1[0][0] * matF1[2][2] - matF1[0][2] * matF1[2][0] );
  invMat[1][2] = invdetr * ( matF1[0][2] * matF1[1][0] - matF1[0][0] * matF1[1][2] );
  invMat[2][0] = invdetr * ( matF1[1][0] * matF1[2][1] - matF1[1][1] * matF1[2][0] );
  invMat[2][1] = invdetr * ( matF1[0][1] * matF1[2][0] - matF1[0][0] * matF1[2][1] );
  invMat[2][2] = invdetr * ( matF1[0][0] * matF1[1][1] - matF1[0][1] * matF1[1][0] );

}
 std::cout << " l'inverse de cette matrice est : " << std::endl ;
for ( int i=0; i<3 ; i++ ) {
  for ( int j=0 ; j<3 ; j++ ) {
    std::cout << invMat[i][j] << "   " ;
  }
  std::cout << std::endl ;
}

}

//transpose d'une matrice d'ordre 3

 void transpoMat3 ( float matG1[3][3]  ) {
  float transpo3[3][3] ;

  //calcul de la transpose

 for ( int i = 0 ; i < 3 ; i++ ) {
   for ( int j = 0 ; j < 3 ; j++ ) {
     transpo3[i][j] = matG1[j][i] ;
   }
 }

//affichage de la matricevinitiale

 std::cout << " matrice initiale :" << std::endl ;
 for ( int i = 0 ; i < 3 ; i++ ) {
  for ( int j = 0 ; j < 3 ; j++ ) {
    std::cout << matG1[i][j] << "   " ;
  }
  std::cout << std::endl ;
 }
 
 //affichage de la matrice transpose

 std::cout << " matrice transpose :" << std::endl ;
  for ( int i = 0 ; i < 3 ; i++ ) {
  for ( int j = 0 ; j < 3 ; j++ ) {
    std::cout << transpo3[i][j] << "   " ;
  }
  std::cout << std::endl ;
 }
}

//trace d'une matrice d'ordre 2

float traceMat3 (float matH1[3][3] ) {

  float trace ;

  trace = matH1[0][0] + matH1[1][1] + matH1[2][2] ;
  std::cout << trace << "   " ;
std::cout << std::endl ;
return trace ;
}
