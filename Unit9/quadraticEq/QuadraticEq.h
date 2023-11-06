class QuadraticEq
{
    private:
        double a;
        double b;
        double c;

    public:
       QuadraticEq(){};
       QuadraticEq(double a, double b, double c);
       ~QuadraticEq(){};
       void set_a(double a_value);
       void set_b(double b_value);
       void set_c(double c_value);
       double get_a();
       double get_b();
       double get_c();
       void find_root(double &sol1, double &sol2);
};