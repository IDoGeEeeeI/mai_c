#include <iostream>
#include <string>


using namespace std;
class Long
{
protected:

    unsigned int first;
    unsigned int second;

public:
    Long(const unsigned int first, const unsigned int second)
    {
        this-> first = first;
        this-> second = second;
    }
    unsigned int getFirst()const
    {
        return first;
    }
    unsigned int getSecond()const
    {
        return second;
    }
    void setFirst(unsigned int first)
    {
        this->first=first;
    }
    void setSecond(unsigned int second)
    {
        this->second=second;
    }


    friend Long operator+(const Long& d1, const Long& d2)
    {
        return Long(d1.getFirst()+d2.getFirst(), d1.getSecond() + d2.getSecond());
    }
    friend Long operator-(const Long &d1, const Long &d2)
    {
        return Long(d1.getFirst() - d2.getFirst(), d1.getSecond() - d2.getSecond());
    }
    friend Long operator*(const Long &d1, const Long &d2)
    {
        return Long(d1.getFirst() * d2.getFirst(), d1.getSecond() * d2.getSecond());
    }
    friend Long operator/(const Long &d1, const Long &d2)
    {
        return Long(d1.getFirst() / d2.getFirst(), d1.getSecond() / d2.getSecond());
    }
    friend Long operator%(const Long &d1, const Long &d2)
    {
        return Long(d1.getFirst() % d2.getFirst(), d1.getSecond() % d2.getSecond());
    }


    friend bool operator<(const Long &d1, const Long &d2)
    {
        return (d1.getFirst() < d2.getFirst() && d1.getSecond() < d2.getSecond()) || (d1.getFirst() < d2.getFirst() && d1.getSecond() > d2.getSecond()) || (d1.getFirst() < d2.getFirst() && d1.getSecond() == d2.getSecond()) || (d1.getFirst() == d2.getFirst() && d1.getSecond() < d2.getSecond());
    }
    friend bool operator>(const Long &d1, const Long &d2)
    {
        return (d1.getFirst() > d2.getFirst() && d1.getSecond() < d2.getSecond()) || (d1.getFirst() > d2.getFirst() && d1.getSecond() > d2.getSecond()) || (d1.getFirst() > d2.getFirst() && d1.getSecond() == d2.getSecond()) || (d1.getFirst() == d2.getFirst() && d1.getSecond() > d2.getSecond());
    }
    friend bool operator==(const Long &d1, const Long &d2)
    {
        return d1.getFirst() == d2.getFirst(), d1.getSecond() == d2.getSecond();
    }

    friend std::ostream& operator<<(std::ostream& os, const Long& p){
        return os<<p.getFirst()<<"|"<<p.getSecond();
    }
};






int main(){

    Long me0ow1(1,9);
    Long me0ow2(1,9);

    cout<<"me0ow1 = ("<<me0ow1<<")"<<endl;
    cout<<"me0ow2 = ("<<me0ow2<<")"<<endl;
    cout<<"сложение(Long) = ("<<me0ow1+me0ow2<<")"<<endl;
    if(me0ow2<me0ow1 || me0ow2==me0ow1)
    {
        cout<<"вычитание(Long) = ("<<me0ow1-me0ow2<<")"<<endl;
    }
    else
    {
        cout<< "ошибка при вычитании (получили отрицательное число) "<<endl;
    }
    // cout<<"вычитание(Long) = ("<<me0ow1-me0ow2<<")"<<endl;
    cout<<"умножение(Long) = ("<<me0ow1*me0ow2<<")"<<endl;
    cout<<"деление(Long) = ("<<me0ow1/me0ow2<<")"<<endl;
    cout<<"остаток от деления(Long) = ("<<me0ow1%me0ow2<<")"<<endl;

    if (me0ow1>me0ow2){
        cout<<"сравнение(Long) = ("<<me0ow1 << ">" << me0ow2 << ")"<< endl;
    }
    if (me0ow1<me0ow2){
        cout<<"сравнение(Long) = ("<<me0ow1 << "<" << me0ow2 << ")"<< endl;
    }
    if (me0ow1==me0ow2){
        cout<<"сравнение(Long) = ("<<me0ow1 << "==" << me0ow2 << ")"<< endl;
    }

}
