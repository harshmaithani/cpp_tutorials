#include <iostream>

class A_Class
{
    public:
        A_Class(){std::cout     <<      "A_Class created"       << std::endl;}
        ~A_Class(){std::cout    <<      "A_Class destroyed"     << std::endl;}

                      void function0() const {std::cout << "A_Class const function invoked" << std::endl;} 

                      void function1(){std::cout  <<  "A_Class function1 invoked"  << std::endl;}
              virtual void function2() {std::cout <<  "A_Class function2 invoked"  << std::endl;}
                const void function3(){std::cout  <<  "A_Class function3 invoked"  << std::endl;}
        virtual const void function4(){std::cout  <<  "A_Class function4 invoked"  << std::endl;}

                void function5(const A_Class&){std::cout    <<  "A_Class function5 invoked"  << std::endl;}                     //  function5 exists only in base class
        virtual void function6(const A_Class&){std::cout    <<  "A_Class function6 invoked"  << std::endl;}
        
        //void function7(const B_Class&){std::cout            <<  "A_Class function7 invoked"  << std::endl;}             //  Compiler error - can't find B_Class

        //        void function10(const A_Class& t_class){t_class.function1()}            // Compiler error - because of const
        void function10(const A_Class& t_class){t_class.function0();}            
        virtual void function12(const A_Class& t_class){t_class.function0();}
        //virtual void function13(const A_Class& t_class){t_class.function0();}
};

class B_Class : public A_Class
{
    public:
        B_Class(){std::cout         <<      "B_Class created"        << std::endl;}
        ~B_Class(){std::cout        <<      "B_Class destroyed"      << std::endl;}

              void function0() const {std::cout << "B_Class const function invoked" << std::endl;} 

              void function1()           {std::cout        <<  "B_Class function1 invoked"  << std::endl;}
              void function2() override  {std::cout        <<  "B_Class function2 invoked"  << std::endl;}
        const void function3()           {std::cout        <<  "B_Class function3 invoked"  << std::endl;}
        const void function4() override  {std::cout        <<  "B_Class function4 invoked"  << std::endl;}

        void function6(const A_Class&) override {std::cout <<  "B_Class function6 invoked"  << std::endl;}
        void function8(const B_Class&)          {std::cout <<  "B_Class function8 invoked"  << std::endl;}

        void function11(const A_Class& t_class)          {t_class.function0();}
        void function12(const A_Class& t_class) override {t_class.function0();}
        //void function13(const B_Class& t_class) override {t_class.function0();}     // Compiler error - because parameters are different 
};

int main()
{
    
    A_Class class1;                     // prints: A_Class created
    B_Class class2;                     // prints: A_Class created
                                        // prints: B_Class created
    /*
    class1.function1();              // prints: A_Class function1 invoked
    class1.function2();              // prints: A_Class function2 invoked
    class1.function3();              // prints: A_Class function3 invoked
    class1.function4();              // prints: A_Class function4 invoked

    class1.function5(class1);        // prints: A_Class function5 invoked
    class1.function6(class1);        // prints: A_Class function6 invoked
    class1.function5(class2);        // prints: A_Class function5 invoked
    class1.function6(class2);        // prints: A_Class function6 invoked
    
    class1.function10(class1);       // prints: A_Class const function invoked
    class1.function10(class2);       // prints: A_Class const function invoked 

    class1.function12(class1);      // prints: A_Class const function invoked
    class1.function12(class2);      // prints: A_Class const function invoked
    */

    /*                                   
    //class2.function1();             // prints: B_Class function1 invoked
    //class2.function2();             // prints: B_Class function2 invoked
    //class2.function3();             // prints: B_Class function3 invoked
    //class2.function4();             // prints: B_Class function4 invoked

                                    // Function5 exists only in base class
    class2.function5(class1);       // prints: A_Class function5 invoked
    class2.function5(class2);       // prints: A_Class function5 invoked

    class2.function6(class1);       // prints: B_Class function6 invoked
    class2.function6(class2);       // prints: B_Class function6 invoked

    //class2.function8(class1);       // Compiler error - no matching function
    class2.function8(class2);       // prints: B_Class function8 invoked

    class2.function10(class1);       // prints: A_Class const function invoked
    class2.function10(class2);       // prints: A_Class const function invoked

    class2.function12(class1);       // prints: A_Class const function invoked
    class2.function12(class2);       // prints: A_Class const function invoked
    */

    A_Class* class3{new B_Class};       // Base pointer to derived class
                                        // prints: A_Class created
                                        // prints: B_Class created

    /*
    class3->function1();                // prints: A_Class function1 invoked
    class3->function2();                // prints: B_Class function2 invoked
    class3->function3();                // prints: A_Class function3 invoked
    class3->function4();                // prints: B_Class function4 invoked

    class3->function5(class1);          // prints: A_Class function5 invoked
    class3->function5(class2);          // prints: A_Class function5 invoked

    class3->function6(class1);          // prints: B_Class function6 invoked
    class3->function6(class2);          // prints: B_Class function6 invoked

    // class3->function8(class1);          // compiler error
    // class3->function11(class1);         // compiler error
    
    class3->function12(class2);         // prints: A_Class const function invoked
    */
   
    // B_Class* class4{new A_Class};       // Not possible
    

}