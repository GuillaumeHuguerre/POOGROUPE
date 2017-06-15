#include "ImageCliquable.h"
#include "Tableau.h"
#include "Zone.h"
#include "QLafayetteMenu.h"
#include <QtWidgets/QApplication>
#include <vector>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageCliquable w;
	/*QLafayetteMenu x;
	x.show();*/
	
	//Entrée
	CZone zoneE_1(160, 70, 81, 101, 1);
	CZone zoneE_2(380, 80, 100, 100, 22);
	CZone zoneE_3(110, 140, 41, 141, 38);
	std::vector<CZone> vE;
	vE.push_back(zoneE_1);
	vE.push_back(zoneE_2);
	vE.push_back(zoneE_3);

	Tableau Img101("chateau/IMG_2726.JPG", vE, 0);
	w.GetVector().push_back(&Img101);
	w.GetHistorique().push_back(&Img101);

	//TABLEAU 0
	//Zone1
	CZone zone0_1(210, 100, 181, 171, 2);
	//VecteurZone0
	std::vector<CZone> v0;
	v0.push_back(zone0_1);

	//Image0
	Tableau Img0("jardin/IMG_2833.JPG", v0, 1);
	//VecteurTableau
	w.GetVector().push_back(&Img0); 
	
	/**********************************************************************/
	//TABLEAU 1

	//Zone1
	CZone zone1_1(210, 0, 181, 171,3);
	//Zone2
	//VecteurZone1
	std::vector<CZone> v1;
	v1.push_back(zone1_1);

	//Image1
	Tableau Img1("jardin/IMG_2834.JPG", v1, 2);
	//VecteurTableau
	w.GetVector().push_back(&Img1);

	/**********************************************************************/
	//TABLEAU 2

	//Zone1
	CZone zone2_1(450, 70, 181, 171, 4);
	//VecteurZone1
	std::vector<CZone> v2;
	v2.push_back(zone2_1);

	//Image1
	Tableau Img2("jardin/IMG_2835.JPG", v2, 3);
	//VecteurTableau
	w.GetVector().push_back(&Img2);

	/**********************************************************************/
	//TABLEAU 3

	//Zone1
	CZone zone3_1(390, 80, 181, 171, 5);
	//VecteurZone1
	std::vector<CZone> v3;
	v3.push_back(zone3_1);

	//Image1
	Tableau Img3("jardin/IMG_2836.JPG", v3, 4);
	//VecteurTableau
	w.GetVector().push_back(&Img3);

	/**********************************************************************/
	//TABLEAU 4

	//Zone1
	CZone zone4_1(380, 100, 181, 171, 6);
	//VecteurZone1
	std::vector<CZone> v4;
	v4.push_back(zone4_1);

	//Image1
	Tableau Img4("jardin/IMG_2839.JPG", v4, 5);
	//VecteurTableau
	w.GetVector().push_back(&Img4);

	/**********************************************************************/
	//TABLEAU 5

	//Zone1
	CZone zone5_1(410, 40, 181, 171, 7);
	//Zone2
	CZone zone5_2(120, 170, 181, 171, 14);
	//VecteurZone1
	std::vector<CZone> v5;
	v5.push_back(zone5_1);
	v5.push_back(zone5_2);

	//Image1
	Tableau Img5("jardin/IMG_2838.JPG", v5, 6);
	//VecteurTableau
	w.GetVector().push_back(&Img5);

	/**********************************************************************/
	//TABLEAU 6

	//Zone1
	CZone zone6_1(420, 170, 181, 171, 8);
	//VecteurZone1
	std::vector<CZone> v6;
	v6.push_back(zone6_1);

	//Image1
	Tableau Img6("jardin/IMG_2846.JPG", v6, 7);
	//VecteurTableau
	w.GetVector().push_back(&Img6);

	/**********************************************************************/
	//TABLEAU 7

	//Zone1
	CZone zone7_1(120, 210, 181, 171, 9);
	//Zone2
	CZone zone7_2(400, 160, 181, 171, 16);
	//VecteurZone1
	std::vector<CZone> v7;
	v7.push_back(zone7_1);
	v7.push_back(zone7_2);

	//Image1
	Tableau Img7("jardin/IMG_2847.JPG", v7, 8);
	//VecteurTableau
	w.GetVector().push_back(&Img7);

	/**********************************************************************/
	//TABLEAU 8

	//Zone1
	CZone zone8_1(230, 130, 181, 171, 10);
	//VecteurZone1
	std::vector<CZone> v8;
	v8.push_back(zone8_1);

	//Image1
	Tableau Img8("jardin/IMG_2848.JPG", v8, 9);
	//VecteurTableau
	w.GetVector().push_back(&Img8);

	/**********************************************************************/
	//TABLEAU 9

	//Zone1
	CZone zone9_1(420, 120, 181, 171, 11);
	//Zone2
	CZone zone9_2(75, 120, 181, 171, 17);
	//Zone3
	CZone zone9_3(210, 90, 181, 171, 19);
	//VecteurZone1
	std::vector<CZone> v9;
	v9.push_back(zone9_1);
	v9.push_back(zone9_2);
	v9.push_back(zone9_3);

	//Image1
	Tableau Img9("jardin/IMG_2853.JPG", v9, 10);
	//VecteurTableau
	w.GetVector().push_back(&Img9);

	/**********************************************************************/
	//TABLEAU 10

	//Zone1
	CZone zone10_1(210, 100, 181, 171, 12);
	//VecteurZone1
	std::vector<CZone> v10;
	v10.push_back(zone10_1);

	//Image1
	Tableau Img10("jardin/IMG_2856.JPG", v10, 11);
	//VecteurTableau
	w.GetVector().push_back(&Img10);

	/**********************************************************************/
	//TABLEAU 11

	//Zone1
	CZone zone11_1(500, 180, 90, 171, 13);
	//Zone2
	CZone zone11_2(200, 200, 181, 171, 20);
	//VecteurZone1
	std::vector<CZone> v11;
	v11.push_back(zone11_1);
	v11.push_back(zone11_2);

	//Image1
	Tableau Img11("jardin/IMG_2857.JPG", v11, 12);
	//VecteurTableau
	w.GetVector().push_back(&Img11);

	/**********************************************************************/
	//TABLEAU 12

	//Zone1
	CZone zone12_1(400, 110, 181, 171, 0);
	//VecteurZone1
	std::vector<CZone> v12;
	v12.push_back(zone12_1);

	//Image1
	Tableau Img12("jardin/IMG_2876.JPG", v12, 13);
	//VecteurTableau
	w.GetVector().push_back(&Img12);

	/**********************************************************************/
	//TABLEAU 13

	//Zone1
	CZone zone13_1(120, 20, 290, 250, 15);
	//Zone2
	CZone zone13_2(120, 280, 90, 100, 5);
	//Zone3
	CZone zone13_3(450, 240, 140, 140, 6);
	//VecteurZone1
	std::vector<CZone> v13;
	v13.push_back(zone13_1);
	v13.push_back(zone13_2);
	v13.push_back(zone13_3);

	//Image1
	Tableau Img13("jardin/IMG_2837.JPG", v13, 14);
	//VecteurTableau
	w.GetVector().push_back(&Img13);

	/**********************************************************************/
	//TABLEAU 14

	//Zone1
	CZone zone14_1(100, 20, 290, 320, 666); //DIALOGUE
	//VecteurZone1
	std::vector<CZone> v14;
	v14.push_back(zone14_1);

	//Image1
	Tableau Img14("jardin/IMG_2842.JPG", v14, 15);
	//VecteurTableau
	w.GetVector().push_back(&Img14);

	/**********************************************************************/
	//TABLEAU 15

	//Zone1
	CZone zone15_1(220, 0, 280, 370, 661); //DIALOGUE
	//VecteurZone1
	std::vector<CZone> v15;
	v15.push_back(zone15_1);

	//Image1
	Tableau Img15("jardin/IMG_2844.JPG", v15, 16);
	//VecteurTableau
	w.GetVector().push_back(&Img15);

	/**********************************************************************/
	//TABLEAU 16
	//Zone1
	CZone zone16_1(210, 100, 181, 171, 18);
	//VecteurZone0
	std::vector<CZone> v16;
	v16.push_back(zone16_1);

	//Image0
	Tableau Img16("jardin/IMG_2850.JPG", v16, 17);
	//VecteurTableau
	w.GetVector().push_back(&Img16);

	/**********************************************************************/
	//TABLEAU 17
	//Zone1
	CZone zone17_1(210, 100, 0, 0, 666); //FRAGMENT DE TABLEAU
	//VecteurZone0
	std::vector<CZone> v17;
	v17.push_back(zone17_1);

	//Image0
	Tableau Img17("jardin/IMG_2854.JPG", v17, 18);
	//VecteurTableau
	w.GetVector().push_back(&Img17);

	/**********************************************************************/
	//TABLEAU 18
	//Zone1
	CZone zone18_1(0, 0, 0, 0, 1);
	std::vector<CZone> v18;
	v18.push_back(zone18_1);
	Tableau Img18("jardin/IMG_2851.JPG", v18, 19);
	w.GetVector().push_back(&Img18);

	/**********************************************************************/
	//TABLEAU 19
	//Zone1
	CZone zone19_1(260, 20, 80, 70, 21);
	//Zone2
	CZone zone19_2(220, 100, 180, 280, 22); //DIALOGUE
	//VecteurZone0
	std::vector<CZone> v19;
	v19.push_back(zone19_1);
	v19.push_back(zone19_2);

	//Image0
	Tableau Img19("jardin/IMG_2872.JPG", v19, 20);
	//VecteurTableau
	w.GetVector().push_back(&Img19);

	/**********************************************************************/
	//TABLEAU 20
	//Zone1
	CZone zone20_1(210, 100, 181, 171, 660); //DIALOGUE
	//VecteurZone0
	std::vector<CZone> v20;
	v20.push_back(zone20_1);

	//Image0
	Tableau Img20("jardin/IMG_2874.JPG", v20, 21);
	//VecteurTableau
	w.GetVector().push_back(&Img20);

	
	/**************************************************************************************************************************/
		/**********************************INTERIEUR********************************/

	//TABLEAU 21
	CZone zone21_1(250, 100, 51, 120,23);
	std::vector<CZone> v21;
	v21.push_back(zone21_1);
	Tableau Img21("interieur/IMG_2728.JPG", v21, 22);
	w.GetVector().push_back(&Img21);


	//TABLEAU 22
	CZone zone22_1(270, 90, 91, 221, 24);
	std::vector<CZone> v22;
	v22.push_back(zone22_1);
	Tableau Img22("interieur/IMG_2738.JPG", v22, 23);
	w.GetVector().push_back(&Img22);

	//TABLEAU 23
	CZone zone23_1(280, 160, 81, 81, 28);
	CZone zone23_2(110, 40, 121, 321, 25);
	std::vector<CZone> v23;
	v23.push_back(zone23_1);
	v23.push_back(zone23_2);
	Tableau Img23("interieur/IMG_2744.JPG", v23, 24);
	w.GetVector().push_back(&Img23);


	//TABLEAU 24
	CZone zone24_1(220, 50, 141, 141, 26);
	CZone zone24_2(250, 200, 81, 61, 27);
	std::vector<CZone> v24;
	v24.push_back(zone24_1);
	v24.push_back(zone24_2);
	Tableau Img24("interieur/IMG_2740.JPG", v24, 25);
	w.GetVector().push_back(&Img24);
	
	//TABLEAU 25
	CZone zone25_1(0, 0, 0, 0, 1);
	std::vector<CZone> v25;
	v25.push_back(zone25_1);
	Tableau Img25("interieur/IMG_2742.JPG", v25, 26);
	w.GetVector().push_back(&Img25);

	//TABLEAU 26
	CZone zone26_1(0, 0, 0, 0, 1);
	std::vector<CZone> v26;
	v26.push_back(zone26_1);
	Tableau Img26("interieur/IMG_2741.JPG", v26, 27);
	w.GetVector().push_back(&Img26);

	//TABLEAU 27
	CZone zone27_1(420, 140, 61, 101, 29);
	std::vector<CZone> v27;
	v27.push_back(zone27_1);
	Tableau Img27("interieur/IMG_2745.JPG", v27, 28);
	w.GetVector().push_back(&Img27);

	//TABLEAU 28
	CZone zone28_1(150, 40, 221, 311, 33);
	CZone zone28_2(490, 20, 91, 381, 30);
	std::vector<CZone> v28;
	v28.push_back(zone28_1);
	v28.push_back(zone28_2);
	Tableau Img28("interieur/IMG_2762.JPG", v28, 29);
	w.GetVector().push_back(&Img28);


	//TABLEAU 29
	CZone zone29_1(75, 100, 101, 161, 31);
	std::vector<CZone> v29;
	v29.push_back(zone29_1);
	Tableau Img29("interieur/IMG_2761.JPG", v29, 30);
	w.GetVector().push_back(&Img29);


	//TABLEAU 30
	CZone zone30_1(320, 90, 101, 150, 32);
	CZone zone30_2(0, 0, 0, 0, 0);
	CZone zone30_3(0, 0, 0, 0, 0);
	CZone zone30_4(280, 310, 31, 51, 666);
	std::vector<CZone> v30;
	v30.push_back(zone30_1);
	v30.push_back(zone30_2);
	v30.push_back(zone30_3);
	v30.push_back(zone30_4);
	Tableau Img30("interieur/IMG_2758.JPG", v30, 31);
	w.GetVector().push_back(&Img30);

	//TABLEAU 31
	CZone zone31_1(0, 0, 0, 0, 1);
	std::vector<CZone> v31;
	v31.push_back(zone31_1);
	Tableau Img31("interieur/IMG_2759.JPG", v31, 32);
	w.GetVector().push_back(&Img31);
	
	//TABLEAU 32
	CZone zone32_1(210, 80, 140, 321, 35);
	CZone zone32_2(430, 40, 91, 251, 34);
	std::vector<CZone> v32;
	v32.push_back(zone32_1);
	v32.push_back(zone32_2);
	Tableau Img32("interieur/IMG_2763.JPG", v32, 33);
	w.GetVector().push_back(&Img32);

	//TABLEAU 33
	CZone zone33_1(0, 0, 0, 0, 1);
	std::vector<CZone> v33;
	v33.push_back(zone33_1);
	Tableau Img33("interieur/IMG_2764.JPG", v33, 34);
	w.GetVector().push_back(&Img33);
	
	//TABLEAU 34
	CZone zone34_1(150, 170, 41, 131, 36);
	std::vector<CZone> v34;
	v34.push_back(zone34_1);
	Tableau Img34("interieur/IMG_2768.jpg", v34, 35);
	w.GetVector().push_back(&Img34);
	
	//TABLEAU 35
	CZone zone35_1(280, 130, 41, 121, 37);
	std::vector<CZone> v35;
	v35.push_back(zone35_1);
	Tableau Img35("interieur/IMG_2793.JPG", v35, 36);
	w.GetVector().push_back(&Img35);

	//TABLEAU 36
	CZone zone36_1(310, 150, 31, 81, 0);
	std::vector<CZone> v36;
	v36.push_back(zone36_1);
	Tableau Img36("interieur/IMG_2795.JPG", v36, 37);
	w.GetVector().push_back(&Img36);

	/**************************************************************************************************************************/
	/**********************************MOFFAT********************************/

	//TABLEAU 37
	CZone zone37_1(0, 0, 501, 221, 39);
	std::vector<CZone> v37;
	v37.push_back(zone37_1);
	Tableau Img37("moffat/IMG_2806.JPG", v37, 38);
	w.GetVector().push_back(&Img37);


	//TABLEAU 38
	CZone zone39_1(220, 40, 111, 261, 42);
	CZone zone39_2(10, 20, 141, 261, 40);
	std::vector<CZone> v39;
	v39.push_back(zone39_1);
	v39.push_back(zone39_2);
	Tableau Img39("moffat/IMG_2817.JPG", v39, 39);
	w.GetVector().push_back(&Img39);

	//TABLEAU 39
	CZone zone40_1(190, 10, 151, 241, 41);
	std::vector<CZone> v40;
	v40.push_back(zone40_1);
	Tableau Img40("moffat/IMG_2816.JPG", v40, 40);
	w.GetVector().push_back(&Img40);

	//TABLEAU 40
	CZone zone41_1(0, 0, 0, 0, 0);
	std::vector<CZone> v41;
	v41.push_back(zone41_1);
	Tableau Img41("moffat/IMG_2820.JPG", v41, 41);
	w.GetVector().push_back(&Img41);

	//TABLEAU 41
	CZone zone42_1(140, 100, 131, 301, 43);
	CZone zone42_2(450, 10, 71, 391, 45);
	std::vector<CZone> v42;
	v42.push_back(zone42_1);
	v42.push_back(zone42_2);
	Tableau Img42("moffat/IMG_2813.JPG", v42,42);
	w.GetVector().push_back(&Img42);

	//TABLEAU 42
	CZone zone43_1(430, 60, 101, 231, 44);
	std::vector<CZone> v43;
	v43.push_back(zone43_1);
	Tableau Img43("moffat/IMG_2811.JPG", v43, 43);
	w.GetVector().push_back(&Img43);

	//TABLEAU 43
	CZone zone44_1(0, 0, 0, 0, 0);
	std::vector<CZone> v44;
	v44.push_back(zone44_1);
	Tableau Img44("moffat/IMG_2812.JPG", v44, 44);
	w.GetVector().push_back(&Img44);

	//TABLEAU 44
	CZone zone45_1(150, 60, 131, 341, 46);
	CZone zone45_2(410, 0, 71, 401, 48);
	std::vector<CZone> v45;
	v45.push_back(zone45_1);
	v45.push_back(zone45_2);
	Tableau Img45("moffat/IMG_2809.JPG", v45, 45);
	w.GetVector().push_back(&Img45);

	//TABLEAU 45
	CZone zone46_1(390, 320, 141, 81, 47);
	std::vector<CZone> v46;
	v46.push_back(zone46_1);
	Tableau Img46("moffat/IMG_2807.JPG", v46, 46);
	w.GetVector().push_back(&Img46);

	//TABLEAU 46
	CZone zone47_1(0, 0, 0, 0, 0);
	std::vector<CZone> v47;
	v47.push_back(zone47_1);
	Tableau Img47("moffat/IMG_2808.JPG", v47, 47);
	w.GetVector().push_back(&Img47);

	//TABLEAU 47
	CZone zone48_1(390, 270, 141, 121, 50);
	CZone zone48_2(0, 0, 0, 0, 0);
	CZone zone48_3(0, 0, 0, 0, 0);
	CZone zone48_4(0, 0, 0, 0, 0);
	CZone zone48_5(0,0,0,0,0);
	std::vector<CZone> v48;
	v48.push_back(zone48_1);
	v48.push_back(zone48_2);
	v48.push_back(zone48_3);
	v48.push_back(zone48_4);
	v48.push_back(zone48_5);
	Tableau Img48("moffat/IMG_2810.JPG", v48, 48);
	w.GetVector().push_back(&Img48);

	//Carte
	//Zone 1 
	CZone zoneC_1(250, 30, 181, 81, 1);
	//Zone 2
	CZone zoneC_2(350, 100, 91, 81, 2);
	//Zone 3 
	CZone zoneC_3(80, 170, 391, 241, 3);

	//Vecteur Zone Carte
	std::vector<CZone> vC;
	vC.push_back(zoneC_1);
	vC.push_back(zoneC_2);
	vC.push_back(zoneC_3);

	//image
	Tableau imgC("map/map.png",vC,49);
	//VecteurTableau
	w.GetVector().push_back(&imgC);

	/********************************************************************/
	//SYMBOLE DE LA SOLIDARITE
	CZone zone50(0, 0, 600, 400, 51);
	std::vector<CZone> v50;
	v50.push_back(zone50);
	Tableau Img50("symboles/solidarite/enfants.jpg", v50, 50);
	w.GetVector().push_back(&Img50);

	CZone zone51(0, 0, 600, 400, 52);
	std::vector<CZone> v51;
	v51.push_back(zone51);
	Tableau Img51("symboles/solidarite/enfants2.jpg", v51, 51);
	w.GetVector().push_back(&Img51);

	CZone zone52(0, 0, 600, 400, 53);
	std::vector<CZone> v52;
	v52.push_back(zone52);
	Tableau Img52("symboles/solidarite/J.Moffat.jpg", v52, 52);
	w.GetVector().push_back(&Img52);

	CZone zone53(0, 0, 600, 400, 48);
	std::vector<CZone> v53;
	v53.push_back(zone53);
	Tableau Img53("symboles/solidarite/preventorium.jpg", v53, 53);
	w.GetVector().push_back(&Img53);
	
	w.show();
	return a.exec(); 
}
