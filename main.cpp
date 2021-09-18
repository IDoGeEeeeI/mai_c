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
    //деконструктор
    ~Long()=default;

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


    friend Long operator-(const Long &d1, const Long &d2)
    {
        if(d1.getFirst() < d2.getFirst() && d1.getSecond() < d2.getSecond()){
            return Long(d2.getFirst() - d1.getFirst(), d2.getSecond() - d1.getSecond());

        } else if(d1.getFirst() < d2.getFirst() && d1.getSecond() > d2.getSecond()){
            return Long(d2.getFirst() - d1.getFirst(), d1.getSecond() - d2.getSecond());

        } else if(d1.getFirst() > d2.getFirst() && d1.getSecond() < d2.getSecond()){
            return Long(d1.getFirst() - d2.getFirst(), d2.getSecond() - d1.getSecond());

        }else if(d1.getFirst() > d2.getFirst() && d1.getSecond() > d2.getSecond()){
            return Long(d1.getFirst() - d2.getFirst(), d1.getSecond() - d2.getSecond());

        }
        //return Long(d1.getFirst() - d2.getFirst(), d1.getSecond() - d2.getSecond());
    }

    friend Long operator+(const Long& d1, const Long& d2)
    {
        return Long(d1.getFirst()+d2.getFirst(), d1.getSecond() + d2.getSecond());
    }
//    friend Long operator-(const Long &d1, const Long &d2)
//    {
//        return Long(d1.getFirst() - d2.getFirst(), d1.getSecond() - d2.getSecond());
//    }
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
    friend std::istream& operator>>(std::istream& is, Long& p){
        is>>p.first>>p.second;
        return is;
    }
};
int main(){
string a="nonStop";
     while(true){
         cout<<"Введите значения для первого числа: "<<endl;
         Long me0ow1(0,0);//дефолтные значения(ниже расписано)
         cin>> me0ow1;
         cout<<"Введите значения для второго числа: "<<endl;
         Long me0ow2(0,0);//дефолтные значения
         cin>> me0ow2;
         cout<<"me0ow1= "<< me0ow1<<" me0ow2= "<<me0ow2<<endl;//вывод данных с которыми будудут производится рассчеты
            cout<<"сложение(Long) = ("<<me0ow1+me0ow2<<")"<<endl;
            cout<<"вычитание(Long) = ("<<me0ow1-me0ow2<<")"<<endl;
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

         cout<<"если хотите провести еще один тест, то напишите con (или ЛЮБОЕ СЛОВО)  , если нет, то stop "<<endl;
         cin>>a;
         if(a=="Stop" || a=="stop" || a=="STOP") break;
         else continue;
    }

////мои тесты(проверка работоспособности ввода и вывода)
//Long me0ow1(0,0);//дефолтные значения, которые не повлияют ни на что,
//// но это мой касталь(даже если реально будет объект с 0|0 то ничего не поменяется)
//// а если  не ввести какие либо значения, то вот они останутся нулями
//    cin>>me0ow1;
//    cout<<me0ow1;
}