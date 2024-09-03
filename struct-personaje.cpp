#include <iostream>

struct Personaje{

    std::string nombre;
    int nivel;
    int salud;
    int poder;
    std::string tipo;
    
}personaje[3];

void IngresoDeDatos(Personaje[]);
int CalculoPromedio(Personaje[]);
void SubirDeNivel(Personaje[], std::string personajes[]);
void MostrarPersonajes(Personaje[]);

int main(){

    int promedio;
    std::string personajes[3];
    
    IngresoDeDatos(personaje);

    promedio = CalculoPromedio(personaje);
    
    std::cout << "El promedio de poder de los personajes es: \n" << std::endl;

    SubirDeNivel(personaje, personajes);

    MostrarPersonajes(personaje);

    return 0;
    
}

void IngresoDeDatos(Personaje personajes[]){

    for(int i = 0; i < 3; i++){
        std::cout << "\t\tPersonaje " << i + 1 << ".\n";

        std::cout << "Ingrese el nombre del personaje: ";
        std::cin >> personaje[i].nombre;

        std::cout << "Ingrese el nivel del personaje: ";
        std::cin >> personaje[i].nivel;

        std::cout << "Ingrese la salud del personaje: ";
        std::cin >> personaje[i].salud;

        std::cout << "Ingrese el poder del personaje: ";
        std::cin >> personaje[i].poder;

        std::cout << "Ingrese el tipo del personaje: ";
        std::cin >> personaje[i].tipo;
        
    }
    
}

int CalculoPromedio(Personaje personajes[]){

    int sumaPoder = 0;

    for(int i = 0; i < 3; i++){

        sumaPoder += personaje[i].poder;
        
    }

    return sumaPoder / 3;

}

void SubirDeNivel(Personaje personajes[], std::string nombresSubir[]){

    std::cout << "Personajes a subir de nivel: \n";

    for(int i = 0; i < 3; i++){

        std::cout << "Ingrese el nombre del personaje " << i + 1 << ": ";
        std::cin >> nombresSubir[i];
        
        for(int j = 0; j < 3; j++){
            if(nombresSubir[i] == personajes[j].nombre){
                personajes[j].nivel += 1;
                break;
            }
        }
    }
}

void MostrarPersonajes(Personaje personajes[]){

    std::cout << "\t\tPersonajes: \n";
    
    for(int i = 0; i < 3; i++){

        std::cout << i + 1 << ".   ";
        std::cout << personaje[i].nombre << "\n";
        std::cout << "\tNivel: " << personaje[i].nivel << "\n";
        std::cout << "\tSalud: " << personaje[i].salud << "\n";
        std::cout << "\tTipo: " << personaje[i].tipo << "\n";
        std::cout << "\tPoder: " << personaje[i].poder << "\n";
        
        
    }
    
}