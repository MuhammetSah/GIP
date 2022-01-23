class MyRectangle
{
public:
    //Konstruktor
    MyRectangle(int x1 = 0, int y1 = 0, int x2 = 20, int y2 = 20);

    //vorgegeben
    void draw();
    bool does_not_collide_with(const MyRectangle&) const;

    //Getter
    int get_x1()  { return m_x1; }
    int get_y1()  { return m_y1; }
    int get_x2()  { return m_x2; }
    int get_y2()  { return m_y2; }

    //Setter
    void set_x1(int x1) { m_x1 = x1; }
    void set_y1(int y1) { m_y1 = y1; }
    void set_x2(int x2) { m_x2 = x2; }
    void set_y2(int y2) { m_y2 = y2; }

    //setze alle Atrribute gleichzeitig / 2nd Setter
    void set(int x1, int x2, int y1, int y2) {
        m_x1 = x1;
        m_y1 = y1;
        m_x2 = x2;
        m_y2 = y2;
    }

    //geschützt vor Zugang
private:
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
};