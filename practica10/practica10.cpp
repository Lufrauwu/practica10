// practica10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string>

using namespace std;

struct Alumnos
{
	string nombres;
	int velocidad;
	int fuerza;
	int astucia;
	int habilidad_de_pelea;
} alumnos[12];

void poderesasignados(char queHacer)
{
	switch (queHacer)
	{
	case 'v':
		for (int i = 0; i < 12; i++)
		{
			alumnos[i].velocidad = (rand() % 11 + 1);
		}
		break;
	case 'f':
		for (int i = 0; i < 12; i++)
		{
			alumnos[i].fuerza = (rand() % 11 + 1);
		}
		break;
	case 'a':
		for (int i = 0; i < 12; i++)
		{
			alumnos[i].astucia = (rand() % 11 + 1);
		}
		break;
	case 'h':
		for (int i = 0; i < 12; i++)
		{
			alumnos[i].habilidad_de_pelea = (rand() % 11 + 1);
		}
		break;
	}




}
void poner_nombres() {
	alumnos[0].nombres = "Jesus";
	alumnos[1].nombres = "David.A";
	alumnos[2].nombres = "Juve";
	alumnos[3].nombres = "Eva";
	alumnos[4].nombres = "Luis";
	alumnos[5].nombres = "Diego.C";
	alumnos[6].nombres = "Diego.A";
	alumnos[7].nombres = "Cebreros";
	alumnos[8].nombres = "Ronaldo";
	alumnos[9].nombres = "Felipe";
	alumnos[10].nombres = "Miguel";
	alumnos[11].nombres = "Didi";
}


void ganadores(int ganador_v, int ganador_f, int ganador_h, int ganador_a, int fuerte_v, int fuerte_a, int fuerte_h, int fuerte_f)
{
	for (size_t i = 0; i < 12; i++)
	{
		cout << alumnos[i].nombres << " Astucia:  " << alumnos[i].astucia << " Velocidad: " << alumnos[i].velocidad << " Fuerza: " << alumnos[i].fuerza << " Habilidad de pelea: " << alumnos[i].habilidad_de_pelea << "\n ------------------------------------------------------------------" << endl;
		if (alumnos[i].velocidad > fuerte_v)
		{
			fuerte_v = alumnos[i].velocidad;
			ganador_v = i;

		}
		if (alumnos[i].fuerza > fuerte_f)
		{
			fuerte_f = alumnos[i].fuerza;
			ganador_f = i;


		}
		if (alumnos[i].habilidad_de_pelea > fuerte_h)
		{
			fuerte_h = alumnos[i].habilidad_de_pelea;
			ganador_h = i;

		}
		if (alumnos[i].astucia > fuerte_a)
		{
			fuerte_a = alumnos[i].astucia;
			ganador_a = i;
		}

	}
	cout << " El mas rapido es " << alumnos[ganador_v].nombres << " Con " << alumnos[ganador_v].velocidad << endl;
	cout << " El mas fuerte es " << alumnos[ganador_f].nombres << " Con " << alumnos[ganador_f].fuerza << endl;
	cout << " El mejor para pelear es " << alumnos[ganador_h].nombres << " Con " << alumnos[ganador_h].habilidad_de_pelea << endl;
	cout << " El mas astuto es " << alumnos[ganador_a].nombres << " Con " << alumnos[ganador_a].astucia << endl;
}
void perdedores(int perdedor_v, int perdedor_f, int perdedor_h, int perdedor_a, int debil_v, int debil_a, int debil_h, int debil_f)
{
	for (size_t i = 0; i < 12; i++)
	{
		if (alumnos[i].velocidad < debil_v)
		{
			debil_v = alumnos[i].velocidad;
			perdedor_v = i;

		}
		if (alumnos[i].fuerza < debil_f)
		{
			debil_f = alumnos[i].fuerza;
			perdedor_f = i;


		}
		if (alumnos[i].habilidad_de_pelea < debil_h)
		{
			debil_h = alumnos[i].habilidad_de_pelea;
			perdedor_h = i;

		}
		if (alumnos[i].astucia < debil_a)
		{
			debil_a = alumnos[i].astucia;
			perdedor_a = i;
		}

	}
	cout << " El mas lento es " << alumnos[perdedor_v].nombres << " Con " << alumnos[perdedor_v].velocidad << endl;
	cout << " El mas debil es " << alumnos[perdedor_f].nombres << " Con " << alumnos[perdedor_f].fuerza << endl;
	cout << " El peor para pelear es " << alumnos[perdedor_h].nombres << " Con " << alumnos[perdedor_h].habilidad_de_pelea << endl;
	cout << " El menos astuto es " << alumnos[perdedor_a].nombres << " Con " << alumnos[perdedor_a].astucia << endl;
}
int main() {
	int ganador_v = 0, ganador_f = 0, ganador_h = 0, ganador_a = 0;
	int fuerte_v = 0, fuerte_f = 0, fuerte_h = 0, fuerte_a = 0;
	int debil_v = 100, debil_f = 100, debil_h = 100, debil_a = 100;
	int perdedor_v = 0, perdedor_f = 0, perdedor_h = 0, perdedor_a = 0;


	srand(time(NULL));
	poner_nombres();
	poderesasignados('v');
	poderesasignados('f');
	poderesasignados('a');
	poderesasignados('h');
	ganadores(ganador_v, ganador_f, ganador_h, ganador_a, fuerte_a, fuerte_f, fuerte_h, fuerte_v);
	perdedores(perdedor_v, perdedor_f, perdedor_h, perdedor_a, debil_v, debil_f, debil_h, debil_v);


}
