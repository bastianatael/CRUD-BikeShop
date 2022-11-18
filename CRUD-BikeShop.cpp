#include <stdio.h>
#include <stdlib.h>
#include <clocale>
#include <string.h>
#include <time.h>
#define elementos 110
int opc,num,opccamb,valornuevo,encontrado=-1,cont=101,cont2,intervalo,k,j;
float num_busc,aux;
char nuevovalor_2[40], salida,cadena_busc[40];
//estructura
struct tienda_bicis
{
       char marca[40];
       char color[20];
       float precio; 
       char tipo_bici[20];
       char nombre_cliente[30];
       char fecha_venta[10];
}bicis[elementos];

//poner valor a las variables
void asignacion()
{
     strcpy(bicis[0].marca,"Cube");
     strcpy(bicis[0].color,"Azul");
     bicis[0].precio=1250.90;
     strcpy(bicis[0].tipo_bici,"Montaña");
     strcpy(bicis[0].nombre_cliente,"Fernando Magaña");
     strcpy(bicis[0].fecha_venta,"12-10-08");
     
     strcpy(bicis[1].marca,"Megamo");
     strcpy(bicis[1].color,"Azul");
     bicis[1].precio=1420.80;
     strcpy(bicis[1].tipo_bici,"Ciudad");
     strcpy(bicis[1].nombre_cliente,"Alejandro Cervantes");
     strcpy(bicis[1].fecha_venta,"11-03-08");
     
     strcpy(bicis[2].marca,"Sierra");
     strcpy(bicis[2].color,"Verde");
     bicis[2].precio=1520.80;
     strcpy(bicis[2].tipo_bici,"Ciudad");
     strcpy(bicis[2].nombre_cliente,"Alexandra Herrera");
     strcpy(bicis[2].fecha_venta,"10-04-08");
     
     strcpy(bicis[3].marca,"Treked");
     strcpy(bicis[3].color,"Rojo");
     bicis[3].precio=1320.20;
     strcpy(bicis[3].tipo_bici,"Carrera");
     strcpy(bicis[3].nombre_cliente,"Carla Corona");
     strcpy(bicis[3].fecha_venta,"12-01-09");
     
     strcpy(bicis[4].marca,"Treked");
     strcpy(bicis[4].color,"Verde");
     bicis[4].precio=1200.50;
     strcpy(bicis[4].tipo_bici,"Ciudad");
     strcpy(bicis[4].nombre_cliente,"Mariana Ruiz");
     strcpy(bicis[4].fecha_venta,"02-11-09");
     
     strcpy(bicis[5].marca,"Sierra");
     strcpy(bicis[5].color,"Negro");
     bicis[5].precio=1110.50;
     strcpy(bicis[5].tipo_bici,"Ciudad");
     strcpy(bicis[5].nombre_cliente,"Hernan Castillo");
     strcpy(bicis[5].fecha_venta,"21-03-08");
     
     strcpy(bicis[6].marca,"Megamo");
     strcpy(bicis[6].color,"Azul");
     bicis[6].precio=1340.30;
     strcpy(bicis[6].tipo_bici,"Carrera");
     strcpy(bicis[6].nombre_cliente,"Cristian Ramirez");
     strcpy(bicis[6].fecha_venta,"27-10-09");
     
     strcpy(bicis[7].marca,"Cube");
     strcpy(bicis[7].color,"Negro");
     bicis[7].precio=2500.00;
     strcpy(bicis[7].tipo_bici,"Carrera");
     strcpy(bicis[7].nombre_cliente,"Rosa Martinez");
     strcpy(bicis[7].fecha_venta,"07-05-09");
     
     strcpy(bicis[8].marca,"Sierra");
     strcpy(bicis[8].color,"Negro");
     bicis[8].precio=1290.10;
     strcpy(bicis[8].tipo_bici,"Carrera");
     strcpy(bicis[8].nombre_cliente,"Cristian Ramirez");
     strcpy(bicis[8].fecha_venta,"27-10-09");
     
     strcpy(bicis[9].marca,"Treked");
     strcpy(bicis[9].color,"Blanco");
     bicis[9].precio=1100.00;
     strcpy(bicis[9].tipo_bici,"Ciudad");
     strcpy(bicis[9].nombre_cliente,"Axel Gonzalez");
     strcpy(bicis[9].fecha_venta,"23-03-09");
     
     strcpy(bicis[10].marca,"Cube");
     strcpy(bicis[10].color,"Azul");
     bicis[10].precio=1560.80;
     strcpy(bicis[10].tipo_bici,"Carrera");
     strcpy(bicis[10].nombre_cliente,"Cristina Rodriguez");
     strcpy(bicis[10].fecha_venta,"15-07-09");
     
     strcpy(bicis[11].marca,"Cube");
     strcpy(bicis[11].color,"Verde");
     bicis[11].precio=1440.20;
     strcpy(bicis[11].tipo_bici,"Montaña");
     strcpy(bicis[11].nombre_cliente,"Lucia Estrada");
     strcpy(bicis[11].fecha_venta,"10-11-08");
     
     strcpy(bicis[12].marca,"Sierra");
     strcpy(bicis[12].color,"Rosa");
     bicis[12].precio=1289.90;
     strcpy(bicis[12].tipo_bici,"Montaña");
     strcpy(bicis[12].nombre_cliente,"Mariana Rueda");
     strcpy(bicis[12].fecha_venta,"08-01-08");
     
     strcpy(bicis[13].marca,"Canyon");
     strcpy(bicis[13].color,"Azul");
     bicis[13].precio=1289.10;
     strcpy(bicis[13].tipo_bici,"Montaña");
     strcpy(bicis[13].nombre_cliente,"Carla Estrada");
     strcpy(bicis[13].fecha_venta,"18-07-10");
     
     strcpy(bicis[14].marca,"Giant");
     strcpy(bicis[14].color,"Amarillo");
     bicis[14].precio=1700.00;
     strcpy(bicis[14].tipo_bici,"Carrera");
     strcpy(bicis[14].nombre_cliente,"Bastian Ruiz");
     strcpy(bicis[14].fecha_venta,"29-10-08");
     
     strcpy(bicis[15].marca,"Scott");
     strcpy(bicis[15].color,"Negro");
     bicis[15].precio=1620.60;
     strcpy(bicis[15].tipo_bici,"Ciudad");
     strcpy(bicis[15].nombre_cliente,"Omar Osorio");
     strcpy(bicis[15].fecha_venta,"16-09-08");
     
     strcpy(bicis[16].marca,"Sierra");
     strcpy(bicis[16].color,"Blanco");
     bicis[16].precio=1500.50;
     strcpy(bicis[16].tipo_bici,"Ciudad");
     strcpy(bicis[16].nombre_cliente,"Jocelyn Reyes");
     strcpy(bicis[16].fecha_venta,"11-04-08");
     
     strcpy(bicis[17].marca,"Giant");
     strcpy(bicis[17].color,"Azul");
     bicis[17].precio=1430.80;
     strcpy(bicis[17].tipo_bici,"Montaña");
     strcpy(bicis[17].nombre_cliente,"Ana Marin");
     strcpy(bicis[17].fecha_venta,"15-09-10");
     
     strcpy(bicis[18].marca,"Orbea");
     strcpy(bicis[18].color,"Negro");
     bicis[18].precio=1250.50;
     strcpy(bicis[18].tipo_bici,"Ciudad");
     strcpy(bicis[18].nombre_cliente,"Karmina Rey");
     strcpy(bicis[18].fecha_venta,"09-09-06");
     
     strcpy(bicis[19].marca,"Megamo");
     strcpy(bicis[19].color,"Morado");
     bicis[19].precio=2100.40;
     strcpy(bicis[19].tipo_bici,"Carrera");
     strcpy(bicis[19].nombre_cliente,"Lizeth Ruiz");
     strcpy(bicis[19].fecha_venta,"11-03-08");
     
     strcpy(bicis[20].marca,"Sierra");
     strcpy(bicis[20].color,"Verde");
     bicis[20].precio=1320.60;
     strcpy(bicis[20].tipo_bici,"Ciudad");
     strcpy(bicis[20].nombre_cliente,"Elizabeth Gomez");
     strcpy(bicis[20].fecha_venta,"10-05-08");
     
     strcpy(bicis[21].marca,"Canyon");
     strcpy(bicis[21].color,"Rojo");
     bicis[21].precio=2680.80;
     strcpy(bicis[21].tipo_bici,"Carrera");
     strcpy(bicis[21].nombre_cliente,"Ruben Serrano");
     strcpy(bicis[21].fecha_venta,"01-03-07");
     
     strcpy(bicis[22].marca,"Special");
     strcpy(bicis[22].color,"Naranja");
     bicis[22].precio=2722.50;
     strcpy(bicis[22].tipo_bici,"Carrera");
     strcpy(bicis[22].nombre_cliente,"Amaral Cruz");
     strcpy(bicis[22].fecha_venta,"19-09-08");
     
     strcpy(bicis[23].marca,"Canyon");
     strcpy(bicis[23].color,"Verde");
     bicis[23].precio=2910.90;
     strcpy(bicis[23].tipo_bici,"Carrera");
     strcpy(bicis[23].nombre_cliente,"Griselda Paz");
     strcpy(bicis[23].fecha_venta,"17-03-09");
     
     strcpy(bicis[24].marca,"Cube");
     strcpy(bicis[24].color,"Rojo");
     bicis[24].precio=1290.50;
     strcpy(bicis[24].tipo_bici,"Ciudad");
     strcpy(bicis[24].nombre_cliente,"Antonio Paz");
     strcpy(bicis[24].fecha_venta,"10-01-05");
     
     strcpy(bicis[25].marca,"Treked");
     strcpy(bicis[25].color,"Gris");
     bicis[25].precio=1000.00;
     strcpy(bicis[25].tipo_bici,"Ciudad");
     strcpy(bicis[25].nombre_cliente,"Azul Solano");
     strcpy(bicis[25].fecha_venta,"17-04-05");
     
     strcpy(bicis[26].marca,"Special");
     strcpy(bicis[26].color,"Rojo");
     bicis[26].precio=3390.20;
     strcpy(bicis[26].tipo_bici,"Carrera");
     strcpy(bicis[26].nombre_cliente,"Maria Perez");
     strcpy(bicis[26].fecha_venta,"14-12-08");
     
     strcpy(bicis[27].marca,"Canyon");
     strcpy(bicis[27].color,"Azul");
     bicis[27].precio=2550.80;
     strcpy(bicis[27].tipo_bici,"Montaña");
     strcpy(bicis[27].nombre_cliente,"Julieta Vasquez");
     strcpy(bicis[27].fecha_venta,"11-05-09");
     
     strcpy(bicis[28].marca,"Giant");
     strcpy(bicis[28].color,"Gris");
     bicis[28].precio=1276.40;
     strcpy(bicis[28].tipo_bici,"Ciudad");
     strcpy(bicis[28].nombre_cliente,"Paola Fuentes");
     strcpy(bicis[28].fecha_venta,"30-05-05");
     
     strcpy(bicis[29].marca,"Orbea");
     strcpy(bicis[29].color,"Amarillo");
     bicis[29].precio=3050.20;
     strcpy(bicis[29].tipo_bici,"Montaña");
     strcpy(bicis[29].nombre_cliente,"Natalia Campos");
     strcpy(bicis[29].fecha_venta,"21-01-06");
     
     strcpy(bicis[30].marca,"Scott");
     strcpy(bicis[30].color,"Negro");
     bicis[30].precio=1780.10;
     strcpy(bicis[30].tipo_bici,"Ciudad");
     strcpy(bicis[30].nombre_cliente,"Luz Cardenaz");
     strcpy(bicis[30].fecha_venta,"02-08-08");
     
     strcpy(bicis[31].marca,"Canyon");
     strcpy(bicis[31].color,"Blanco");
     bicis[31].precio=2125.00;
     strcpy(bicis[31].tipo_bici,"Carrera");
     strcpy(bicis[31].nombre_cliente,"Maria Reyes");
     strcpy(bicis[31].fecha_venta,"22-09-05");
     
     strcpy(bicis[32].marca,"Special");
     strcpy(bicis[32].color,"Rojo");
     bicis[32].precio=3400.00;
     strcpy(bicis[32].tipo_bici,"Carrera");
     strcpy(bicis[32].nombre_cliente,"Roberto Luna");
     strcpy(bicis[32].fecha_venta,"20-04-07");
     
     strcpy(bicis[33].marca,"Cube");
     strcpy(bicis[33].color,"Naranja");
     bicis[33].precio=1402.90;
     strcpy(bicis[33].tipo_bici,"Ciudad");
     strcpy(bicis[33].nombre_cliente,"Giselle Rodriguez");
     strcpy(bicis[33].fecha_venta,"22-06-08");
     
     strcpy(bicis[34].marca,"Canyon");
     strcpy(bicis[34].color,"Verde");
     bicis[34].precio=3200.80;
     strcpy(bicis[34].tipo_bici,"Montaña");
     strcpy(bicis[34].nombre_cliente,"Julian Hernandez");
     strcpy(bicis[34].fecha_venta,"17-09-07");
     
     strcpy(bicis[35].marca,"Megamo");
     strcpy(bicis[35].color,"Amarillo");
     bicis[35].precio=1890.30;
     strcpy(bicis[35].tipo_bici,"Ciudad");
     strcpy(bicis[35].nombre_cliente,"Natalia Rodriguez");
     strcpy(bicis[35].fecha_venta,"12-04-05");
     
     strcpy(bicis[36].marca,"Canyon");
     strcpy(bicis[36].color,"Rosa");
     bicis[36].precio=1203.80;
     strcpy(bicis[36].tipo_bici,"Ciudad");
     strcpy(bicis[36].nombre_cliente,"Isela Verduzco");
     strcpy(bicis[36].fecha_venta,"16-06-09");
     
     strcpy(bicis[37].marca,"Special");
     strcpy(bicis[37].color,"Naranja");
     bicis[37].precio=3400.80;
     strcpy(bicis[37].tipo_bici,"Montaña");
     strcpy(bicis[37].nombre_cliente,"Mario Farias");
     strcpy(bicis[37].fecha_venta,"18-03-08");
     
     strcpy(bicis[38].marca,"Canyon");
     strcpy(bicis[38].color,"Azul");
     bicis[38].precio=1500.90;
     strcpy(bicis[38].tipo_bici,"Ciudad");
     strcpy(bicis[38].nombre_cliente,"Elizabeth Bueno");
     strcpy(bicis[38].fecha_venta,"14-09-07");
     
     strcpy(bicis[39].marca,"Cube");
     strcpy(bicis[39].color,"Amarillo");
     bicis[39].precio=3200.00;
     strcpy(bicis[39].tipo_bici,"Montaña");
     strcpy(bicis[39].nombre_cliente,"Marcelino Cortes");
     strcpy(bicis[39].fecha_venta,"08-05-08");
     
     strcpy(bicis[40].marca,"Sierra");
     strcpy(bicis[40].color,"Rojo");
     bicis[40].precio=3999.90;
     strcpy(bicis[40].tipo_bici,"Carrera");
     strcpy(bicis[40].nombre_cliente,"Victor Luna");
     strcpy(bicis[40].fecha_venta,"11-12-10");
     
     strcpy(bicis[41].marca,"Canyon");
     strcpy(bicis[41].color,"Negro");
     bicis[41].precio=2300.00;
     strcpy(bicis[41].tipo_bici,"Ciudad");
     strcpy(bicis[41].nombre_cliente,"Fernanda Lupercio");
     strcpy(bicis[41].fecha_venta,"24-09-07");
     
     strcpy(bicis[42].marca,"Megamo");
     strcpy(bicis[42].color,"Rojo");
     bicis[42].precio=3890.90;
     strcpy(bicis[42].tipo_bici,"Carrera");
     strcpy(bicis[42].nombre_cliente,"David Corona");
     strcpy(bicis[42].fecha_venta,"31-05-10");
     
     strcpy(bicis[43].marca,"Treked");
     strcpy(bicis[43].color,"Dorado");
     bicis[43].precio=1999.90;
     strcpy(bicis[43].tipo_bici,"Ciudad");
     strcpy(bicis[43].nombre_cliente,"Serena Lopez");
     strcpy(bicis[43].fecha_venta,"26-02-10");
     
     strcpy(bicis[44].marca,"Sierra");
     strcpy(bicis[44].color,"Blanco");
     bicis[44].precio=1239.20;
     strcpy(bicis[44].tipo_bici,"Montaña");
     strcpy(bicis[44].nombre_cliente,"Victoria Palomarez");
     strcpy(bicis[44].fecha_venta,"14-10-07");
     
     strcpy(bicis[45].marca,"Scott");
     strcpy(bicis[45].color,"Amarillo");
     bicis[45].precio=4999.90;
     strcpy(bicis[45].tipo_bici,"Carrera");
     strcpy(bicis[45].nombre_cliente,"Michel Chavez");
     strcpy(bicis[45].fecha_venta,"01-06-10");
     
     strcpy(bicis[46].marca,"Canyon");
     strcpy(bicis[46].color,"Blanco");
     bicis[46].precio=3021.90;
     strcpy(bicis[46].tipo_bici,"Montaña");
     strcpy(bicis[46].nombre_cliente,"Vanesa Ramirez");
     strcpy(bicis[46].fecha_venta,"01-09-07");
     
     strcpy(bicis[47].marca,"Sierra");
     strcpy(bicis[47].color,"Azul");
     bicis[47].precio=2099.00;
     strcpy(bicis[47].tipo_bici,"Ciudad");
     strcpy(bicis[47].nombre_cliente,"Ruben Peralta");
     strcpy(bicis[47].fecha_venta,"08-12-10");
     
     strcpy(bicis[48].marca,"Cube");
     strcpy(bicis[48].color,"Dorado");
     bicis[48].precio=1999.90;
     strcpy(bicis[48].tipo_bici,"Ciudad");
     strcpy(bicis[48].nombre_cliente,"Eliza Martinez");
     strcpy(bicis[48].fecha_venta,"01-09-06");
     
     strcpy(bicis[49].marca,"Treked");
     strcpy(bicis[49].color,"Amarillo");
     bicis[49].precio=1300.00;
     strcpy(bicis[49].tipo_bici,"Montaña");
     strcpy(bicis[49].nombre_cliente,"Alfredo Gonzales");
     strcpy(bicis[49].fecha_venta,"05-11-09");
     
     strcpy(bicis[50].marca,"Orbea");
     strcpy(bicis[50].color,"Negro");
     bicis[50].precio=2999.90;
     strcpy(bicis[50].tipo_bici,"Montaña");
     strcpy(bicis[50].nombre_cliente,"Josue Diaz");
     strcpy(bicis[50].fecha_venta,"10-06-09");
     
     strcpy(bicis[51].marca,"Cube");
     strcpy(bicis[51].color,"Verde");
     bicis[51].precio=2420.80;
     strcpy(bicis[51].tipo_bici,"Montaña");
     strcpy(bicis[51].nombre_cliente,"Alfredo Perez");
     strcpy(bicis[51].fecha_venta,"11-11-09");
     
     strcpy(bicis[52].marca,"Treked");
     strcpy(bicis[52].color,"Gris");
     bicis[52].precio=1325.90;
     strcpy(bicis[52].tipo_bici,"Ciudad");
     strcpy(bicis[52].nombre_cliente,"Pedro Gonzalez");
     strcpy(bicis[52].fecha_venta,"11-12-10");
     
     strcpy(bicis[53].marca,"Merida");
     strcpy(bicis[53].color,"Rojo");
     bicis[53].precio=3500.99;
     strcpy(bicis[53].tipo_bici,"Carrera");
     strcpy(bicis[53].nombre_cliente,"Axel Galindo");
     strcpy(bicis[53].fecha_venta,"13-12-05");
     
     strcpy(bicis[54].marca,"Scoott");
     strcpy(bicis[54].color,"Azul");
     bicis[54].precio=1240.50;
     strcpy(bicis[54].tipo_bici,"Ciudad");
     strcpy(bicis[54].nombre_cliente,"Christina Romero");
     strcpy(bicis[54].fecha_venta,"11-06-01");
     
     strcpy(bicis[55].marca,"Giant");
     strcpy(bicis[55].color,"Morado");
     bicis[55].precio=2600.70;
     strcpy(bicis[55].tipo_bici,"Montaña");
     strcpy(bicis[55].nombre_cliente,"Juan Garcia");
     strcpy(bicis[55].fecha_venta,"06-05-04");
     
     strcpy(bicis[56].marca,"Cannondale");
     strcpy(bicis[56].color,"Cmarilla");
     bicis[56].precio=2325.55;
     strcpy(bicis[56].tipo_bici,"Carrera");
     strcpy(bicis[56].nombre_cliente,"Carlos Figueroa");
     strcpy(bicis[56].fecha_venta,"14-01-15");
     
     strcpy(bicis[5].marca,"Bermont");
     strcpy(bicis[57].color,"Negra");
     bicis[57].precio=2450.90;
     strcpy(bicis[57].tipo_bici,"Montaña");
     strcpy(bicis[57].nombre_cliente,"Jose Marquez");
     strcpy(bicis[57].fecha_venta,"12-12-04");
     
     strcpy(bicis[58].marca,"Bianchi");
     strcpy(bicis[58].color,"Rosa");
     bicis[58].precio=1520.99;
     strcpy(bicis[58].tipo_bici,"Ciudad");
     strcpy(bicis[58].nombre_cliente,"Alondra Maldonado");
     strcpy(bicis[58].fecha_venta,"11-11-11");
     
     strcpy(bicis[59].marca,"BMC");
     strcpy(bicis[59].color,"Verde");
     bicis[59].precio=2620.90;
     strcpy(bicis[59].tipo_bici,"Carrera");
     strcpy(bicis[59].nombre_cliente,"Juan Perez");
     strcpy(bicis[59].fecha_venta,"12-12-12");
     
     strcpy(bicis[60].marca,"Bottechia");
     strcpy(bicis[60].color,"Azul");
     bicis[60].precio=2000.50;
     strcpy(bicis[60].tipo_bici,"Montaña");
     strcpy(bicis[60].nombre_cliente,"Perla Gonzales");
     strcpy(bicis[60].fecha_venta,"08-07-14");
     
     strcpy(bicis[61].marca,"Twin");
     strcpy(bicis[61].color,"Marron");
     bicis[61].precio=1550.50;
     strcpy(bicis[61].tipo_bici,"Ciudad");
     strcpy(bicis[61].nombre_cliente,"Armando Olmos");
     strcpy(bicis[61].fecha_venta,"01-02-02");
     
     strcpy(bicis[62].marca,"Bulls");
     strcpy(bicis[62].color,"Plateado");
     bicis[62].precio=3560.70;
     strcpy(bicis[62].tipo_bici,"Carrera");
     strcpy(bicis[62].nombre_cliente,"Jose Fuentes");
     strcpy(bicis[62].fecha_venta,"01-02-03");
     
     strcpy(bicis[63].marca,"Canyon");
     strcpy(bicis[63].color,"Morado");
     bicis[63].precio=1600.90;
     strcpy(bicis[63].tipo_bici,"Ciudad");
     strcpy(bicis[63].nombre_cliente,"Alejandra Treviño");
     strcpy(bicis[63].fecha_venta,"05-06-07");
     
     strcpy(bicis[64].marca,"Canyon");
     strcpy(bicis[64].color,"Blanco");
     bicis[64].precio=1400.00;
     strcpy(bicis[64].tipo_bici,"Ciudad");
     strcpy(bicis[64].nombre_cliente,"Pablo Cortez");
     strcpy(bicis[64].fecha_venta,"08-04-11");
     
     strcpy(bicis[65].marca,"Conalgo");
     strcpy(bicis[65].color,"Azul");
     bicis[65].precio=2200.40;
     strcpy(bicis[65].tipo_bici,"Montaña");
     strcpy(bicis[65].nombre_cliente,"Roberto Valdovinos");
     strcpy(bicis[65].fecha_venta,"05-06-07");
     
     strcpy(bicis[66].marca,"Treked");
     strcpy(bicis[66].color,"Rojo");
     bicis[66].precio=2800.80;
     strcpy(bicis[66].tipo_bici,"Carrera");
     strcpy(bicis[66].nombre_cliente,"Josue Arteaga");
     strcpy(bicis[66].fecha_venta,"08-09-09");
     
     strcpy(bicis[67].marca,"Merida");
     strcpy(bicis[67].color,"Negro");
     bicis[67].precio=1900.99;
     strcpy(bicis[67].tipo_bici,"Ciudad");
     strcpy(bicis[67].nombre_cliente,"Mario Arredondo");
     strcpy(bicis[67].fecha_venta,"09-19-05");
     
     strcpy(bicis[68].marca,"Giant");
     strcpy(bicis[68].color,"Verde");
     bicis[68].precio=2700.40;
     strcpy(bicis[68].tipo_bici,"Montaña");
     strcpy(bicis[68].nombre_cliente,"Maria Cervantez");
     strcpy(bicis[68].fecha_venta,"06-06-12");
     
     strcpy(bicis[69].marca,"Canyon");
     strcpy(bicis[69].color,"Rosa");
     bicis[69].precio=1500.80;
     strcpy(bicis[69].tipo_bici,"Montaña");
     strcpy(bicis[69].nombre_cliente,"Adriana Guizar");
     strcpy(bicis[69].fecha_venta,"10-07-13");
     
     strcpy(bicis[70].marca,"Bergamont");
     strcpy(bicis[70].color,"Plateado");
     bicis[70].precio=1390.20;
     strcpy(bicis[70].tipo_bici,"Ciudad");
     strcpy(bicis[70].nombre_cliente,"Ramiro Huerta");
     strcpy(bicis[70].fecha_venta,"01-12-15");
     
     strcpy(bicis[71].marca,"Bianchi");
     strcpy(bicis[71].color,"Blanco");
     bicis[71].precio=3500.40;
     strcpy(bicis[71].tipo_bici,"Carrera");
     strcpy(bicis[71].nombre_cliente,"Camilo Osorio");
     strcpy(bicis[71].fecha_venta,"01-02-18");
     
     strcpy(bicis[72].marca,"Bergamont");
     strcpy(bicis[72].color,"Negro");
     bicis[70].precio=3000.40;
     strcpy(bicis[72].tipo_bici,"Montaña");
     strcpy(bicis[72].nombre_cliente,"Ricardo Pizarro");
     strcpy(bicis[72].fecha_venta,"17-09-16");
     
     strcpy(bicis[73].marca,"BMC");
     strcpy(bicis[73].color,"Verde");
     bicis[73].precio=3900.90;
     strcpy(bicis[73].tipo_bici,"Carrera");
     strcpy(bicis[73].nombre_cliente,"Francisco Mendoza");
     strcpy(bicis[73].fecha_venta,"20-11-09");
     
     strcpy(bicis[74].marca,"Botteechia");
     strcpy(bicis[74].color,"Amarillo");
     bicis[74].precio=2400.00;
     strcpy(bicis[74].tipo_bici,"Ciudad");
     strcpy(bicis[74].nombre_cliente,"Guilermo Manzano");
     strcpy(bicis[74].fecha_venta,"25-11-09");
     
     strcpy(bicis[75].marca,"Cube");
     strcpy(bicis[75].color,"Rojo");
     bicis[75].precio=2590.99;
     strcpy(bicis[75].tipo_bici,"Montaña");
     strcpy(bicis[75].nombre_cliente,"Alessandro Vazques");
     strcpy(bicis[75].fecha_venta,"14-02-17");
     
     strcpy(bicis[76].marca,"Aulls");
     strcpy(bicis[76].color,"Azul");
     bicis[76].precio=4000.30;
     strcpy(bicis[76].tipo_bici,"Carrera");
     strcpy(bicis[76].nombre_cliente,"Lucio Garcia");
     strcpy(bicis[76].fecha_venta,"04-07-11");
     
     strcpy(bicis[77].marca,"Canyon");
     strcpy(bicis[77].color,"Verde");
     bicis[77].precio=1390.80;
     strcpy(bicis[77].tipo_bici,"Oiudad");
     strcpy(bicis[77].nombre_cliente,"Ignacio Ochoa");
     strcpy(bicis[77].fecha_venta,"18-04-03");
     
     strcpy(bicis[78].marca,"Colnago");
     strcpy(bicis[78].color,"Marron");
     bicis[78].precio=1999.99;
     strcpy(bicis[78].tipo_bici,"Montaña");
     strcpy(bicis[78].nombre_cliente,"Angelica Paz");
     strcpy(bicis[78].fecha_venta,"29-04-08");
     
     strcpy(bicis[79].marca,"Treked");
     strcpy(bicis[79].color,"Plateado");
     bicis[79].precio=3400.20;
     strcpy(bicis[79].tipo_bici,"Carrera");
     strcpy(bicis[79].nombre_cliente,"Hugo Chavez");
     strcpy(bicis[79].fecha_venta,"19-05-18");
     
     strcpy(bicis[80].marca,"Cube");
     strcpy(bicis[80].color,"Amarillo");
     bicis[80].precio=3000.00;
     strcpy(bicis[80].tipo_bici,"Montaña");
     strcpy(bicis[80].nombre_cliente,"Martin Fernandez");
     strcpy(bicis[80].fecha_venta,"28-06-11");
     
     strcpy(bicis[81].marca,"Felt");
     strcpy(bicis[81].color,"Rojo");
     bicis[81].precio=2050.60;
     strcpy(bicis[81].tipo_bici,"Ciudad");
     strcpy(bicis[81].nombre_cliente,"Alejandro Montero");
     strcpy(bicis[81].fecha_venta,"22-12-09");
     
     strcpy(bicis[82].marca,"Focus");
     strcpy(bicis[82].color,"Azul");
     bicis[82].precio=5000.00;
     strcpy(bicis[82].tipo_bici,"Carrera");
     strcpy(bicis[82].nombre_cliente,"Jorge Valenzuela");
     strcpy(bicis[82].fecha_venta,"06-11-01");
     
     strcpy(bicis[83].marca,"Fuji");
     strcpy(bicis[83].color,"Verde");
     bicis[83].precio=2490.80;
     strcpy(bicis[83].tipo_bici,"Montaña");
     strcpy(bicis[83].nombre_cliente,"Gabino Rios");
     strcpy(bicis[83].fecha_venta,"21-09-18");
     
     strcpy(bicis[84].marca,"Ghost");
     strcpy(bicis[84].color,"Marron");
     bicis[84].precio=2990.50;
     strcpy(bicis[84].tipo_bici,"Ciudad");
     strcpy(bicis[84].nombre_cliente,"Oscar Morales");
     strcpy(bicis[84].fecha_venta,"15-12-08");
     
     strcpy(bicis[85].marca,"GT");
     strcpy(bicis[85].color,"Rojo");
     bicis[85].precio=3200.90;
     strcpy(bicis[85].tipo_bici,"Carrera");
     strcpy(bicis[85].nombre_cliente,"Miguel Valdez");
     strcpy(bicis[85].fecha_venta,"23-07-02");
     
     strcpy(bicis[86].marca,"Haibike");
     strcpy(bicis[86].color,"Blanco");
     bicis[86].precio=2700.30;
     strcpy(bicis[86].tipo_bici,"Montaña");
     strcpy(bicis[86].nombre_cliente,"Fernado Arias");
     strcpy(bicis[86].fecha_venta,"24-12-03");
     
     strcpy(bicis[87].marca,"Isaac");
     strcpy(bicis[87].color,"Negro");
     bicis[87].precio=3800.90;
     strcpy(bicis[87].tipo_bici,"Ciudad");
     strcpy(bicis[87].nombre_cliente,"Eduardo Rangel");
     strcpy(bicis[87].fecha_venta,"17-04-10");
     
     strcpy(bicis[88].marca,"Kora");
     strcpy(bicis[88].color,"Plateado");
     bicis[88].precio=3400.99;
     strcpy(bicis[88].tipo_bici,"Carrera");
     strcpy(bicis[88].nombre_cliente,"Pedro Fernandez");
     strcpy(bicis[88].fecha_venta,"26-10-07");
     
     strcpy(bicis[89].marca,"Kroos");
     strcpy(bicis[89].color,"Marron");
     bicis[89].precio=4100.30;
     strcpy(bicis[89].tipo_bici,"Montaña");
     strcpy(bicis[89].nombre_cliente,"Javier Medina");
     strcpy(bicis[89].fecha_venta,"13-05-18");
     
     strcpy(bicis[90].marca,"Kuota");
     strcpy(bicis[90].color,"Morado");
     bicis[90].precio=2400.70;
     strcpy(bicis[90].tipo_bici,"Ciudad");
     strcpy(bicis[90].nombre_cliente,"Angelica Roman");
     strcpy(bicis[90].fecha_venta,"30-09-01");
     
     strcpy(bicis[91].marca,"Lapierre");
     strcpy(bicis[91].color,"Verde");
     bicis[91].precio=3900.90;
     strcpy(bicis[91].tipo_bici,"Carrera");
     strcpy(bicis[91].nombre_cliente,"Marco Orozco");
     strcpy(bicis[91].fecha_venta,"12-03-16");
     
     strcpy(bicis[92].marca,"Cube");
     strcpy(bicis[92].color,"Amarillo");
     bicis[92].precio=3500.80;
     strcpy(bicis[92].tipo_bici,"Montaña");
     strcpy(bicis[92].nombre_cliente,"Rodrigo Solorio");
     strcpy(bicis[92].fecha_venta,"16-11-14");
     
     strcpy(bicis[93].marca,"Norco");
     strcpy(bicis[93].color,"Azul");
     bicis[93].precio=2900.99;
     strcpy(bicis[93].tipo_bici,"Ciudad");
     strcpy(bicis[93].nombre_cliente,"Octavio Zamora");
     strcpy(bicis[93].fecha_venta,"11-12-05");
     
     strcpy(bicis[94].marca,"Olympia");
     strcpy(bicis[94].color,"Negro");
     bicis[94].precio=4000.20;
     strcpy(bicis[94].tipo_bici,"Carrera");
     strcpy(bicis[94].nombre_cliente,"Jonathan Rodriguez");
     strcpy(bicis[94].fecha_venta,"27-04-12");
     
    strcpy(bicis[95].marca,"Wilier");
     strcpy(bicis[95].color,"Purpura");
     bicis[95].precio=3900.60;
     strcpy(bicis[95].tipo_bici,"Montaña");
     strcpy(bicis[95].nombre_cliente,"Maribel Castell");
     strcpy(bicis[95].fecha_venta,"29-07-18");
     
     strcpy(bicis[96].marca,"Pinarello");
     strcpy(bicis[96].color,"Marron");
     bicis[96].precio=2400.80;
     strcpy(bicis[96].tipo_bici,"Ciudad");
     strcpy(bicis[96].nombre_cliente,"Omar Ruiz");
     strcpy(bicis[96].fecha_venta,"04-11-17");
     
     strcpy(bicis[97].marca,"Radon");
     strcpy(bicis[97].color,"Rosa");
     bicis[97].precio=3800.90;
     strcpy(bicis[97].tipo_bici,"Carrera");
     strcpy(bicis[97].nombre_cliente,"Marina Villanueva");
     strcpy(bicis[97].fecha_venta,"12-12-12"); 
     
     strcpy(bicis[98].marca,"Lidley");
     strcpy(bicis[98].color,"Rojo");
     bicis[98].precio=4000.70;
     strcpy(bicis[98].tipo_bici,"Montaña");
     strcpy(bicis[98].nombre_cliente,"Luis Gomez");
     strcpy(bicis[98].fecha_venta,"29-11-03");
     
     strcpy(bicis[99].marca,"Rose");
     strcpy(bicis[99].color,"Azul");
     bicis[99].precio=1900.50;
     strcpy(bicis[99].tipo_bici,"Ciudad");
     strcpy(bicis[99].nombre_cliente,"Antonio Viera");
     strcpy(bicis[99].fecha_venta,"25-01-13");
     
     strcpy(bicis[100].marca,"Stevens");
     strcpy(bicis[100].color,"Marron");
     bicis[100].precio=3980.99;
     strcpy(bicis[100].tipo_bici,"Carrera");
     strcpy(bicis[100].nombre_cliente,"Angel Castañeda");
     strcpy(bicis[100].fecha_venta,"30-09-01");
}

void captura()
{
   if(cont<110)
   {  
      printf("Ingrese el número a capturar de: "); 
      printf("Precio: ");
      scanf("%f",&bicis[cont].precio);
      fflush(stdin); 
      printf("marca: ");
      gets(bicis[cont].marca);
      fflush(stdin);
      printf("Color: ");
      gets(bicis[cont].color);
      fflush(stdin);
      printf("Tipo de bici: ");
      gets(bicis[cont].tipo_bici);
      fflush(stdin);
      printf("Nombre del cliente: ");
      fflush(stdin);
      gets(bicis[cont].nombre_cliente);
      printf("fecha de venta: ");
      fflush(stdin);
      gets(bicis[cont].fecha_venta);
      printf("ELEMENTO CAPTURADO!\n");
      printf("Precio: %f\n",bicis[cont].precio);
      printf("Marca: %s\n",bicis[cont].marca);
      printf("Color: %s\n",bicis[cont].color);
      printf("Tipo de bici: %s\n",bicis[cont].tipo_bici);
      printf("Nombre del cliente: %s\n",bicis[cont].nombre_cliente);
      printf("Fecha de venta: %s\n",bicis[cont].fecha_venta);
      cont++;
    }
    else
    {
        printf("Espacio de almacenamiento lleno, elimine datos para tener espacio\n");
    }
}


void eliminacion_registro()
{
     opc=0;
     printf("Ingrese el registro que desea eliminar: ");
     do{     
          if(scanf("%d",&opc)!=1)
          {
              printf("Elemento inválido: ");
              fflush(stdin);                 
              opc=0;                 
           }
     }while(opc==0);
     printf("Eliminando elemento...\n");
     system("pause");
     bicis[opc].precio=0.00;
     strcpy(bicis[opc].marca," ");
     strcpy(bicis[opc].color," ");
     strcpy(bicis[opc].tipo_bici," ");
     strcpy(bicis[opc].nombre_cliente," ");
     strcpy(bicis[opc].fecha_venta," ");
     system("cls");
     printf("\aELEMENTO ELIMINADO");
}

void eliminacion_ult_r()
{
     printf("Eliminando ultimo registro...\n");
     bicis[cont-1].precio=0.00;
     strcpy(bicis[cont-1].marca," ");
     strcpy(bicis[cont-1].color," ");
     strcpy(bicis[cont-1].tipo_bici," ");
     strcpy(bicis[cont-1].nombre_cliente," ");
     strcpy(bicis[cont-1].fecha_venta," ");
     printf("\aELEMENTO ELIMINADO\n");
}

void eliminacion_comp()
{
     printf("Eliminando todos los registros...\n");
     for(int i=cont-1;i>=0;i--)
     {
          bicis[i].precio=0.00;
          strcpy(bicis[i].marca," ");
          strcpy(bicis[i].color," ");
          strcpy(bicis[i].tipo_bici," ");
          strcpy(bicis[i].nombre_cliente," ");
          strcpy(bicis[i].fecha_venta," ");
     }
     printf("\a TODOS LOS REGISTROS FUERON ELIMINADOS\n");
}




void eliminacion()
{
     opc=0;
     printf("Sistema de eliminación de variables\n\n");
     printf("Ingrese una opción: ");
     printf("1. Para eliminar un registro en particular\n2. Para eliminar el último registro\n3. Para eliminar todos los registros\n");
     do{
         if(scanf("%d",&opc)!=1)
         {
             printf("Opción no válida, reingrese opción válida: ");               
             fflush(stdin);               
             opc=0;               
                            
         }
     }while(opc==0);
     if(opc==1)
     {
         eliminacion_registro();
         system("pause");      
     }
     if(opc==2)
     {
         eliminacion_ult_r();
         system("pause");      
     }
     if(opc==3)
     {
        eliminacion_comp();       
        system("pause");       
     }
}


void modificacion_marca()
{
     fflush(stdin);
     printf("Ingresando al registro %d MARCA",opccamb);
     printf("Ingrese el nuevo valor: ");
     gets(nuevovalor_2);
     strcpy(bicis[opccamb].marca,nuevovalor_2);
     printf("ELEMENTO MODIFICADO!\n");
}
void modificacion_color()
{
     fflush(stdin);
     printf("Ingresando al registro %d COLOR\n",opccamb);
     printf("Ingrese el nuevo valor: ");
     gets(nuevovalor_2);
     strcpy(bicis[opccamb].color,nuevovalor_2);
     printf("ELEMENTO MODIFICADO!\n");
}
void modificacion_precio()
{
     printf("Ingresando al registro %d PRECIO\n",opccamb);
     printf("Ingrese el nuevo valor: ");
     do{
     if(scanf("%d",&valornuevo)!=1)
     {
            printf("Numero no válido, ingresar otra vez: ");
            fflush(stdin);
            valornuevo=0;           
     }
     }while(valornuevo==0);
     bicis[opccamb].precio=valornuevo;
     printf("ELEMENTO MODIFICADO!\n");
}
void modificacion_tipo_bici()
{
     fflush(stdin);
     printf("Ingresando al registro %d TIPO DE BICICLETA\n",opccamb);
     printf("Ingrese el nuevo valor: ");
     gets(nuevovalor_2);
     strcpy(bicis[opccamb].tipo_bici,nuevovalor_2);
     printf("ELEMENTO MODIFICADO!\n");
}
void modificacion_nombre_cliente()
{
     fflush(stdin);
     printf("Ingresando al registro %d NOMBRE DEL CLIENTE\n",opccamb);
     printf("Ingrese el nuevo valor: ");
     gets(nuevovalor_2);
     strcpy(bicis[opccamb].tipo_bici,nuevovalor_2);
     printf("ELEMENTO MODIFICADO!\n");
}
void modificacion_fecha_venta()
{
     fflush(stdin);
     printf("Ingresando al registro %d de FECHA DE VENTA \n\n\n",opccamb);
     printf("Ingrese el nuevo valor: ");
     gets(nuevovalor_2);
     strcpy(bicis[opccamb].fecha_venta,nuevovalor_2);
     printf("ELEMENTO MODIFICADO!\n");
}


void modificacion()
{
     printf("EJECUTANDO MÓDULO DE MODIFICACIÓN\n\n");     
     printf("Ingrese el número de registro que desea cambiar: "); 
          system("cls");
          do
          {
               printf("Ingrese el número de registro que desea cambiar: ");                        
               if(scanf("%d",&opccamb)!=1)
               {
                    printf("Ingrese un número válido: ");                     
                    fflush(stdin);                     
                    opccamb=0;                     
               }          
     }while(opc==0); 
     if(opccamb<110)
     {
          do
          {                         
          printf("Registro encontrado\n");
          opccamb=0;                  
          system("cls");
          printf("Ingrese la opción a la que desea entrar\n1 para el registro de la marca\n");
          printf("2 para el registro del color\n3 para el registro del precio\n4 para el registro del tipo de bici\n");
          printf("5 para el registro del nombre del cliente\n6 para el registro de la fecha de venta\n7 para salir\n");
          do
          {
               if(scanf("%d",&opccamb)!=1)
               {
                   printf("Ingrese un valor válido: ");
                   fflush(stdin);
                   opccamb=0;                       
               }
          }while(opc==0);
                            
             if(opccamb==1)
             {
             modificacion_marca();
             system("pause");
             }
             if(opccamb==2)
             {
             modificacion_color();
             system("pause");
             }
             if(opccamb==3)
             {
             modificacion_precio();
             system("pause");
             }
             if(opccamb==4)
             {
             modificacion_tipo_bici();
             system("pause");
             }
             if(opccamb==5)
             {
             modificacion_nombre_cliente();
             system("pause");
             }
             if(opccamb==6)
             {
             modificacion_fecha_venta();
             system("pause");
             }
          }while(opccamb!=7);                                       
     } 
      else
          {
             printf("Registro no encontrado o no válido, por favor ingrese un número válido: ");
             opccamb=0;
          }     
}


void buscar_num()
{     
      encontrado=-1;    
      printf("Ingrese el número a buscar: ");          
      scanf("%f",&num_busc);                     
      for(int n=0;n<=elementos;n++)
      {   
           if(bicis[n].precio == num_busc)
           { 
                encontrado=n;
                printf("Registro encontrado en la posición %d\n",encontrado);
                printf("Detalles del registro: \n");
                printf("Precio: %f\n",bicis[encontrado].precio);
                printf("Marca: %s\n",bicis[encontrado].marca);
                printf("Color: %s\n",bicis[encontrado].color);
                printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                printf("\n\n\n");
           }       
              
      }          
     if(encontrado<0) 
     {
          printf("El número buscado no está en la lista\n");
          system("pause"); 
     }         
}


void busc_marca()
{
     encontrado=-1;
     fflush(stdin);
     printf("Ingrese la palabra, frase o fecha para encontrar el elemento: ");
     gets(cadena_busc);
     for(int i=0;i<elementos;i++)
     {
           if(strcmp(bicis[i].marca,cadena_busc)==0)
           {
                  encontrado=i;
                   printf("Registro encontrado en la posición %d\n",encontrado);
                   printf("Detalles del registro: \n");
                   printf("Precio: %f\n",bicis[encontrado].precio);
                   printf("Marca: %s\n",bicis[encontrado].marca);
                   printf("Color: %s\n",bicis[encontrado].color);
                   printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                   printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                   printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                   printf("\n\n\n");                                 
           }  
     }
     
     if(encontrado<0) printf("Marca no encontrada");
     
}

void busc_color()
{
     encontrado=-1;
     fflush(stdin);
     printf("Ingrese el color del elemento: ");
     gets(cadena_busc);
     for(int i=0;i<elementos;i++)
     {
           if(strcmp(bicis[i].color,cadena_busc)==0)
           {
                  encontrado=i;
                  printf("Registro encontrado en la posición %d\n",encontrado);
                  printf("Detalles del registro: \n");
                  printf("Precio: %f\n",bicis[encontrado].precio);
                  printf("Marca: %s\n",bicis[encontrado].marca);
                  printf("Color: %s\n",bicis[encontrado].color);
                  printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                  printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                  printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                  printf("\n\n\n");                                  
           }  
     }
     if(encontrado<0) printf("Número no encontrado");
     
}
void busc_tipo()
{
     encontrado=-1;
     fflush(stdin);
     printf("Ingrese el tipo de bici: ");
     gets(cadena_busc);
     for(int i=0;i<elementos;i++)
     {
           if(strcmp(bicis[i].tipo_bici,cadena_busc)==0)
           {
                  encontrado=i;
                  printf("Registro encontrado en la posición %d\n",encontrado);
                  printf("Detalles del registro: \n");
                  printf("Precio: %f\n",bicis[encontrado].precio);
                  printf("Marca: %s\n",bicis[encontrado].marca);
                  printf("Color: %s\n",bicis[encontrado].color);
                  printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                  printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                  printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                  printf("\n\n\n");                                  
           }  
     }
     if(encontrado<0) printf("Tipo de bici inválida o inexistente\n");
     
}

void busc_nombre()
{
     encontrado=-1;
     fflush(stdin);
     printf("Ingrese el nombre del elemento: ");
     gets(cadena_busc);
     for(int i=0;i<elementos;i++)
     {
           if(strcmp(bicis[i].nombre_cliente,cadena_busc)==0)
           {
                  encontrado=i;
                  printf("Registro encontrado en la posición %d\n",encontrado);
                  printf("Detalles del registro: \n");
                  printf("Precio: %f\n",bicis[encontrado].precio);
                  printf("Marca: %s\n",bicis[encontrado].marca);
                  printf("Color: %s\n",bicis[encontrado].color);
                  printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                  printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                  printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                  printf("\n\n\n");                                  
           }  
     }
     if(encontrado<0) printf("Nombre de cliente no encontrado, verificar mayúsculas o acentos\n");
     
}

void busc_fecha()
{
     encontrado=-1;
     fflush(stdin);
     printf("Ingrese la fecha para encontrar el elemento: ");
     gets(cadena_busc);
     for(int i=0;i<elementos;i++)
     {
           if(strcmp(bicis[i].fecha_venta,cadena_busc)==0)
           {
                  encontrado=i;
                  printf("Registro encontrado en la posición %d\n",encontrado);
                  printf("Detalles del registro: \n");
                  printf("Precio: %f\n",bicis[encontrado].precio);
                  printf("Marca: %s\n",bicis[encontrado].marca);
                  printf("Color: %s\n",bicis[encontrado].color);
                  printf("Tipo de bici: %s\n",bicis[encontrado].tipo_bici);
                  printf("Nombre del cliente: %s\n",bicis[encontrado].nombre_cliente);
                  printf("Fecha de venta: %s\n",bicis[encontrado].fecha_venta);
                  printf("\n\n\n");                                  
           }  
     }
     if(encontrado<0) printf("Fecha no encontrada, verifique que el formato sea: dd-mm-aa\n");
     
}


void busqueda()
{
     opccamb=0;
     system("cls");
     printf("EJECUTANDO MODULO DE BUSQUEDA\n");
     printf("Ingrese la opción que desea\n1. Buscar precio\n2. Buscar marca\n3. Buscar color\n");
     printf("4. Buscar tipo de bici\n5 Buscar nombre del cliente\n6 buscar fecha de venta\n");
     do
     {
             if(scanf("%d",&opccamb)!=1)
             {
                 printf("Ingrese un número válido: ");
                 fflush(stdin);
                 opccamb=0;                       
             }
     }while(opccamb==0);
     if(opccamb==1)
     {
              asignacion();     
              buscar_num();
              system("pause");               
     }
     if(opccamb==2)
     {
                   
              busc_marca();     
              system("pause");         
     }
     if(opccamb==3)
     {
              busc_color();
              system("pause");     
     }
     if(opccamb==4)
     {
              busc_tipo();
              system("pause");     
     }
     if(opccamb==5)
     {
               busc_nombre();
               system("pause");    
     }
     if(opccamb==6)
     {
               busc_fecha();
               system("pause");     
     }
}

void elementos_ord()
{
     intervalo = cont/2;
  while(intervalo>0)
  {
    for(int i=intervalo-1; i<=cont-1; i++)                
    {
       j=i-intervalo;
       while(j>=0)
       {
          k=j+intervalo;
          if(bicis[k].precio<=bicis[j].precio)
          {
            aux=bicis[j].precio;
            bicis[j].precio = bicis[k].precio;
            bicis[k].precio = aux;
          }
          else
            j=0;
          j=j-intervalo;            
       }  
    } 
    intervalo=intervalo/2; 
  }
  
  printf("Lista Ordenada\n");
  for(int i=0; i<cont; i++)
  {
       printf("Detalles del registro ordenado por precio: \n");
       printf("Precio: %.2f\n",bicis[i].precio);
       printf("Marca: %s\n",bicis[i].marca);
       printf("Color: %s\n",bicis[i].color);
       printf("Tipo de bici: %s\n",bicis[i].tipo_bici);
       printf("Nombre del cliente: %s\n",bicis[i].nombre_cliente);
       printf("Fecha de venta: %s\n",bicis[i].fecha_venta);
       printf("\n\n\n");   
  }
   system("pause");  
     
     
}



void menu()
{
    system("cls"); 
    printf("PROYECTO:\nTERMINAL DE VENTA DE BICICLETAS\n\n\n");
    printf("Ingrese la opción que desea, siendo:\n");
    printf("1 para acceder a un nuevo registro \n2 para eliminar un registro\n3 para hacer una búsqueda en el registro\n");
    printf("4 para modificar un registro\n5 para ver los elementos en orden\n6 para salir\n\n");
    fflush(stdin);
}




int main()
{
    /*Programa realizado por: 
       -Bastian Natael Hernández Corona
       -Vanessa Guadalupe Rodríguez Sandoval
       -Karla Alejandra Sierra Rodríguez
       -Carlos Humberto Pérez Estrada
       -Lázaro Alejandro Ramírez Guillen
       -Marcelino Osorio Arredondo
       -Omar Padilla Cárdenas
     Permitido el uso para consulta y modificación del código  
    */
    asignacion();
    setlocale(LC_CTYPE,"Spanish");
    do{                                                
    menu();
    if(scanf("%d",&opc)!=1) //Validación 
    {
         printf("Ingrese un caracter válido\n");
         fflush(stdin);
         opc=0;
    }   
        if(opc==1)
        {
             captura();
             continue;
        }
        if(opc==2)
        {
             eliminacion();
             continue;       
        }
        if(opc==3)
        {
             busqueda();
             continue;     
        }
        if(opc==4)
        {
           modificacion();
           continue;      
        }
        if(opc==5)
        {
           elementos_ord();       
           continue;       
                  
        } 
        system("pause");          
    }while(opc!=6);
    
    
    
}
