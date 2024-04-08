Day 4 Class vs. Instance


class Person{
    public:
        int age;
        Person(int initialAge);
        // {
        //     if (initialAge < 0) {
           
        //         cout << "Age is not valid, setting age to 0" << endl;
        //         Person temp;
        //         temp.age = 0;
        //         return temp;
        //     }
        //     else{
        //         Person temp;
        //         temp.age = initialAge;
        //         return temp;
        //     }
        // };
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
       if (initialAge < 0) {
           
           cout << "Age is not valid, setting age to 0." << endl;
           age = 0;
           return;
       }
       else{
           age = initialAge;
           return;
       }
       

    }

    void Person::amIOld(){
        if (age < 13) cout << "You are young.\n";
        else if (age >= 13 && age < 18){
            cout <<"You are a teenager.\n";
        }
        else cout << "You are old.\n";
        return;
    }

    void Person::yearPasses(){
        age++;
        return;
    }

