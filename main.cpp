#include <iostream>
using namespace std;

class IPizza {
public:
    virtual ~IPizza() = default;

    virtual void bake() = 0;

    virtual void prepare() = 0;

    virtual void cut() = 0;
};

class CheesePizza : public IPizza {
public:
    void bake() override {
        cout << "Cheese pizza bake" << endl;
    };

    void prepare() override {
        cout << "Cheese pizza prepare" << endl;
    };

    void cut() override {
        cout << "Cheese pizza cut" << endl;
    };
};

class VeggiPizza : public IPizza {
public:
    void bake() override {
        cout << "Veggi pizza bake" << endl;;
    };

    void prepare() override {
        cout << "Veggi pizza prepare" << endl;
    };

    void cut() override {
        cout << "Veggi pizza cut" << endl;
    };
};

class PizzaStore {
private:
    virtual IPizza *createPizza(string type) = 0;

public:
    virtual ~PizzaStore() = default;

    IPizza *orderPizza(string type) {
        IPizza *pizza = createPizza(type);

        pizza->bake();
        pizza->prepare();
        pizza->cut();

        return pizza;
    }
};

class AnkaraPizzaStore : public PizzaStore {
private:
    IPizza *createPizza(string type) override {
        if (type == "cheese")
            return new CheesePizza();
        else if (type == "veggi")
            return new VeggiPizza();
        else
            throw invalid_argument("error");
    };
};

int main() {
    AnkaraPizzaStore ankara_pizza_store;
    ankara_pizza_store.orderPizza("cheese");
    ankara_pizza_store.orderPizza("veggi");
    return 0;
}
