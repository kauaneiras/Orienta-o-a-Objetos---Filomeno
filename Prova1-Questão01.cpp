#include <iostream>
using namespace std;
    struct Item
{
    string item_nome, produtor;
    float preco;
    int item_nro;
    void insereItem(string no, float pre, string pro, int nro)
    {
        item_nome = no;
        preco = pre;
        produtor = pro;
        item_nro = nro;
    }
};
void Imprime_Item(Item S)
{
    cout << S.item_nome << ", " << S.preco << ", " << S.produtor << ", " << S.item_nro << endl;
}
void Valor(Item S)
{
    float val;
    val = S.preco * S.item_nro;
    if (S.preco > 5)
    {
        cout << "Total = " << val << " reais";
    }
}
int main()
{
    Item P;
    P.insereItem("Chocolate", 7.5 , "Lacta", 5);
    Imprime_Item(P);
    Valor(P);

    Item Q;
    Q.insereItem("Suco de Laranja", 2 , "Vale", 5);
    Imprime_Item(Q);
    Valor(Q);
    return 0;
}
