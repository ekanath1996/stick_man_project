#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float s,a,theta;
int c=45;
void timer(int v)
{
if(a<180)
 	{ 
      a=a+1;
	glutPostRedisplay();
	glutTimerFunc(1,timer,0);
 	}
 	else
 	{
   		a=180;
 	}
}void circle_draw(int xm,int ym,int rx,int ry)
{
	GLint theta;
	glBegin(GL_POLYGON);
	for(theta=0;theta<360;theta++)
	{
		glVertex2i(xm+(rx*cos(theta)),ym+(ry*sin(theta)));
		//printf("%d\t%d",xm+(rx*cos(theta)),ym+(ry*sin(theta)));
	}
	glEnd();
}

void roof1()
{
	glColor3f(0.008,0.228,0.496);
	glBegin(GL_POLYGON);
	glVertex2i(697,-333);
	glVertex2i(717,-260);
	glVertex2i(767,-322);
	glEnd();
	  //shading part
    glColor3f(0.01171875,0.1796875,0.35546875);
	glBegin(GL_POLYGON);
	glVertex2i(717,-260);
	glVertex2i(708,-331);
	glVertex2i(719,-330);
	glEnd();
	glColor3f(0.01171875,0.1796875,0.45546875);
	glBegin(GL_POLYGON);
	glVertex2i(717,-260);
	glVertex2i(743,-325);
	glVertex2i(754,-325);
	glEnd();
	glColor3f(0.01171875,0.1796875,0.35546875);	
	glBegin(GL_POLYGON);
	glVertex2i(717,-260);
	glVertex2i(754,-325);
	glVertex2i(766,-324);
	glEnd();
     
	//wall
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(697,-333);
	glVertex2i(716,-400);
	glVertex2i(775,-393);
	glVertex2i(767,-322);
	glEnd();

	glColor3f(0.8828125,0.8984375,0.89453125);
	glPushMatrix();
     glTranslatef(730,-328,0);
     glRotatef(10,0,0,1);
     glTranslatef(-530,328,0);
     circle_draw(531,-328,35,8);
     glPopMatrix();
	
	//wall_1_shading
	
	
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(696,-334);
	glVertex2i(768,-323);
	glColor3f(0.6953125,0.7265625,0.734375);
	
	glVertex2i(770,-352);
	
	glVertex2i(761,-367);	
	glVertex2i(746,-379);
	glVertex2i(735,-382);
	glVertex2i(724,-384);
	
	
	glVertex2i(711,-383);
	
	glVertex2i(696,-334);
	glEnd();
	
	//wall_1_brick
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(714,-379);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(710,-373);
	glVertex2i(719,-370);
	glVertex2i(722,-379);	
	glEnd();
	
     
	
}
void roof2()
{
	glColor3f(0.008,0.228,0.496);
	glBegin(GL_POLYGON);
	glVertex2i(797,-189);
	glVertex2i(830,-110);
	glVertex2i(878,-184);
	glEnd();
	
	//shading part
	
	glColor3f(0.01171875,0.1796875,0.45546875);
	glBegin(GL_POLYGON);
	glVertex2i(830,-110);
	glVertex2i(809,-188);
	glVertex2i(824,-188);
	glEnd();
	
	glColor3f(0.01171875,0.17578125,0.47109375);
	glBegin(GL_POLYGON);
	glVertex2i(830,-110);
	glVertex2i(851,-188);
	glVertex2i(863,-187);
	glEnd();
	
	glColor3f(0.01171875,0.1796875,0.35546875);
	glBegin(GL_POLYGON);
	glVertex2i(830,-110);
	glVertex2i(863,-187);
	glVertex2i(877,-187);
	glEnd();
	
	
	//wall_2
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(797,-189);
	glVertex2i(816,-289);
	glVertex2i(880,-288);
	glVertex2i(879,-184);
	
	glEnd();
	glColor3f(0.8828125,0.8984375,0.89453125);
	glPushMatrix();
     glTranslatef(837.5,-190,0);
     glRotatef(5,0,0,1);
     glTranslatef(-640,190,0);
     circle_draw(641,-190,41.5,10);
     glPopMatrix();
    //wall_2_shading_part 
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(796,-190);
	glVertex2i(878,-187);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(878,-213);
	glVertex2i(876,-224);
	glVertex2i(871,-234);
	glVertex2i(859,-247);
	glVertex2i(841,-260);
	glVertex2i(828,-267);
	glVertex2i(818,-270);
	glVertex2i(812,-271);
	glVertex2i(796,-190);
	glEnd();
	
    //briks_for_wall_2
    
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(806,-196);
	glColor3f(0.5390625,0.578125,0.574218750);
	glVertex2i(816,-194);
	glVertex2i(816,-200);
	glVertex2i(807,-203);	
	glEnd();
    
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(808,-214);
	glColor3f(0.5390625,0.578125,0.574218750);
	glVertex2i(814,-214);
	glVertex2i(815,-220);
	glVertex2i(809,-220);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(836,-245);
	glColor3f(0.5390625,0.578125,0.574218750);
	glVertex2i(848,-244);
	glVertex2i(848,-250);
	glVertex2i(839,-251);	
	glEnd();
	 
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(822,-258);
	glColor3f(0.5390625,0.578125,0.574218750);
	glVertex2i(828,-258);
	glVertex2i(829,-263);
	glVertex2i(822,-264);	
	glEnd(); 
     
    
    glBegin(GL_POLYGON);
    glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(861,-252);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(873,-251);
	glVertex2i(874,-258);
	glVertex2i(861,-260);	
	glEnd(); 
     
     
}
void roof3()
{
	glColor3f(0.008,0.228,0.496);
	glBegin(GL_POLYGON);
	glVertex2i(889,-151);
	glVertex2i(941,-57);
	glVertex2i(991,-153);
	glEnd();
	
	//shading part
	glColor3f(0.01171875,0.1796875,0.45546875);
	glBegin(GL_POLYGON);
	glVertex2i(941,-57);
	glVertex2i(905,-152);
	glVertex2i(923,-151);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glVertex2i(941,-57);
	glVertex2i(956,-152);
	glVertex2i(972,-153);
	glEnd();
	
	glColor3f(0.01171875,0.1796875,0.35546875);
	glBegin(GL_POLYGON);
	glVertex2i(941,-57);
	glVertex2i(972,-153);
	glVertex2i(990,-154);
	glEnd();
	
	//wall_3
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(889,-151);
	glVertex2i(899,-286);
	glVertex2i(981,-291);
	glVertex2i(991,-153);
	glEnd();
	
	glColor3f(0.8828125,0.8984375,0.89453125);
	glPushMatrix();
     glTranslatef(941,-154,0);
     glRotatef(-2,0,0,1);
     glTranslatef(-741,154,0);
     circle_draw(741,-154,51,12);
     glPopMatrix();
     
    
     
     
     //wall_3_shading_part
     
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(889,-152);
	glVertex2i(992,-154);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(988,-200);
	glVertex2i(978,-216);
	glVertex2i(971,-225);
	glVertex2i(964,-231);
	glVertex2i(959,-235);
	glVertex2i(952,-239);
	glVertex2i(946,-242);
	glVertex2i(937,-247);
	glVertex2i(927,-251);
	glVertex2i(912,-255);
	glVertex2i(903,-257);
	glVertex2i(896,-258);
	glVertex2i(889,-152);
	glEnd();
	
	
	//brick_for_wall_3
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(900,-160);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(910,-159);
	glVertex2i(910,-165);
	glVertex2i(901,-165);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(932,-157);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(937,-157);
	glVertex2i(937,-161);
	glVertex2i(932,-161);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(963,-161);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(976,-161);
	glVertex2i(975,-169);
	glVertex2i(963,-169);	
	glEnd();
	
	
    glBegin(GL_POLYGON);
    glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(908,-177);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(913,-177);
	glVertex2i(913,-180);
	glVertex2i(909,-180);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(975,-186);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(980,-186);
	glVertex2i(980,-190);
	glVertex2i(974,-190);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(901,-192);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(910,-192);
	glVertex2i(910,-197);
	glVertex2i(901,-198);	
	glEnd();
	
	glBegin(GL_POLYGON);
	
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(967,-204);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(976,-204);
	glVertex2i(975,-210);
	glVertex2i(967,-210);	
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(900,-207);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(906,-207);
	glVertex2i(907,-211);
	glVertex2i(900,-211);	
	glEnd();
	
	
    glBegin(GL_POLYGON);
    glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(902,-227);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(911,-227);
	glVertex2i(911,-232);
	glVertex2i(903,-233);	
	glEnd(); 
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(909,-237);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(917,-237);
	glVertex2i(917,-242);
	glVertex2i(908,-243);	
	glEnd(); 
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(934,-236);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(942,-236);
	glVertex2i(942,-239);
	glVertex2i(935,-240);	
	glEnd(); 
	
	
     
}
void roof4()
{
	
	
	//roof_4_shading part
	glColor3f(0.008,0.228,0.496);
	glBegin(GL_POLYGON);
	glVertex2i(1034,-311);
	glVertex2i(1074,-316);
	glVertex2i(1064,-245);
	glEnd();
	
	glColor3f(0.008,0.228,0.496);
	glBegin(GL_POLYGON);
	glVertex2i(904,-251);
	glVertex2i(910,-250);
	glVertex2i(903,-255);
	glEnd();
	
	glColor3f(0.01171875,0.1796875,0.35546875);
	glBegin(GL_POLYGON);
	glVertex2i(1064,-244);
	glVertex2i(1020,-310);
	glVertex2i(1032,-309);
	glEnd();
	
	glColor3f(0.01171875,0.1796875,0.45546875);
	glBegin(GL_POLYGON);
	glVertex2i(1064,-244);
	glVertex2i(1032,-309);
	glVertex2i(1044,-311);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(1064,-244);
	glVertex2i(1065,-314);
	glVertex2i(1079,-318);
	glEnd();
	
	glColor3f(0.01171875,0.1796875,0.35546875);
	glBegin(GL_POLYGON);
	glVertex2i(1064,-244);
	glVertex2i(1079,-318);
	glVertex2i(1088,-316);
	glEnd();
	
	//wall_4
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(1020,-308);
	glVertex2i(1015,-389);
	glVertex2i(1072,-393);
	glVertex2i(1090,-317);	
	glEnd();
	glColor3f(0.8828125,0.8984375,0.89453125);
	glPushMatrix();
     glTranslatef(1055,-313,0);
     glRotatef(-7,0,0,1);
     glTranslatef(-855,313,0);
     circle_draw(855,-313,35,10);
     glPopMatrix();
     
     
      
     //wall_3_shading_part
     
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(1019,-311);
	glVertex2i(1090,-319);
	glVertex2i(1086,-333);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(1077,-376);
	glVertex2i(1068,-376);
	glVertex2i(1051,-372);
	glVertex2i(1040,-367);
	glVertex2i(1035,-364);
	glVertex2i(1029,-359);
	glVertex2i(1024,-353);
	glVertex2i(1020,-346);
	glVertex2i(1018,-340);
	glVertex2i(1019,-311);	
	glEnd();
	

}
void main_wall()
{
    glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(1000,-277);
	glVertex2i(997,-312);
	glVertex2i(789,-316);
	glVertex2i(784,-283);
	glEnd();
			glColor3f(0.6953125,0.7265625,0.734375);
	glPushMatrix();
     glTranslatef(892,-283,0);
     glRotatef(1.5,0,0,1);
     glTranslatef(-692,283,0);
     circle_draw(692,-283,107,20);
     glPopMatrix();
     
     //main_wall_1_shading
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(783,-280);

	
	
	glVertex2i(809,-273);
	glVertex2i(819,-270);
	glVertex2i(840,-267);
	glVertex2i(864,-265);
	
	glVertex2i(900,-263);
	glVertex2i(923,-264);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(956,-270);
	glVertex2i(984,-274);
	glVertex2i(1000,-279);
	
	
	glVertex2i(990,-282);
	glVertex2i(979,-286);
	glVertex2i(971,-288);
	glVertex2i(966,-289);
	glVertex2i(955,-291);
	glVertex2i(945,-293);
	glVertex2i(934,-295);
	glVertex2i(921,-296);
	glVertex2i(910,-297);
	glVertex2i(893,-300);
	
	glVertex2i(889,-300);
	glColor3f(0.8828125,0.8984375,0.89453125);
	
	glVertex2i(789,-317);
	glVertex2i(787,-284);
	glEnd(); 
    
	//brick_for_1_main_wall
	
	  
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(796,-305);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(796,-297);
	glVertex2i(807,-294);
	glVertex2i(808,-300);
	glEnd();
	
	 
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(818,-285);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(827,-284);
	glVertex2i(828,-290);
	glVertex2i(817,-291);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(840,-290);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(846,-289);
	glVertex2i(846,-294);
	glVertex2i(841,-294);
	glEnd();
	
	 
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(960,-284);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(968,-284);
	glVertex2i(968,-293);
	glVertex2i(960,-293);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(974,-289);
	glColor3f(0.3203125,0.3515625,0.36328125);
	glVertex2i(980,-289);
	glVertex2i(981,-294);
	glVertex2i(976,-294);
	glEnd();
     
     
     
     //2_wall
	
	glColor3f(0.4921875,0.52734375,0.5234375);
	glBegin(GL_POLYGON);
	glVertex2i(793,-315);
	glVertex2i(803,-386);
	glVertex2i(982,-386);
	glVertex2i(991,-310);
	glEnd();


    	glPushMatrix();
     glTranslatef(892,-316,0);
     glRotatef(2,0,0,1);
     glTranslatef(-692,316,0);
     circle_draw(692,-316,99.5,20);
     glPopMatrix();
     
     //shadind_2_wall
    glColor3f(0.4375,0.4609375,0.4609375);

	glBegin(GL_POLYGON);
	glVertex2i(794,-315);

	glVertex2i(810,-312);
	glVertex2i(826,-311);
	glVertex2i(861,-308);
		
	
	glVertex2i(898,-306);
	glVertex2i(935,-307);

    glColor3f(0.4375,0.4609375,0.4609375);
	glVertex2i(961,-308);
	
	glVertex2i(985,-310);
	glVertex2i(990,-311);
	glVertex2i(986,-348);
	glVertex2i(974,-345);
	glVertex2i(958,-342);
	
	glVertex2i(942,-339);
	glVertex2i(923,-336);
	glVertex2i(905,-336);
	glVertex2i(881,-336);
	glVertex2i(860,-337);
	glColor3f(0.5828125,0.5984375,0.59453125);
	glVertex2i(840,-341);
	glVertex2i(821,-344);
	//glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(806,-349);
	glVertex2i(799,-351);
	glVertex2i(794,-315);
	glEnd();
     
    // main_wall_2_brick
	
	  	glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(839,-310);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(851,-310);
	glVertex2i(851,-317);
	glVertex2i(840,-318);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(859,-323);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(866,-323);
	glVertex2i(867,-328);
	glVertex2i(860,-328);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(886,-309);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(896,-310);
	glVertex2i(896,-314);
	glVertex2i(887,-315);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.30859375,0.34375,0.33984375);
	glVertex2i(929,-312);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(943,-311);
	glVertex2i(940,-318);
	glVertex2i(930,-317);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.30859375,0.34375,0.33984375);
	glVertex2i(975,-312);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(980,-312);
	glVertex2i(981,-315);
	glVertex2i(975,-316);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(801,-341);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(809,-341);
	glVertex2i(809,-345);
	glVertex2i(801,-345);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.30859375,0.34375,0.33984375);
	glVertex2i(853,-336);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(868,-336);
	glVertex2i(869,-343);
	glVertex2i(854,-344);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.30859375,0.34375,0.33984375);
	glVertex2i(909,-336);
	glVertex2i(914,-336);
	glVertex2i(915,-341);
	glVertex2i(909,-340);
	glEnd();
     
      
     
     
     
     
     
     
     //cutting parts  1
    
	
     
     glColor3f(0.35156,0.3711,0.3555);
    
	glBegin(GL_POLYGON);
	glVertex2i(790,-278);
	glVertex2i(792,-287);
	glVertex2i(810,-282);
	glVertex2i(810,-276);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(833,-266);
	glVertex2i(837,-276);
	glVertex2i(854,-274);
	glVertex2i(856,-264);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(880,-263);
	glVertex2i(880,-274);
	glVertex2i(897,-274);
	glVertex2i(897,-263);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(919,-262);
	glVertex2i(919,-273);
	glVertex2i(936,-273);
	glVertex2i(938,-263);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(963,-266);
	glVertex2i(963,-276);
	glVertex2i(978,-278);
	glVertex2i(980,-268);
	glEnd();
//cutting shading

  	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(795,-272);
	glVertex2i(798,-284);
	glVertex2i(810,-280);
	glVertex2i(810,-272);
	glEnd();

	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(837,-265);
	glVertex2i(840,-272);
	glVertex2i(855,-270);
	glVertex2i(856,-263);
	glEnd();
	
	
	 	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(882,-263);
	glVertex2i(882,-272);
	glVertex2i(895,-272);
	glVertex2i(895,-263);
	glEnd();

 
	
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(919,-261);
	glVertex2i(919,-270);
	glVertex2i(935,-270);
	glVertex2i(936,-262);
	glEnd();
	
	
	
    	glBegin(GL_POLYGON);
	glVertex2i(963,-266);
	glVertex2i(963,-273);
	glVertex2i(976,-275);
	glVertex2i(976,-267);
	glEnd();


//3rd wall

	
    	glColor3f(0.73046875,0.76953125,0.765625);
    	
	glPushMatrix();
     glTranslatef(892,-369,0);
     glRotatef(2,0,0,1);
     glTranslatef(-692,369,0);
     circle_draw(692,-369,113,20);
     glPopMatrix();
     
     
     //cutting part 2
    	glColor3f(0.35156,0.3711,0.3555);
   
	glBegin(GL_POLYGON);
	glVertex2i(799,-359);
	glVertex2i(801,-369);
	glVertex2i(818,-367);
	glVertex2i(818,-356);
	glEnd();
     	
	glBegin(GL_POLYGON);
	glVertex2i(841,-352);
	glVertex2i(842,-364);
	glVertex2i(860,-363);
	glVertex2i(860,-350);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(882,-349);
	glVertex2i(882,-361);
	glVertex2i(897,-361);
	glVertex2i(897,-349);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(925,-348);
	glVertex2i(925,-360);
	glVertex2i(942,-360);
	glVertex2i(943,-348);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(968,-350);
	glVertex2i(967,-362);
	glVertex2i(983,-363);
	glVertex2i(983,-352);
	glEnd();
	
	//shading part
	
	
     glColor3f(0.4921875,0.52734375,0.5234375);
     
		glBegin(GL_POLYGON);
	glVertex2i(803,-356);
	glVertex2i(805,-365);
	glVertex2i(818,-363);
	glVertex2i(818,-355);
	glEnd();
     	
	glBegin(GL_POLYGON);
	glVertex2i(845,-350);
	glVertex2i(846,-360);
	glVertex2i(860,-359);
	glVertex2i(860,-350);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(884,-349);
	glVertex2i(884,-359);
	glVertex2i(895,-359);
	glVertex2i(895,-349);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(925,-348);
	glVertex2i(925,-358);
	glVertex2i(938,-358);
	glVertex2i(939,-348);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(968,-348);
	glVertex2i(967,-360);
	glVertex2i(978,-361);
	glVertex2i(978,-350);
	glEnd();
	
	
	//wall left
	glColor3f(0.36328125,0.39453125,0.40234375);
	glBegin(GL_POLYGON);
	glVertex2i(696,-395);
	glVertex2i(724,-500);
	glVertex2i(798,-492);
	glVertex2i(781,-381);
	glEnd();
	glPushMatrix();
     glTranslatef(739,-392,0);
     glRotatef(9,0,0,1);
     glTranslatef(-539,392,0);
     circle_draw(539,-392,42,10);
     glPopMatrix();
     
     //wall_left_shading_part
     
     
    
	glBegin(GL_POLYGON);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(695,-394);
	glVertex2i(713,-392);
	glVertex2i(725,-384);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(745,-380);
	glVertex2i(767,-380);
	glVertex2i(768,-379);
	glVertex2i(770,-403);
	glVertex2i(769,-415);
	glVertex2i(767,-429);
	glVertex2i(762,-446);
	glVertex2i(755,-461);
	glVertex2i(748,-471);
	glVertex2i(741,-480);
	glVertex2i(734,-488);
	glVertex2i(726,-493);
	glVertex2i(722,-496);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(712,-455);
	glVertex2i(707,-434);
	glVertex2i(699,-403);
	glVertex2i(695,-394);
	
	glEnd();
     //left_brick
     
     	glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(709,-400);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(711,-409);
	glVertex2i(724,-407);
	glVertex2i(724,-398);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(738,-398);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(738,-404);
	glVertex2i(758,-404);
	glVertex2i(758,-396);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(726,-412);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(728,-419);
	glVertex2i(738,-416);
	glVertex2i(738,-409);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(717,-426);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(718,-433);
	glVertex2i(730,-432);
	glVertex2i(729,-425);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(743,-423);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(745,-430);
	glVertex2i(763,-428);
	glVertex2i(761,-421);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(733,-442);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(733,-447);
	glVertex2i(745,-446);
	glVertex2i(744,-441);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(718,-460);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(722,-471);
	glVertex2i(739,-468);
	glVertex2i(737,-457);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(768,-455);
	glVertex2i(768,-459);
	glVertex2i(776,-458);
	glVertex2i(775,-454);
	glEnd();
     
     
     
     //cutting part
     	glColor3f(0.35156,0.3711,0.3555);
	glBegin(GL_POLYGON);
	glVertex2i(710,-387);
	glVertex2i(713,-398);
	glVertex2i(725,-395);
	glVertex2i(724,-384);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(745,-380);
	glVertex2i(747,-392);
	glVertex2i(758,-391);
	glVertex2i(758,-380);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(776,-381);
	glVertex2i(777,-389);
	glVertex2i(782,-389);
	glVertex2i(781,-380);
	glEnd();
	
	//shading part
	
	glColor3f(0.58203125,0.62109375,0.625);
	glBegin(GL_POLYGON);
	glVertex2i(714,-386);
	glVertex2i(717,-394);
	glVertex2i(725,-391);
	glVertex2i(724,-383);
	glEnd();
		
	glBegin(GL_POLYGON);
	glVertex2i(749,-380);
	glVertex2i(751,-388);
	glVertex2i(758,-387);
	glVertex2i(758,-380);
	glEnd();
	
	
	
	//wall right
    glColor3f(0.36328125,0.39453125,0.40234375);
	glBegin(GL_POLYGON);
	glVertex2i(1004,-376);
	glVertex2i(996,-486);
	glVertex2i(1067,-488);
	glVertex2i(1087,-385);
	glEnd();
	glPushMatrix();
     glTranslatef(1045.5,-384,0);
     glRotatef(-6,0,0,1);
     glTranslatef(-845.5,384,0);
     circle_draw(845.5,-384,42,13);
     glPopMatrix();
     
     
     //wall_right_shading_part
     
     
    
    
	glBegin(GL_POLYGON);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(1015,-371);
	glVertex2i(1027,-369);
	glVertex2i(1054,-374);
	glColor3f(0.8828125,0.8984375,0.89453125);
	glVertex2i(1070,-375);
	glVertex2i(1088,-383);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(1082,-410);
	glVertex2i(1079,-427);
	glVertex2i(1076,-441);
	glVertex2i(1074,-451);
	glVertex2i(1072,-460);
	glVertex2i(1069,-472);
	glVertex2i(1054,-467);
	glVertex2i(1042,-458);
	glVertex2i(1034,-450);
	glVertex2i(1026,-437);
	glVertex2i(1022,-425);
	glVertex2i(1018,-415);
	glVertex2i(1015,-402);
	glVertex2i(1015,-396);
	glVertex2i(1015,-387);
	glVertex2i(1015,-379);
	glVertex2i(1015,-371);
	
	glEnd();
     //wall_right_brick
     
     
       	glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1017,-389);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1017,-397);
	glVertex2i(1034,-398);
	glVertex2i(1034,-389);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1051,-393);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1050,-399);
	glVertex2i(1062,-399);
	glVertex2i(1061,-393);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1034,-406);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1035,-411);
	glVertex2i(1045,-412);
	glVertex2i(1045,-407);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1063,-413);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1063,-421);
	glVertex2i(1074,-423);
	glVertex2i(1075,-413);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1044,-425);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1044,-429);
	glVertex2i(1053,-430);
	glVertex2i(1052,-426);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1026,-437);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1026,-441);
	glVertex2i(1035,-442);
	glVertex2i(1035,-437);
	glEnd();
		glBegin(GL_POLYGON);
	glColor3f(0.49609375,0.515625,0.52734375);
	glVertex2i(1052,-448);
	glColor3f(0.5390625,0.578125,0.57421875);
	glVertex2i(1053,-456);
	glVertex2i(1066,-456);
	glVertex2i(1066,-448);
	glEnd();
     
     
     //cutting part
   		glColor3f(0.35156,0.3711,0.3555);
	glBegin(GL_POLYGON);
	glVertex2i(1023,-370);
	glVertex2i(1023,-381);
	glVertex2i(1036,-381);
	glVertex2i(1036,-370);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(1058,-374);
	glVertex2i(1058,-385);
	glVertex2i(1069,-386);
	glVertex2i(1071,-375);
	glEnd();
	//shading part
	
	glColor3f(0.58203125,0.62109375,0.625);
	
	glBegin(GL_POLYGON);
	glVertex2i(1023,-368);
	glVertex2i(1023,-378);
	glVertex2i(1032,-378);
	glVertex2i(1032,-368);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(1058,-373);
	glVertex2i(1058,-382);
	glVertex2i(1064,-383);
	glVertex2i(1064,-374);
	glEnd();
	
}
void roof()
{
	roof1();
	roof2();
	roof3();
	roof4();
	main_wall();
	//error
	glColor3f(0.6953125,0.7265625,0.734375); 
    glBegin(GL_POLYGON);
	glVertex2i(901,-247);
	glVertex2i(913,-247);
	glVertex2i(917,-255);
	glVertex2i(900,-257);
	glEnd(); 
	
	
	
}
void window()
{
	//window 3
	glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(920,-175);
	glVertex2i(920,-203);
	glVertex2i(960,-203);
	glVertex2i(960,-175);	
	glEnd();
     circle_draw(940,-174,20,20);
    glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(914,-203);
	glVertex2i(914,-214);
	glVertex2i(967,-214);
	glVertex2i(967,-203);	
	glEnd();
	//window_3_shading_part
		glColor3f(0.2578125,0.28125,0.28125);
	glBegin(GL_POLYGON);
	glVertex2i(924,-175);
	glVertex2i(924,-199);
	glVertex2i(960,-199);
	glVertex2i(960,-175);	
	glEnd();
     circle_draw(942,-172,18,18);
    
	
	glColor3f(0.8828125,0.8984375,0.89453125);	
	glBegin(GL_POLYGON);
	glVertex2i(918,-203);
	glVertex2i(918,-212);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(963,-212);
	glVertex2i(963,-203);	
	glEnd();
	
	
	
	
	
	
	//window 1
    glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(721,-346);
	glVertex2i(727,-366);
	glVertex2i(752,-362);
	glVertex2i(747,-340);	
	glEnd();
     circle_draw(734,-344,14,14);
    
	glBegin(GL_POLYGON);
	glVertex2i(723,-365);
	glVertex2i(724,-371);
	glVertex2i(758,-363);
	glVertex2i(757,-357);	
	glEnd();
	
	//window_1_shading
	
	glColor3f(0.2578125,0.28125,0.28125);
	glBegin(GL_POLYGON);
	glVertex2i(721,-346);
	glVertex2i(727,-366);
	glVertex2i(750,-362);
	glVertex2i(745,-340);	
	glEnd();
     circle_draw(734.5,-346,12,12);
    
    glColor3f(0.8828125,0.8984375,0.89453125);	
	glBegin(GL_POLYGON);
	glVertex2i(726,-365);
	glVertex2i(727,-370);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(755,-362);
	glVertex2i(754,-357);	
	glEnd();
	
	
	
	//window 2
	glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(825,-208);
	glVertex2i(827,-232);
	glVertex2i(857,-230);
	glVertex2i(855,-208);	
	glEnd();
     circle_draw(840,-208,15,15);
	glBegin(GL_POLYGON);
	glVertex2i(823,-232);
	glVertex2i(824,-240);
	glVertex2i(863,-238);
	glVertex2i(862,-230);	
	glEnd();
	
	//window_2_shading
	
	glColor3f(0.2578125,0.28125,0.28125);
	glBegin(GL_POLYGON);
	glVertex2i(827,-208);
	glVertex2i(829,-230);
	glVertex2i(853,-228);
	glVertex2i(851,-208);	
	glEnd();
     circle_draw(840,-212,12.5,12.5);
    
    glColor3f(0.8828125,0.8984375,0.89453125);
	glBegin(GL_POLYGON);
	glVertex2i(827,-232);
	glVertex2i(828,-238);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(859,-236);
	glVertex2i(858,-230);	
	glEnd();	
	
	//window 4
	glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(1039,-330);
	glVertex2i(1037,-349);
	glVertex2i(1062,-352);
	glVertex2i(1066,-332);	
	glEnd();
     circle_draw(1053,-330,13,12);
    
    
    glBegin(GL_POLYGON);
	glVertex2i(1034,-349);
	glVertex2i(1033,-356);
	glVertex2i(1065,-359);
	glVertex2i(1066,-352);	
	glEnd();
	//window_4_shading
	
	glColor3f(0.2578125,0.28125,0.28125);
	glBegin(GL_POLYGON);
	glVertex2i(1043,-330);
	glVertex2i(1041,-348);
	glVertex2i(1062,-351);
	glVertex2i(1066,-332);	
	glEnd();
     circle_draw(1055,-332,11,12);
    glColor3f(0.8828125,0.8984375,0.89453125);
    glBegin(GL_POLYGON);
	glVertex2i(1037,-349);
	glVertex2i(1037,-355);
	glColor3f(0.6953125,0.7265625,0.734375);
	glVertex2i(1063,-358);
	glVertex2i(1063,-352);	
	glEnd();
	
	
	//window sub 1
	glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(817,-325);
	glVertex2i(817,-338);
	glVertex2i(841,-338);
	glVertex2i(841,-324);	
	glEnd();
     circle_draw(829,-324,12,12);
     
     //window_sub_1_shading
     
    glColor3f(0.2578125,0.28125,0.28125);
    glBegin(GL_POLYGON);
	glVertex2i(820.5,-325);
	glVertex2i(820.5,-337);
	glVertex2i(841,-337);
	glVertex2i(841,-324);	
	glEnd();
    circle_draw(831,-326,10.5,11);
     
     
     //window sub 2
    glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(877,-321);
	glVertex2i(877,-334);
	glVertex2i(901,-334);
	glVertex2i(901,-320);	
	glEnd();
     circle_draw(889,-320,12,12);
     
     //window_sub_2_shading
    
	glColor3f(0.2578125,0.28125,0.28125); 
    glBegin(GL_POLYGON);
	glVertex2i(880,-321);
	glVertex2i(880,-333);
	glVertex2i(898,-333);
	glVertex2i(898,-320);	
	glEnd();
    circle_draw(889,-320,9,9);
     
     //window sub 3
    glColor3f(0.40625,0.44140625,0.4375);
	glBegin(GL_POLYGON);
	glVertex2i(937,-321);
	glVertex2i(937,-334);
	glVertex2i(961,-334);
	glVertex2i(961,-320);	
	glEnd();
     circle_draw(949,-320,12,12);
     
     //window_sub_3_shading
    
    glColor3f(0.2578125,0.28125,0.28125);
	glBegin(GL_POLYGON);
	glVertex2i(937,-321);
	glVertex2i(937,-332);
	glVertex2i(958,-332);
	glVertex2i(958,-320);	
	glEnd();
     circle_draw(947,-321,10,10);
}

void wall_with_door()
{
    glColor3f(0.4921875,0.52734375,0.5234375);
	glBegin(GL_POLYGON);
	glVertex2i(779,-373);
	glVertex2i(799,-499);
	glVertex2i(998,-488);
	glVertex2i(1005,-362);
	glEnd();
	
	//outer_section_1
	glColor3f(0.73046875,0.76983125,0.0);
/*	glBegin(GL_POLYGON);
	glVertex2i(895,-374);
	glVertex2i(895,-363);
	glVertex2i(883,-368);
	glVertex2i(874,-374);
	glVertex2i(867,-378);
	glVertex2i(859,-384);
	glVertex2i(852,-391);
	glVertex2i(847,-399);
	glVertex2i(841,-406);
	glVertex2i(838,-416);
	glVertex2i(836,-424);
	glVertex2i(836,-435);
	glVertex2i(836,-447);
	glVertex2i(836,-463);
	glVertex2i(836,-474);
	glVertex2i(840,-487);
	glVertex2i(829,-487);
	glVertex2i(815,-488);
	glVertex2i(998,-488);
	glVertex2i(793,-465);
	glVertex2i(790,-438);
	glVertex2i(786,-414);
	glVertex2i(783,-389);
	glVertex2i(781,-374);
	glEnd();
	
//outer_section_2
*/	glColor3f(0.73046875,0.76983125,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(1007,-365);
	glVertex2i(895,-365);
	glVertex2i(895,-368);
	glVertex2i(901,-371);
	glVertex2i(908,-374);
	glVertex2i(917,-379);
	glVertex2i(925,-384);
	glVertex2i(934,-390);
	glVertex2i(941,-397);
	glVertex2i(951,-410);
	glVertex2i(958,-421);
	glVertex2i(960,-427);
	glVertex2i(961,-439);
	glVertex2i(963,-455);
	glVertex2i(964,-471);
	glVertex2i(964,-482);
	glVertex2i(976,-481);
	glVertex2i(990,-480);
	glVertex2i(1000,-480);
	glVertex2i(1000,-465);
	glVertex2i(1001,-451);
	glVertex2i(1002,-432);
	glVertex2i(1004,-311);
	glVertex2i(1006,-390);
	glVertex2i(1007,-365);
	glEnd();
		
	
	
	
}
void bgp()
{
	  	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(0,-523);
	glVertex2i(730,-490);
	glVertex2i(720,-800);
	glVertex2i(0,-800);	
	glEnd();
	glColor3f(1.0,1.0,1.0);
	circle_draw(337,-480,400,100);
}
void display(void)
{
     glClear(GL_COLOR_BUFFER_BIT);
     wall_with_door();
     bgp();
	 roof();
     window();
      
     glFlush();
     glutSwapBuffers();
}
     int main(int argc,char **argv)
{
    printf("Hello world");
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1300,731);
    glutInitWindowPosition(0,0);
    glutCreateWindow("CG Lab");
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1300.0,-731.0,0.0,-800.0,800.0);
    glutDisplayFunc(display);
    timer(0);
    glutMainLoop();
}
