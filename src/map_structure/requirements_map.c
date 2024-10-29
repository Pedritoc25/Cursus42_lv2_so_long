/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   requirements_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:09:53 by pcabanas          #+#    #+#             */
/*   Updated: 2024/10/29 12:11:12 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Here goes the if else check for the map requirements
/*
Fijate en los requisitos de la pagina 9 del subject para comprobar que el mapa sea valido
	• El mapa estará construido de 3 componentes: paredes, objetos y espacio abierto.
	• El mapa estará compuesto de solo 5 caracteres: 0 para un espacio vacío, 1 para un
	muro, C para un coleccionable, E para salir del mapa y P para la posición inicial
	del jugador.
	• El mapa debe tener una salida, al menos un objeto y una posición inicial.
	• Si el mapa contiene caractéres duplicados (salida o posición
	inicial), deberás mostrar un mensaje de error.
	• El mapa debe ser rectangular.
	• El mapa deberá estar cerrado/rodeado de muros, en caso contrario el programa
	deberá devolver un error.
	• Tienes que comprobar si hay un camino válido en el mapa.
	• Debes poder procesar cualquier tipo de mapa, siempre y cuando respete las anteriores normas.
	• Otro ejemplo minimalista de un mapa .ber:
	• En caso de fallos de configuración de cualquier tipo encontrados en el archivo, el
	programa debe terminar correctamente y devolver “Error\n” seguido de un mensaje
	explícito de tu elección.
*/