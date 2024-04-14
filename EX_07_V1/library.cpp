
#include <iostream>
#include <cstdlib>
#include "library.hpp"


using namespace std;

void Avalizacao::getNote()
{

	cout<<"\nEnte com nota da avaliacao da metade do ano: ";
	cin>>midleNote;
	cout<<"\nEnte com a nota da avaliacao do final do ano: ";
	cin>>endNote;
	if( (midleNote<0) || (midleNote>10) || (endNote<0) || (endNote>10)) {
		cout<<"notas fora da avalicao: ";
		exit(1);
	}

}

void Avalizacao::calculate()
{
	/*O exame final vale 50% da nota final, o de meio de ano vale 25% e as duas provas juntas valem um
	  total de 25%.
	 (Não se esqueça de normalizar as notas das provas. Elas devem ser convertidas em uma
	 porcentagem antes de se fazer a média.)


	 nota100    ->  100%              25% * nota100 = midleNote * 100
	 midleNote  ->  25%              (25% * nota100) / 100= midleNote

	*/

	
	auxiliarNoteMidle= (25 * midleNote)/100;
	auxiliarNoteEnd= (50 * endNote)/100;

    media= (auxiliarNoteMidle + auxiliarNoteEnd);
    cout<<"media::"<<media<<endl;
    cout<<"media::"<<auxiliarNoteMidle<<endl;
    cout<<"media::"<<auxiliarNoteEnd<<endl;
	/*Qualquer nota de 90 ou mais equivale a A; entre 80 e 90, B; entre 70 e 80, C; entre 60 e 70, D; e menos de 60, E.*/

	
        
	
}



void Avalizacao::outNote()
{
    if( media >=9){
        cout<<" Nota: "<<media<<" Conceito A"<<endl;
    }
    else if( media >=8  && media <9){
        cout<<" Nota: "<<media<<" Conceito B"<<endl;
    }
    else if( media >=7  && media <8){
        cout<<" Nota: "<<media<<" Conceito C"<<endl;
    }
    else if( media >=6  && media <7){
        cout<<" Nota: "<<media<<" Conceito D"<<endl;
    }
    else
        cout<<" Nota: "<<media<<" Conceito E"<<endl;
      

}












