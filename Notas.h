#pragma once
#ifndef  NOTAS_H
#define NOTAS_H

class Notas
{
public:
	void insertarAlumnos();
	void consultarAlumnos();
	void insertarMaterias();
	void consultarMaterias();
	void insertarNotas();
	void consultarNotas();

	int buscarAlumno(char *);
	int buscarMateria(char *);
};

#endif // ! NOTAS_H
