#include<iostream>
using namespace std;

class InvoiceItem{
private:
    string id;
    string desc;
    int qty;
    double unitPrice;

public:
    InvoiceItem(string i, string d, int q, double u){
        id = i;
        desc = d;
        qty = q;
        unitPrice = u;
    }
    string getId(){
        return id;
    }
    string getDesc(){
        return desc;
    }
    int getQty(){
        return qty;
    }
    void setQty(int q){
        qty = q;
    }
    double getUnitPrice(){
        return unitPrice;
    }
    void setUnitPrice(double uni){
        unitPrice = uni;
    }
    double getTotal(){
        return unitPrice * qty;
    }
    string toString(){
        return id + " " + desc + " " + to_string(qty) + " " + to_string(unitPrice);
    }
};

int main(){
    InvoiceItem it("98U7", "123", 4, 5);
    cout << it.getId() << endl;
    cout << it.getDesc() << endl;
    cout << it.getQty() << endl;
    cout << it.getUnitPrice() << endl;
    cout << it.getTotal() << endl;
    cout << it.toString() << endl;

    return 0;
}
