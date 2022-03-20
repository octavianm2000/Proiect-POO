//Cononov Octavian 321AC
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Letter{//clasa de baza,cu atributele necesare pentru fiecare copil.
    public:
Letter()
{
    cout<<"Ati adaugat copii"<<endl;
}~Letter();

string name;
string surname;
int age;
string object[10];
string city;
string colour;

  

};

Letter::~Letter()
{
    cout<<endl<<"Destructor is working";
};


class pret_Cadouri{//clasa de definire a inventarului
 public:
 int price;
 string obj;
};

class Status:public Letter{//clasa ce sugereaza daca un copil este cuminte sau nu
    private:
bool kindness;
    public:
void setKindness(bool kindness){
    this->kindness=kindness;
}
bool getKindness(){
    return this->kindness;
} 
friend class Elfs;
};

class Elfs:public Letter,pret_Cadouri{
public:

int  Kind(bool kindness){//functie ce returneaza valoarea fiecarui buget in functie de faptul ca un copil este cuminte sau nu
  if (kindness==1)
  {
      return 100;
  }
  else
  {
     return 10;
  }
  
}
friend class Trolls;
};


class Trolls{
public:
virtual void message()=0;
void ambalaje_cadouri(string color,int &albastre,int &roz){

    if(color=="Blue"){
        albastre++;
    }
    if(color=="Pink"){
        roz++;
    }

}
float carbuni(int &nr_carbuni,bool kindness){
if(kindness==0){
 nr_carbuni++;
}
return nr_carbuni;
}

float carbuni(int &nr_carbuni){
    return 0.5*nr_carbuni;
}
friend class Doamna_Craciun;
};



template <typename T>//template de returnare a minimului intre doua numere/obiecte etc
T min(T &x,T &y)
{
    if(x<y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}

class Mos_Craciun{
public:
void drum(string oras[])//functia de calcul a drumului cel mai scurt
{
int z=0,suma_km[100],minim,i,j,k,l,nr=1,aux1,aux2,aux3;
string check,lista_orase[100],ordine;

for(i=2;i<=5;i++)
{check=oras[1]+oras[i];
    if(check==oras[1]+oras[2])
    {
        z=884;
        aux1=z;
        
    }
    if(check==oras[1]+oras[3])
    {
        z=1206;
        aux1=z;
    }
    if(check==oras[1]+oras[4])
    {
        z=1385;
        aux1=z;
    }
    if(check==oras[1]+oras[5])
    {
        z=1348;
        aux1=z;
    }
    for(j=2;j<=5;j++)
    { z=aux1;
        if(j!=i)
        { check=oras[i]+oras[j];
         
          if(check==oras[2]+oras[3]||check==oras[3]+oras[2])
          {
              z=z+397;
              aux2=z;
          }
          if(check==oras[2]+oras[4]||check==oras[4]+oras[2])
          {
              z=z+513;
              aux2=z;
          }
         if(check==oras[2]+oras[5]||check==oras[5]+oras[2])
          {
              z=z+485;
              aux2=z;
          }
         if(check==oras[3]+oras[4]||check==oras[4]+oras[3])
          {
              z=z+241;
              aux2=z;
          }
         if(check==oras[3]+oras[5]||check==oras[5]+oras[3])
          {
              z=z+189;
              aux2=z;
          }
         if(check==oras[4]+oras[5]||check==oras[5]+oras[4])
          {
              z=z+53;
              aux2=z;
          }
        }
          for(k=2;k<=5;k++)
          {z=aux2;
              if((k!=j) && (k!=i) && (i!=j) )
              {check=oras[j]+oras[k];
             
          if(check==oras[2]+oras[3]||check==oras[3]+oras[2])
          {
              z=z+397;
              aux3=z;
          }
          if(check==oras[2]+oras[4]||check==oras[4]+oras[2])
          {
              z=z+513;
              aux3=z;
          }
         if(check==oras[2]+oras[5]||check==oras[5]+oras[2])
          {
              z=z+485;
              aux3=z;
          }
         if(check==oras[3]+oras[4]||check==oras[4]+oras[3])
          {
              z=z+241;
              aux3=z;
          }
         if(check==oras[3]+oras[5]||check==oras[5]+oras[3])
          {
              z=z+189;
              aux3=z;
          }
         if(check==oras[4]+oras[5]||check==oras[5]+oras[4])
          {
              z=z+53;
              aux3=z;
          }


              }
          
         for(l=2;l<=5;l++)
         {z=aux3;
             if((l!=k) && (l!=j) &&(l!=i) && (i!=j) &&(k!=j) &&(k!=i))
             {check=oras[k]+oras[l];
          if(check==oras[2]+oras[3]||check==oras[3]+oras[2])
          {
              z=z+397;
          }
          if(check==oras[2]+oras[4]||check==oras[4]+oras[2])
          {
              z=z+513;
          }
         if(check==oras[2]+oras[5]||check==oras[5]+oras[2])
          {
              z=z+485;
          }
         if(check==oras[3]+oras[4]||check==oras[4]+oras[3])
          {
              z=z+241;
          }
         if(check==oras[3]+oras[5]||check==oras[5]+oras[3])
          {
              z=z+189;
          }
         if(check==oras[4]+oras[5]||check==oras[5]+oras[4])
          {
              z=z+53;
          }
         suma_km[nr]=z;
         lista_orase[nr]=oras[1]+oras[i]+oras[j]+oras[k]+oras[l];
         nr++; 
             }

         }

          }
    }

}

minim=suma_km[1];
ordine=lista_orase[1];
for(i=2;i<nr;i++)//gaseste drumul cel mai scurt din cele posibile
{ 
    if(min<int>(minim,suma_km[i])==suma_km[i])
    {
        minim=suma_km[i];
        ordine=lista_orase[i];
    }
    
}
cout<<"Cea mai mica distanta a drumului este:"<<minim<<endl;
cout<<"Lista oraselor in ordine:";
for(i=0;i<ordine.length();i++)//afiseaza drumul(orasele prin care trece)
{ if(int(ordine[i])>64 && int(ordine[i])<91 && i!=0)
    cout<<" "<<ordine[i];                                   
  else
  {
      cout<<ordine[i];
  }
  
}



}
};

class Doamna_Craciun:public Trolls,public Mos_Craciun{
    public:
void message(){
    cout<<"Bugetul extra este in valoare de:";
}
float buget_extra(int tot_acadele,float tot_carbuni){
 return tot_acadele+tot_carbuni;
}



};


int main(){
Letter copii[10];
pret_Cadouri inventar[10];
Status carac_cumintenie[10];
Doamna_Craciun surplus;
Mos_Craciun way;
Trolls *pachete;
Elfs info[10];
int buget[6],i,j,k,nr[10],verif_buget=0,nr_acadele[10],OK=0,a=0,nr_presents[10],total_acadele=0,ambalaje_blue=0,ambalaje_pink=0
,buget_extra=0,nr_carbuni,carbuni;
string present[10][10],city[10];
string err;
inventar[1].price=25;
inventar[2].price=50;
inventar[3].price=30;
inventar[4].price=25;
inventar[5].price=30;
inventar[6].price=20;
inventar[7].price=6;
inventar[8].price=10;
inventar[9].price=40;
inventar[1].obj="Teddy_bear";                      //cadourile existente in depozit si preturile lor aferente
inventar[2].obj="Bumper_cars";
inventar[3].obj="Dolls";
inventar[4].obj="Cooking_set";
inventar[5].obj="Lego";
inventar[6].obj="Puzzle";
inventar[7].obj="Coloring_books";
inventar[8].obj="Chocolate";
inventar[9].obj="Monopoly";
copii[1].name="Stanca";         
copii[1].surname="Denis";
copii[1].age=7;
copii[1].city="Stockholm";
copii[1].object[1]="Bumper_cars";
copii[1].object[2]="Monopoly";
copii[1].object[3]="Lego";
copii[1].object[4]="Coloring_books";
copii[1].colour="Blue";
nr[1]=4;
carac_cumintenie[1].setKindness(1);
copii[2].name="Constantin";
copii[2].surname="Luca";
copii[2].age=8;
copii[2].city="Malmo";
copii[2].object[1]="Monopoly";
copii[2].object[2]="Lego";
copii[2].object[3]="Bumper_cars";
copii[2].object[4]="Chocolate";
copii[2].colour="Blue";
nr[2]=4;
carac_cumintenie[2].setKindness(0);
copii[3].name="Popescu";
copii[3].surname="Diana";
copii[3].age=6;
copii[3].city="Goteborg";
copii[3].object[1]="Dolls";
copii[3].object[2]="Cooking_set";
copii[3].object[3]="Bumper_cars";
copii[3].object[4]="Puzzle";
copii[3].colour="Pink";
nr[3]=4;
carac_cumintenie[3].setKindness(0);
copii[4].name="Voican";
copii[4].surname="Andrei";
copii[4].age=4;
copii[4].city="Helsingborg";
copii[4].object[1]="Bike";
copii[4].object[2]="Bumper_cars";
copii[4].object[3]="Puzzle";
copii[4].colour="Blue";
nr[4]=3;
carac_cumintenie[4].setKindness(1);
copii[5].name="Florescu";
copii[5].surname="Mara";
copii[5].age=5;
copii[5].city="Stockholm";
copii[5].object[1]="Monopoly";
copii[5].object[2]="Lego";
copii[5].object[3]="Bumper_cars";
copii[5].object[4]="Chocolate";
copii[5].colour="Pink";
nr[5]=4;
carac_cumintenie[5].setKindness(0);

for(i=1;i<=5;i++)
{
  buget[i]=info[i].Kind(carac_cumintenie[i].getKindness());
}





for(i=1;i<=5;i++)
{ a=0;
  nr_presents[i]=0;
  if(nr[i]!=0)
  {
    for(j=1;j<=nr[i];j++)
    {for(k=1;k<=9;k++)
        {if(inventar[k].obj==copii[i].object[j])//conditie de verificare a existentei obiectului in inventar
        {
            if(verif_buget+inventar[k].price<=buget[i])//verifica daca obiectul se incadreaza in buget 
            {   a++;
                verif_buget=verif_buget+inventar[k].price;
                OK=1;
                present[i][a]=copii[i].object[j];
                nr_presents[i]++;

            }
        }}
      if(OK==0)
      {
          cout<<"Nu exista "<<copii[i].object[j]<<" pe lista";
      }
        
    }
    
    
    if(min<int>(buget[i],verif_buget))
    {if(verif_buget!=0)
        {nr_acadele[i]=buget[i]-verif_buget;
        cout<<"Copilul cu numarul "<<i<<" va primi urmatoarele cadouri:"<<endl<<nr_acadele[i]<<" acadele."<<endl;
 for(j=1;j<=nr_presents[i];j++)
   {
    cout<<present[i][j]<<endl;//afiseaza cadourile fiecarui copil
   }
        }

     
    }

     else//afiseaza cadourile 
     {
         if(buget[i]==10)
         {
             cout<<"Copilul cu numarul "<<i<<" va primi un cadou default(rau):"<<inventar[8].obj<<endl;
             nr_acadele[i]=0;
         }
         else if(buget[i]==100)
         {
             cout<<"Copilul cu numarul "<<i<<"va primi un cadou default(cuminte):"<<inventar[9].obj<<","<<inventar[5].obj
             <<","<<inventar[6].obj<<","<<inventar[8].obj<<"."<<endl;
             nr_acadele[i]=0;
         }
         
     }
  }
  else
  {
      try{
          throw verif_buget;
      }
      catch(int verif_buget){
          cout<<"Se va acorda un cadou de default pentru copilul "<<i<<endl;
      }
  }
  verif_buget=0;
  
}



for(i=1;i<=5;i++)
{
    carbuni=+pachete[i].carbuni(nr_carbuni,carac_cumintenie[i].getKindness());
}





for(i=1;i<=5;i++)
 {total_acadele=total_acadele+nr_acadele[i];
 
 }
surplus.message();
cout<<surplus.buget_extra(total_acadele,pachete[6].carbuni(nr_carbuni)) <<"$"<<endl;





for(i=1;i<=5;i++)
{
pachete[i].ambalaje_cadouri(copii[i].colour,ambalaje_blue,ambalaje_pink);

}
cout<<"Trolii vor folosi "<<ambalaje_blue<<" ambalaje albastre si "<<ambalaje_pink<<" ambalaje roz."<<endl;


/*Rovaniemi-Stockholm=884km  
  Rovaniemi-Malmo=1385km  
  Rovaniemi-Goteborg=1206km 
  Rovaniemi-Helsingborg=1348km 
  Helsingborg-Malmo=53km 
  Helsingborg-Stockholm=485km 
  Helsingborg-Goteborg=189km 
  Malmo-Goteborg=241km 
  Malmo-Stockholm=513km 
  Stockholm-Goteborg=397km 
*/
city[1]="Rovaniemi";
city[2]=copii[5].city;
city[3]=copii[3].city;
city[4]=copii[2].city;
city[5]=copii[4].city;
surplus.drum(city);

}
