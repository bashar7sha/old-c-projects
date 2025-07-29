#include <iostream>
#include <math.h>
using namespace std;



class Circleop{
public:
    float area(float r){
    cout<<"Circle Are formula ( A = 3.14*r^2)\n";
    cout<<"Enter Circle radius(r):";
    cin >>r;
    float A = 3.14*r*r;
    cout<<"\n\n\n\n"<<endl;
    cout<<"The Area Of The Circle is:"<<A<<"\n\n\n\n"<<endl;

    }
    float circumference(float r){
    cout<<"Circle Circumference Formula (c=2*3.14*r)\n"<<endl;
    cout<<"Enter Circle radius(r):";
    cin >>r;
    float c = 3.14*2*r;
    cout<<"\n\n\n\n"<<endl;
    cout<<"The Circumference Of The Circle is:"<<c<<"\n\n"<<endl;


    }
};
class triangleop{
public:
    float area(float b,float h){
    cout<<"Triangle Area formula ( 0.5*base*height)\n";
    cout<<"Enter Triangle Base(b):";
    cin>>b;
    cout<<"Enter Triangle Height(h):";
    cin>>h;
    float A = 0.5*b*h;
    cout<<"\n\n\n"<<endl;
    cout<<"The Area Of The Triangle is:"<<A<<"\n\n"<<endl;
    }
    float perimeter(float a,float b,float c){
    cout<<"Triangle Perimeter formula (P = base + left side + right side )\n";
    cout<<"Enter First side:";
    cin>>a;
    cout<<"Enter Second side:";
    cin>>b;
    cout<<"Enter Third side:";
    cin>>c;
    if(a+b>c && a+c>b && c+b>a){
            float p = a+b+c;
    cout<<"\n\n\n"<<endl;
    cout<<"The Perimeter Of The Triangle is:"<<p<<"\n\n"<<endl;
    }
    else if(a+b<c || a+c<b || c+b <a){
        cout<<"The triangle inequality states that the sum of the lengths of any two sides of a triangle must be greater than or equal to the length of the third side.\n";
        cout<<"That sum can equal the length of the third side only in the case of a degenerate triangle,\n";

    }
    }
    float area2(float a){
    cout<<"Equilateral Triangle Area formula ((root3/4)a^2)\n";
    cout<<"Enter Equilateral side length :";
    cin>>a;
    float A = 0.866*a*a;
    cout<<"\n\n\n"<<endl;
    cout<<"The Area Of The Equilateral Triangle is:"<<A<<"\n\n"<<endl;
    }
    void graph(){
    cout<<"      a"<<endl;
    cout<<"     * * "<<endl;
    cout<<"    *   * "<<endl;
    cout<<"   *     * "<<endl;
    cout<<"  *       * "<<endl;
    cout<<" b*********c "<<endl;



    }

    };
class rectangleop{
public:
    float area(float l,float w){
     cout<<"Rectangle Area formula ( length*width)\n";
    cout<<"Enter Rectangle length :";
    cin>>l;
    cout<<"Enter Rectangle Width:";
    cin>>w;
    float A = l*w;
    cout<<"\n\n\n"<<endl;
    cout<<"The Area Of The Rectangle is:"<<A<<"\n\n"<<endl;



    }
    float perimeter(float a,float b){
    cout<<"Rectangle Perimeter formula (2*sida a * 2*side b)\n";
    cout<<"Enter Rectangle side a :";
    cin>>a;
    cout<<"Enter Rectangle side b :";
    cin>>b;
    float p = 2*a*2*b;
    cout<<"\n\n\n"<<endl;
    cout<<"The Perimeter Of The Rectangle is:"<<p<<"\n\n"<<endl;


    }
    float diagonal(float a, float b){
    cout<<"Rectangle diagonal formula ((a^2 + b^2)^0.5)\n";
    cout<<"Enter Rectangle side a :";
    cin>>a;
    cout<<"Enter Rectangle side b :";
    cin>>b;
    float p = a*a+b*b;
    float q = sqrt(p);
    cout<<"\n\n\n"<<endl;
    cout<<"The diagonal Of The Rectangle is:"<<q<<"\n\n"<<endl;


    }
    void graph(){
    cout<<"a______________________b\n";
    cout<<"|                      |\n";
    cout<<"|                      |\n";
    cout<<"|                      |\n";
    cout<<"|                      |\n";
    cout<<"c______________________d\n";
    }

};
class squareop{
    public:
    float area(float a){
     cout<<"Square Area formula (side length(a)^2)\n";
    cout<<"Enter Square side length(a) :";
    cin>>a;
    float A = a*a;
    cout<<"\n\n\n"<<endl;
    cout<<"The Area Of The Square is:"<<A<<"\n\n"<<endl;
    }
    float perimeter(float a){
    cout<<"Square Perimeter formula (The sum of the four sides(a))\n";
    cout<<"Enter Square side length(a) :";
    cin>>a;
    float A = a+a+a+a;
    cout<<"\n\n\n"<<endl;
    cout<<"The Perimeter Of The Square is:"<<A<<"\n\n"<<endl;



    }
    float diagonal(float a){

    cout<<"Square diagonal formula ((a^2 + a^2)^0.5)\n";
    cout<<"Enter Square side Length :";
    cin>>a;
    float p = a*a+a*a;
    float q = sqrt(p);
    cout<<"\n\n\n"<<endl;
    cout<<"The diagonal Of The Square is:"<<q<<"\n\n"<<endl;
    }
    void graph(){
    cout<<"a----------b"<<endl;
    cout<<"|          |"<<endl;
    cout<<"|          |"<<endl;
    cout<<"|          |"<<endl;
    cout<<"|          |"<<endl;
    cout<<"|          |"<<endl;
    cout<<"c----------d"<<endl;
    cout<<"\n\n";
    cout<<"ab=bd=dc=ca\n";
        }
};
class cubeop{
public:
    float volume(float a){
    cout<<"Cube Voulme formula (side length(a)^3)\n";
    cout<<"Enter Cube side length(a) :";
    cin>>a;
    float V = a*a*a;
    cout<<"\n\n\n"<<endl;
    cout<<"The Voulme Of The cube is:"<<V<<"\n\n"<<endl;
    }
    float surfacearea(float a){
    cout<<"Cube Surface Area formula (the area of each face (a x a) times 6 faces (S = 6*a^2))\n";
    cout<<"Enter Cube side length(a) :";
    cin>>a;
    float S = 6*(a*a);
    cout<<"\n\n\n"<<endl;
    cout<<"The Surface Area Of The cube is:"<<S<<"\n\n"<<endl;


    }
    float facedia(float a){
    cout<<"Cube Face diagonal formula :\n";
    cout<<"By the pythagorean theorem we know that\n";
    cout<<"f^2 = a^2 + a^2 \n";
    cout<<"Solving for f we get f=a*root(2)\n";
    cout<<"Enter Cube side length(a) :";
    cin>>a;
    float f = a*sqrt(2);
    cout<<"\n\n\n"<<endl;
    cout<<"The Face diagonal Of The cube is:"<<f<<"\n\n"<<endl;


    }
    float soilddia(float a){
    cout<<"Cube Soild diagonal formula :\n";
    cout<<"Again, by the pythagorean theorem we know that\n";
    cout<<"d^2 = a^2 + f^2 :: f(Face diagonal)\n";
    cout<<"substituting f into this equation we get\n";
    cout<<"d^2 = a^2 + (a*root(2))^2 = a^2 + 2*a^2 = 3*a^2\n";
    cout<<"Solving for d we get d = a*root(3)\n";
    cout<<"Enter Cube side length(a) :";
    cin>>a;
    float f = a*sqrt(3);
    cout<<"\n\n\n"<<endl;
    cout<<"The Face diagonal Of The cube is:"<<f<<"\n\n"<<endl;

    }
};
class cylinderop{
public:
    float volume(float r, float h){
    cout<<"Cylinder Voulme formula (V = 3.14*(r^2)*h)\n";
    cout<<"r = radius , h = height \n";
    cout<<"Enter Cylinder radius:";
    cin>>r;
    cout<<"Enter Cylinder height:";
    cin>>h;
    float V =3.14*(r*r)*h;
    cout<<"\n\n\n"<<endl;
    cout<<"The Voulme Of The Cylinder is:"<<V<<"\n\n"<<endl;


    }
    float lsa(float r,float h){
    cout<<"Cylinder Lateral surface area formula (L = 2*3.14*r*h)\n";
    cout<<"r = radius , h = height \n";
    cout<<"Enter Cylinder radius:";
    cin>>r;
    cout<<"Enter Cylinder height:";
    cin>>h;
    float L =6.28*r*h;
    cout<<"\n\n\n"<<endl;
    cout<<"The Lateral surface area Of The Cylinder is:"<<L<<"\n\n"<<endl;



    }
    float topsur(float r, float h){
    cout<<"Cylinder Top surface area formula (T = 3.14*r^2)\n";
    cout<<"r = radius , h = height \n";
    cout<<"Enter Cylinder radius:";
    cin>>r;
    cout<<"Enter Cylinder height:";
    cin>>h;
    float T =3.14*r*r;
    cout<<"\n\n\n"<<endl;
    cout<<"The Top surface area Of The Cylinder is:"<<T<<"\n\n"<<endl;
    }
    float bottomsur(float r, float h){
    cout<<"Cylinder Top surface area formula (B = 3.14*r^2)\n";
    cout<<"r = radius , h = height \n";
    cout<<"Enter Cylinder radius:";
    cin>>r;
    cout<<"Enter Cylinder height:";
    cin>>h;
    float B =3.14*r*r;
    cout<<"\n\n\n"<<endl;
    cout<<"The Top surface area Of The Cylinder is:"<<B<<"\n\n"<<endl;
    }
    float totalsur(float L, float T , float B){
    cout<<"Cylinder Top surface area formula (A = L + T + B)\n";
    cout<<"L = lateral surface area, T = top surface area , B = base surface area \n";
    cout<<"T=B=3.14*r^2 , L = 2*3.14*r*h\n";
    cout<<"Enter lateral surface area:";
    cin>>L;
    cout<<"Enter top surface area:";
    cin>>T;
    cout<<"Enter base surface area:";
    cin>>B;
    float A =L+T+B;
    cout<<"\n\n\n"<<endl;
    cout<<"The Top surface area Of The Cylinder is:"<<A<<"\n\n"<<endl;




    }




};
class Typeclass{

Circleop cirop;
triangleop triop;
rectangleop recop;
squareop sqop;
cubeop cuop;
cylinderop cylop;
public:

//main menu

void type(int n){

     cout<<"Choose Geometric form :"<<endl;
     cout<<"1.Circle\n";
     cout<<"2.Triangle\n";
     cout<<"3.Cube\n";
     cout<<"4.Rectangle\n";
     cout<<"5.Square\n";
     cout<<"6.Cylinder\n";
     cout<<"7.Leave\n";
     cout<<"please enter a number from above :";
     cin>>n;
     if(n==1){
        circle();
        }
else if(n==2){
    triangle();
}
else if(n==3){
    cube();
}
else if(n==4){
    rectangle();
}
else if(n==5){
    square();
}
else if(n==6){
    cylinder();
}
else if(n==7){
      cout<<"Farewell,We hope you're Happy to have tried our project (#14CE)"<<endl;
}
else{
    cout<<"Error number, choose another\n";
    type(0);
}
    }

//geometric

void circle(){

cout<<"You have chosen the circle: \n\n";
cout<<"Definition of circle ::\n";
cout<<"a circle is a shape consisting of all points in a plane that are at a given distance from a given point,\n"<<endl;
cout<<"he centre equivalently it is the curve traced out by a point that moves in a plane so that its distance from a given point is constant.\n"<<endl;
cout<<"The distance between any point of the circle and the centre is called the radius.\n"<<endl;
cout<<"Specifically, a circle is a simple closed curve that divides the plane into two regions: an interior and an exterior.\n"<<endl;
cout<<"A circle may also be defined as a special kind of ellipse in which the two foci are coincident and the eccentricity is 0\n"<<endl;
cout<<"or the two-dimensional shape enclosing the most area per unit perimeter squared, using calculus of variations."<<endl;
cout<<"Choose what you want to do next :\n";
//Operations of circle
int x;
cout<<"1.Calculate Area of circle\n";
cout<<"2.Calculate Circumference of circle\n";
cout<<"3.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
        int k;
    cirop.area(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        circle();
     }

}
else if(x==2){
    int k;
    cirop.circumference(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        circle();
     }
}
else if(x==3){
    type(0);
}
else{
    cout<<"Error , Choose another number\n";
    circle();
}

}
void triangle(){
cout<<"You have chosen the triangle: \n\n";
cout<<"Definition of triangle ::\n";
cout<<"A triangle is a polygon with three edges and three vertices. It is one of the basic shapes in geometry. A triangle with vertices A, B, and C\n\n";
cout<<"In Euclidean geometry, any three points, when non-collinear, determine a unique triangle and simultaneously, a unique plane (i.e. a two-dimensional Euclidean space).\n\n";
cout<<"n other words, there is only one plane that contains that triangle, and every triangle is contained in some plane.\n\n";
//Operations of triangle
int x;
cout<<"1.Calculate Area of Right-Angled triangle\n";
cout<<"2.Calculate Triangle perimeter (a,b,c)\n";
cout<<"3.Calculate Area of Equilateral Triangle\n";
cout<<"4.Triangle Graph\n";
cout<<"5.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
        int k;
    triop.area(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        triangle();
     }

}
else if(x==2){
    int k;
    triop.perimeter(1,1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        triangle();
     }
}
else if(x==3){
    int k;
    triop.area2(1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        triangle();
     }
}
else if(x==4){
    int k;
    triop.graph();
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        triangle();
     }
}
else if(x==5){
type(0);

}
else{
    cout<<"Error , Choose another number\n";
    triangle();
}
}
void rectangle(){
cout<<"You have chosen the rectangle: \n\n";
cout<<"Definition of Rectangle ::\n";
cout<<"In Euclidean plane geometry, a rectangle is a quadrilateral with four right angles.\n";
cout<<"It can also be defined as: an equiangular quadrilateral, since equiangular means that all of its angles are equal (360°/4 = 90°);\n";
cout<<"Choose what you want to do next :\n";
//Operations of circle
int x;
cout<<"1.Calculate Area of Rectangle\n";
cout<<"2.Calculate Perimeter  of Rectangle\n";
cout<<"3.Calculate diagonal of Rectangle\n";
cout<<"4.Rectangle Graph\n";
cout<<"5.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
    int k;
    recop.area(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        rectangle();
     }

}
else if(x==2){
        int k;
    recop.perimeter(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        rectangle();
     }
}
else if(x==3){
            int k;
    recop.diagonal(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        rectangle();
     }
}
else if(x==4){
            int k;
    recop.graph();
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        rectangle();
     }
}
else if(x==5){
    type(0);
}
else{
    cout<<"Error , Choose another number\n";
    rectangle();
}

}
void square(){
cout<<"You have chosen the square: \n\n";
cout<<"Definition of Square ::\n";
cout<<"In geometry, a square is a regular quadrilateral, \n which means that it has four equal sides and four equal angles (90-degree angles, or 100-gradian angles or right angles).\n\n";
cout<<"It can also be defined as a rectangle in which two adjacent sides have equal length.\n\n";
//Operations of triangle
int x;
cout<<"1.Calculate Area of Square\n";
cout<<"2.Calculate Square perimeter\n";
cout<<"3.Calculate Square diagonal\n";
cout<<"4.Square Graph\n";
cout<<"5.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
        int k;
    sqop.area(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        square();
     }

}
else if(x==2){
    int k;
    sqop.perimeter(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        square();
     }
}
else if(x==3){
    int k;
    sqop.diagonal(1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        square();
     }
}
else if(x==4){
        int k;
   sqop.graph();
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){

        square();
}
}
else if(x==5){
type(0);

}
else{
    cout<<"Error , Choose another number\n";
    square();
}
}
void cube(){
cout<<"You have chosen the Cube: \n\n";
cout<<"Definition of cube ::\n";
cout<<"In geometry, a cube[1] is a three-dimensional solid object bounded by six square faces, facets or sides, with three meeting at each vertex.\n\n";
cout<<"The cube is the only regular hexahedron and is one of the five Platonic solids. It has 6 faces, 12 edges, and 8 vertices.\n\n";
cout<<"The cube is also a square parallelepiped, an equilateral cuboid and a right rhombohedron.\n\n";
cout<<"It is a regular square prism in three orientations, and a trigonal trapezohedron in four orientations.\n\n";
cout<<"The cube is dual to the octahedron. It has cubical or octahedral symmetry.\n\n";
cout<<"The cube is the only convex polyhedron whose faces are all squares.\n\n";
//Operations of triangle
int x;
cout<<"1.Calculate Volume\n";
cout<<"2.Calculate Surface Area\n";
cout<<"3.Calculate Face diagonal\n";
cout<<"4.Calculate soild diagonal\n";
cout<<"5.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
        int k;
    cuop.volume(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cube();
     }

}
else if(x==2){
    int k;
    cuop.surfacearea(1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cube();
     }
}
else if(x==3){
    int k;
    cuop.facedia(1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cube();
     }
}
else if(x==4){
    int k;
    cuop.soilddia(1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cube();
     }
}
else if(x==5){
type(0);

}
else{
    cout<<"Error , Choose another number\n";
    cube();
}
}
void cylinder(){
cout<<"You have chosen the cylinder: \n\n";
cout<<"Definition of Cylinder  ::\n";
cout<<"A cylinder (roller, tumbler[1]) has traditionally been a three-dimensional solid, one of the most basic of curvilinear geometric shapes.\n\n";
cout<<"It is the idealized version of a solid physical tin can having lids on top and bottom.\n\n";
cout<<"This traditional view is still used in elementary treatments of geometry,\n\n";
cout<<"but the advanced mathematical viewpoint has shifted to the infinite curvilinear surface and this is how a cylinder is now defined in various modern branches of geometry and topology.\n\n";
cout<<"The shift in the basic meaning (solid versus surface) has created some ambiguity with terminology.\n\n";
cout<<"It is generally hoped that context makes the meaning clear.\n\n";
cout<<"Both points of view are typically presented and distinguished by referring to solid cylinders and cylindrical surfaces,\n\n";
cout<<"but in the literature the unadorned term cylinder could refer to either of these or to an even more specialized object, the right circular cylinder.\n\n";
//Operations of triangle
int x;
cout<<"1.Calculate Volume\n";
cout<<"2.Calculate the lateral surface area of a cylinder (just the curved outside)\n";
cout<<"3.Calculate the top surface area of a cylinder\n";
cout<<"4.Calculate the bottom surface area of a cylinder\n";
cout<<"5.Calculate Total surface area of a closed cylinder \n";
cout<<"6.Back\n";
cout<<"choose a number from above :";
cin>>x;
if(x==1){
        int k;
    cylop.volume(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cylinder();
     }

}
else if(x==2){
    int k;
    cylop.lsa(1,1);
    cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cylinder();
     }
}
else if(x==3){
    int k;
    cylop.topsur(1,1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cylinder();
     }
}
else if(x==4){
    int k;
    cylop.bottomsur(1,1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cylinder();
     }
}
else if(x==5){
    int k;
    cylop.totalsur(1,1,1);
     cout<<"1.Go Back(enter 1) : ";
    cin>>k;
     if(k ==1){
        cylinder();
     }
}

else if(x==6){
type(0);

}
else{
    cout<<"Error , Choose another number\n";
    cylinder();
}
}

};

int main()
{

Typeclass typobj;
string i;
cout<<"Welcome to Geometric forms Project"<<endl;
cout<<"#####Coded by Group #14 CE#####"<<endl;
cout<<"((Geometric form))"<<endl;
cout<<"Geometric forms are forms that can be constructed using geometry,\nsuch as squares, rectangles, circles, cones, cubes, and so on."<<endl;
cout<<"Geometric forms are commonly found in architecture, structural and civil engineering.\n";
cout<<"Would you like to continue(Yes/No)";
cin>>i;
if(i=="yes" || i=="Yes" || i=="YES" || i=="y" || i=="Y" ){
    typobj.type(0);

}
else if(i=="no" || i=="No" || i=="NO" || i=="n" || i=="N"){
cout<<"###Credits###\n";
cout<<"Participants : \n";
cout<<"Ihab Qutmera\n";
cout<<"Mohammad Herzallah\n";
cout<<"Bashar shaheen\n";
cout<<"Manar salahaldeen\n";
cout<<"Emtiaz illyan\n";
cout<<"Doaa thaher\n";
cout<<"Anton handal\n";
cout<<"Supervised by : Badie sartawi\n";
cout<<"Farewell,We hope you're Happy  trying our appliction (#14CE)"<<endl;
}
return 0;
}
