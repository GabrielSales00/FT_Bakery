/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"

/* DANGER: A LOT OF GLOBAL VARIABLES !!! (OBJECTS & STRUCTURES) */

vector<Comida *> myMainList;

=======
MyBooleanClass * verboseMode       = NULL;
MyBooleanClass * shortMessageMode  = NULL;

vector<Food *> myMainList;

int main(int argc, char* argv[])
   {
   verifyArguments(argc, argv);
   myMainList.clear();
   Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
   process();
   Information::bye(shortMessageMode->getStatus());
   clearAll();
   };

class MyProgram {
private:
    MyBooleanClass* verboseMode = NULL;
    MyBooleanClass* shortMessageMode = NULL;

   void process()
      {
      vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
      Menu menu("Main Menu", opcoes);
      int escolha = -1;
      
      while(escolha)
         {
         escolha = menu.getEscolha();
   
         switch(escolha)
            {
      case 1: { listItems();    }; break;
      case 2: { insertItems();  }; break;
            };
         };
      };

   void clearAll()   // está errada ! corrigir !!!!
      {
      myMainList.clear();

void clearAll()   // está errada ! corrigir !!!!
   {
   myMainList.clear();

   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      delete (*scan);
      *scan - NULL;
      scan++;
      };


      vector<Comida *>::iterator scan = myMainList.begin();
      

      while(scan != myMainList.end())
         {
         delete (*scan);
         *scan = NULL;
         scan++;
         };

      delete verboseMode;
      delete shortMessageMode;
      verboseMode = NULL;
      shortMessageMode = NULL;

   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
      total +=  (*scan)->getValor();
      scan++;

      };

   void listItems()
      {
      double total = 0.00;
         
      cout << "------------------------------\nItems in Database:\n------------------------------\n";
      vector<Comida *>::iterator scan = myMainList.begin();
      
      while(scan != myMainList.end())
         {

         cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
         total +=  (*scan)->getValor();
         scan++;

 	 case 1: { insertBread();       }; break;
 	 case 2: { insertCheese();      }; break;
 	 case 3: { insertCottageCheese();}; break;
 	 case 4: { insertCracker();     }; break;
 	 case 5: { insertFilledWafer(); }; break;
 	 case 6: { insertHam();         }; break;
 	 case 7: { insertMortadella();  }; break;

         };
      cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
      };


   void insertItems()
      {
      cout << "------------------------------\nInset New Items:\n------------------------------\n";
   
      Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella" });
      int escolha = -1;
      
      while(escolha)
         {
         escolha = menu.getEscolha();

void insertBread()
   {
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
   };
   
void insertCracker()
   {
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);
   
         switch(escolha)
            {
      case 1: { insertBread();       }; break;
      case 2: {                      }; break;
      case 3: {                      }; break;
      case 4: { insertCracker();     }; break;
      case 5: { insertFilledWafer(); }; break;
      case 6: {                      }; break;
      case 7: {                      }; break;
            };
         };
      };


   void insertBread()
      {
      Pao * bread;
      string buffer;
      string type;
      float  weight;
      double cost;

      cout << "------------------------------\nInsert Bread:\n------------------------------\n";
      cout << "Type ......: "; getline(cin, buffer); type   = buffer;
      cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
      cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
      cin.clear();
      
      bread = new Pao(type, weight,cost);
      myMainList.insert(myMainList.end(), bread);
      
      cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
      };
      
   void insertCracker()
      {
      Bolacha * cracker;
      string buffer;
      string type;
      int    amount;
      double cost;

      cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
      cout << "Type ......: "; getline(cin, buffer); type   = buffer;
      cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
      cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
      cin.clear();
      
      cracker = new Bolacha(type, amount,cost);
      myMainList.insert(myMainList.end(), cracker);
      
      cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;   
      };

   void insertCheese()
   {
   Cheese * cheese;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cheese = new Cheese(type, amount,cost);
   myMainList.insert(myMainList.end(), cheese);
   
   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;   
   };

   void insertCottageCheese()
   {
   CottageCheese * cottage_cheese;
   string buffer;
   string type;
   string brand;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   cottage_cheese = new CottageCheese(type, brand, weight,cost);
   myMainList.insert(myMainList.end(), cottage_cheese);

   cout << endl << cottage_cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottage_cheese->getValor() << endl; 
   };

void insertHam()
  {
   Ham * ham;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   ham = new Ham(type, weight,cost);
   myMainList.insert(myMainList.end(), ham);

   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
  };

  void insertMortadella()
  {
   Mortadella * mortadella;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   mortadella = new Mortadella(type, weight,cost);
   myMainList.insert(myMainList.end(), mortadella);

   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;
  };

void insertFilledWafer()
   {
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type); 
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
   };
  
void verifyArguments(int argc, char* argv[])
   {
   if(verboseMode)                     { delete verboseMode;         }; 
   if(shortMessageMode)                { delete shortMessageMode;    };  


   void insertFilledWafer()
      {
      BolachaRecheada * filledWafer;
      string buffer;
      string type;
      string filling;
      int    amount;
      double cost;

      cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
      cout << "Type ......: "; getline(cin, type); 
      cout << "Filling ...: "; getline(cin, filling);
      cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
      cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
      cin.clear();
      
      filledWafer = new BolachaRecheada(type, filling, amount,cost);
      myMainList.insert(myMainList.end(), filledWafer);
      
      cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
      };
   
   void verifyArguments(int argc, char* argv[])
      {
      if (verboseMode) { delete verboseMode; }
      if (shortMessageMode) { delete shortMessageMode; }

      verboseMode = NULL;
      shortMessageMode = NULL;

      for (int count = 1; count < argc; count++)
      {
         if (string(argv[count]) == "-v") { setVerboseMode(new MyBooleanClass(true)); }
         if (string(argv[count]) == "-s") { setShortMessageMode(new MyBooleanClass(true)); }
      }

      if (!verboseMode) { setVerboseMode(new MyBooleanClass()); }  // default is false
      if (!shortMessageMode) { setShortMessageMode(new MyBooleanClass()); }  // default is false
      }



public:

    void setVerboseMode(MyBooleanClass* mode) {
        verboseMode = mode;
    }

    MyBooleanClass* getVerboseMode() {
        return verboseMode;
    }

    void setShortMessageMode(MyBooleanClass* mode) {
        shortMessageMode = mode;
    }

    MyBooleanClass* getShortMessageMode() {
        return shortMessageMode;
    }
};

/* fim de arquivo */
