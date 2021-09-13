template <typenameT>
class pila {
public:
    // Construeix una pila buida.
    pila() throw(error);

    //Tres grans: constructora per còpia, operador d'assignació i destructora.
    pila(const pila<T>& p) throw(error);
    pila<T>& operator=(const pila<T>& p) throw(error);
    ~pila() throw();

    //Afegeix un element a dalt de tot de la pila.
    void apilar(const T& x) throw(error);

    //Treu el primer element de la pila. Llança un error si la pila és buida.
    void desapilar() throw(error);

    //Obté l'element cim de la pila. Llança una excepció si la pila és buida.
    const T& cim() const throw(error);

    //Consulta si la pila és buida o no.
    bool es_buida() const throw(error);

    //// Altres operacions útils--------------------
    //Crea una nova pila amb el resultat d'apilar x sobre la pila actual.
    pila<T> operator&(const T& x) const throw(error);

    //Crea una nova pila amb la resta d'elements (els que estan per sota del cim).
    pila<T> resta() const throw(error);

    //Gestió d'errors.
    static const int PilaBuida = 300;
};
