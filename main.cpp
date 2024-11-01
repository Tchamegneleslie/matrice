 #include<iostream>
 #include "add.h"
 #include "add3.h"

int main ( int argc, char** argv ) {

  //CALCUL DE LA SOMME DE DEUX MATRICES D'ORDRE 2

  
  float matA[2][2],  matB[2][2] ;
      

      std::cout << "calculons maintenant la somme de deux matrices d'ordre 2" << std::endl;
      std::cout <<"entrer les elements de la premiere matrice"<<std::endl;
      std::cin >> matA[0][0] >> matA[0][1] >> matA[1][0] >> matA[1][1];
      std::cout <<  std::endl;
      std::cout <<"entrer les elements de la deuxieme matrice"<<std::endl;
      std::cin >> matB[0][0] >> matB[0][1] >> matB[1][0] >> matB[1][1];
      std::cout << std::endl;
      std::cout<<"la somme des matrices est" << std::endl;
      sommeMatrice2 ( matA,matB );

   std::cout << "fini avec l'addition des matrices, passons a la soustraction" << std::endl ; 

// CALCUL DE LA DIFFERENCE DE DEUX MATRICE D'ORDRE 2

 float matA1[2][2],  matB1[2][2];
       std::cout << "calculons la soustraction de deux matrices d'ordre 2" << std::endl;
      std::cout <<"entrer les elements de la premiere matrice"<<std::endl;
      std::cin >> matA1[0][0] >> matA1[0][1] >> matA1[1][0] >> matA1[1][1];
      std::cout <<  std::endl;
      std::cout <<"entrer les elements de la deuxieme matrice"<<std::endl;
      std::cin >> matB1[0][0] >>matB1[0][1] >> matB1[1][0] >>matB1[1][1];
      std::cout << std::endl;
      std::cout<<"la difference des matrices est" << std::endl;
      soustractionMat2( matA1,matB1 );
      std::cout << std::endl;

   //MULTIPLICATION DE DEUX MATRICES D'ORDRE 2

 float matA3[2][2],  matB3[2][2];
     std::cout << "maintenant passons a la multiplication de deux matrices d'ordre 2" << std::endl ;
     std::cout <<"entrer les elements de la premiere matrice"<<std::endl;
     std::cin >> matA3[0][0] >> matA3[0][1] >> matA3[1][0] >> matA3[1][1];
     std::cout <<  std::endl;
     std::cout <<"entrer les elements de la deuxieme matrice"<<std::endl;
     std::cin >> matB3[0][0] >>matB3[0][1] >> matB3[1][0] >>matB3[1][1];
     std::cout << std::endl;
     std::cout << "le produit des deux matrices est:" << std::endl ;
      multiMat2 ( matA3, matB3 ) ;
       std::cout << std::endl;

//DETERMINANT D'UNE MATRICE D'ORDRE 2
    
    float matE[2][2] ;
    std::cout << " calculons le determinant d'une matrice d'ordre 2 " << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
    std::cin >> matE[0][0] >> matE[0][1] >> matE[1][0] >> matE[1][1];
    std::cout <<  std::endl;
    std::cout << " le determinant de cette matrice est: " << std::endl ;
    determinant ( matE ) ;
    std::cout << std::endl;

 // INVERSE D'UNE MATRICE D'ORDRE 2

    float matF[2][2] ;
    std::cout << " calculons l'inverse d'une matrice d'ordre 2 " << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
    std::cin >> matF[0][0] >> matF[0][1] >> matF[1][0] >> matF[1][1];
    std::cout <<  std::endl;
    std::cout << " l'inverse de cette matrice est: " << std::endl ;
    inverseMat2 ( matF ) ;
    std::cout <<  std::endl;
    
 //TRANSPOSE D'UNE MATRICE D'ORDRE 2

    float matG[2][2] ;
    std::cout << " calculons la transpose d'une matrice d'ordre 2" << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
    std::cin >> matG[0][0] >> matG[0][1] >> matG[1][0] >> matG[1][1];
    std::cout <<  std::endl;
    transpoMat2 ( matG ) ;
    std::cout <<  std::endl;

 
 

 // TRACE D'UNE MATRICE D'ORDRE 2

   float matH[2][2] ;
   std::cout << " calculons la trace d'une matrice d'ordre 2 " << std::endl ;
   std::cout << "entrer les elements de la matrice" << std::endl;
   std::cin >> matH[0][0] >> matH[0][1] >> matH[1][0] >> matH[1][1];
   std::cout <<  std::endl;
   std::cout << " la trace de cette matrice est: " << std::endl;
   traceMat2 ( matH );
   std::cout <<  std::endl;

   std::cout << " passons aux matrices d'ordre 3 " << std::endl ;

//CALCUL DE LA SOMME DE DEUX MATRICES D'ORDRE 3

  int matC[3][3],  matD[3][3] ;
    
      std::cout << "calculons maintenant la somme de deux matrices d'ordre 3" << std::endl;
      std::cout <<"entrer les elements de la premiere matrice" << std::endl;
      std::cin >> matC[0][0] >> matC[0][1] >> matC[0][2] >> matC[1][0] >> matC[1][1] >> matC[1][2] >> matC[2][0] >> matC[2][1] >> matC[2][2];
      std::cout <<  std::endl;
      std::cout <<"entrer les elements de la deuxieme matrice"<< std::endl;
      std::cin >> matD[0][0] >> matD[0][1] >> matD[0][2] >> matD[1][0] >> matD[1][1] >> matD[1][2] >> matD[2][0] >> matD[2][1] >> matD[2][2];
      std::cout << std::endl;
      std::cout<<"la somme des matrives est" << std::endl;
      sommeMatrice3 ( matC,matD );
      std::cout << std::endl; 

      // CALCUL DE LA DIFFERENCE DE DEUX MATRICE D'ORDRE 3

      float matC1[3][3],  matD1[3][3];

      std::cout << " calculons la difference de deux matrices d'ordre 3 " << std::endl ;
      std::cout <<"entrer les elements de la premiere matrice"<<std::endl;
      std::cin >> matC1[0][0] >> matC1[0][1] >> matC1[0][2] >> matC1[1][0] >> matC1[1][1] >> matC1[1][2] >> matC1[2][0] >> matC1[2][1] >> matC1[2][2];
      std::cout <<  std::endl;
      std::cout <<"entrer les elements de la deuxieme matrice"<<std::endl;
      std::cin >> matC1[0][0] >> matD1[0][1] >> matD1[0][2] >> matD1[1][0] >> matD1[1][1] >> matD1[1][2] >> matD1[2][0] >> matD1[2][1] >> matD1[2][2];
      std::cout << std::endl;
      std::cout<<"la difference des matrices est" << std::endl;
      soustractionMat3( matC1,matD1 );
      std::cout << std::endl;

   //MULTIPLICATION DE DEUX MATRICES D'ORDRE 3

 float matC3[3][3],  matD3[3][3];
     std::cout << "maintenant passons a la multiplication de deux matrices d'ordre 2" << std::endl ;
     std::cout <<"entrer les elements de la premiere matrice"<<std::endl;
     std::cin >> matC3[0][0] >> matC3[0][1] >> matC3[0][2] >> matC3[1][0] >> matC3[1][1] >> matC3[1][2] >> matC3[2][0] >> matC3[2][1] >> matC3[2][2];
     std::cout <<  std::endl;
     std::cout <<"entrer les elements de la deuxieme matrice"<<std::endl;
     std::cin >> matD3[0][0] >> matD3[0][1] >> matD3[0][2] >> matD3[1][0] >> matD3[1][1] >> matD3[1][2] >> matD3[2][0] >> matD3[2][1] >> matD3[2][2];
     std::cout << std::endl;
     std::cout << "le produit des deux matrices est:" << std::endl ;
      multiMat3 ( matC3, matD3 ) ;
       std::cout << std::endl;

//DETERMINANT D'UNE MATRICE D'ORDRE 3
    
    float matE1[3][3] ;
    std::cout << " calculons le determinant d'une matrice d'ordre 3 " << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
    std::cin >> matE1[0][0] >> matE1[0][1] >> matE1[0][2] >> matE1[1][0] >> matE1[1][1] >> matE1[1][2] >> matE1[2][0] >> matE1[2][1] >> matE1[2][2];
    std::cout <<  std::endl;
    std::cout << " le determinant de cette matrice est: " << std::endl ;
    determinant3 ( matE1 ) ;
    std::cout << std::endl;

// INVERSE D'UNE MATRICE D'ORDRE 3

    float matF1[3][3] ;
    std::cout << " calculons l'inverse d'une matrice d'ordre 3 " << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
     std::cin >> matF1[0][0] >> matF1[0][1] >> matF1[0][2] >> matF1[1][0] >> matF1[1][1] >> matF1[1][2] >> matF1[2][0] >> matF1[2][1] >> matF1[2][2];
    std::cout <<  std::endl;
    //std::cout << " l'inverse de cette matrice est: " << std::endl ;
    inverseMat3 ( matF1 ) ;
    std::cout <<  std::endl;

 //TRANSPOSE D'UNE MATRICE D'ORDRE 2

    float matG1[3][3] ;
    std::cout << " calculons la transpose d'une matrice d'ordre 2" << std::endl ;
    std::cout << "entrer les elements de la matrice" << std::endl;
    std::cin >> matG1[0][0] >> matG1[0][1] >> matG1[0][2] >> matG1[1][0] >> matG1[1][1] >> matG1[1][2] >> matG1[2][0] >> matG1[2][1] >> matG1[2][2];
    std::cout <<  std::endl;
    transpoMat3 ( matG1 ) ;
    std::cout <<  std::endl;


 // TRACE D'UNE MATRICE D'ORDRE 3

   float matH1[3][3] ;
   std::cout << " calculons la trace d'une matrice d'ordre 2 " << std::endl ;
   std::cout << "entrer les elements de la matrice" << std::endl;
   std::cin >> matH1[0][0] >> matH1[0][1] >> matH1[0][2] >> matH1[1][0] >> matH1[1][1] >> matH1[1][2] >> matH1[2][0] >> matH1[2][1] >> matH1[2][2];
   std::cout <<  std::endl;
   std::cout << " la trace de cette matrice est: " << std::endl;
   traceMat3 ( matH1 );
   std::cout <<  std::endl;

   


return 0 ;
}
