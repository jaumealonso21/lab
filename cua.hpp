template <typename T>
class cua {
public:
    //Construeix una cua buida.
    cua() throw(error);

    //Tres grans: constructora per còpia, operador d'assignació i destructora.
    cua(const cua<T>& c) throw(error);
    cua<T>& operator=(const cua<T>& c) throw(error);
    ~cua() throw();

    //Afegeix un element al final de la cua.
    void encuar(const T& x) throw(error);

    //Treu el primer element de la cua. Llança un error si la cua és buida.
    void desencuar() throw(error);
};
