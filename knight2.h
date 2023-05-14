#ifndef __KNIGHT2_H__
#define __KNIGHT2_H__

#include "main.h"



// #define DEBUG

//khai báo chỗ class BaseKnight
class BaseKnight;
class BaseItem;
class BaseBag;
class Armyknights;
class Events;
class KnightAdventure;


// làm thêm phần dùng gil hồi máu



enum ItemType {antidotee=0,PhoenixI,PhoenixII,PhoenixIII,PhoenixIV}; // enum là khai báo định danh 


class node{
private:
ItemType itemType;
node* next;

public:

void setitemtype(ItemType x)
{
    itemType=x;
}
void setNext(node* a)
{
    next=a;
}
ItemType getItemType()
{
    return itemType;
}

node* getNext(){return next;}

};

class BaseBag {
protected:
BaseKnight* knight;
node* head;
int capacity;
int item_in_bag;

public:
    node * createNode(ItemType vatpham)
{
    node* mynode=new node();
    mynode->setitemtype(vatpham);
    mynode->setNext(nullptr);
    return mynode;
}

    BaseBag(BaseKnight*& knightx, int phoenixdownIin,int antidotein );
    BaseBag()
    {
        knight=nullptr;
        head=nullptr;
        capacity=0;
        item_in_bag=0;
    }
    virtual bool insertFirst(BaseItem * item); // virtual là hàm ảo, phương thức của base class có thể ghi đè ở lớp con của nó(derived)
    virtual BaseItem * get(ItemType itemType);
     string toString() const;

    void remove(int index);
    void removeitem(ItemType item);
    void dungthuoc();

};


class PaladinBag   : public BaseBag{
    public:
    PaladinBag(BaseKnight* knightx, int phoenixdownIin,int antidotein ):BaseBag(knightx,phoenixdownIin,antidotein)
    {
        this->capacity=2000;
    }

    bool insertFirst(BaseItem*Item);

    
};
class LancelotBag  : public BaseBag{
    public:
    LancelotBag(BaseKnight* knightx, int phoenixdownIin,int antidotein ):BaseBag(knightx,phoenixdownIin,antidotein)
    {
        this->capacity=16;
    }
    bool insertFirst(BaseItem*Item);
};
class DragonBag    : public BaseBag{
    public:
    DragonBag(BaseKnight* knightx, int phoenixdownIin );
    bool insertFirst(BaseItem*Item);
};
class NormalBag    : public BaseBag{
    public:
    NormalBag(BaseKnight* knightx, int phoenixdownIin,int antidotein ):BaseBag(knightx,phoenixdownIin,antidotein)
    {
        this->capacity=19;
    }
    bool insertFirst(BaseItem*Item);
};

enum TypeOpponent {Torn=1,Queen,Nina,Durian,Omega,Had,nor};

class BaseOpponent
{
protected:
TypeOpponent typeoppo;
int levelo;
int baseDame;
int gil_receive;
public:
BaseOpponent(){}
BaseOpponent(int i,int eventid)
{   typeoppo=nor;
    levelo = (i + eventid)%10 + 1;
    baseDame=0;
    gil_receive=0;
}
int getlevelo() {return levelo;}
int getgil(){return gil_receive;}
int getbaseDame(){return baseDame;}
TypeOpponent getTypeOpponent(){return typeoppo;}

};

class MadBear:public BaseOpponent{


public:
    MadBear(int i,int eventid): BaseOpponent(i, eventid)
   {
    typeoppo=nor;
    levelo = (i + eventid)%10 + 1;
    baseDame=10;
    gil_receive=100;
    }


};
class Bandit:public BaseOpponent{


public:
    Bandit(int i,int eventid): BaseOpponent(i, eventid)
    {
    typeoppo=nor;
    levelo = (i + eventid)%10 + 1;
    baseDame=15;
    gil_receive=150;
    }
};
class LordLupin:public BaseOpponent{

public:
    LordLupin(int i,int eventid): BaseOpponent(i, eventid)
    {
    typeoppo=nor;        
    levelo = (i + eventid)%10 + 1;
    baseDame=45;
    gil_receive=450;
    }
};
class Elf:public BaseOpponent{

public:
    Elf(int i,int eventid): BaseOpponent(i, eventid){
    typeoppo=nor;
    levelo = (i + eventid)%10 + 1;
    baseDame=75;
    gil_receive=750;
    }
};
class Troll:public BaseOpponent{

public:
    Troll(int i,int eventid): BaseOpponent(i, eventid){
    typeoppo=nor;
    levelo = (i + eventid)%10 + 1;
    baseDame=95;
    gil_receive=800;
    }
};
class Tornbery:public BaseOpponent{

public:

Tornbery(int i,int eventid):BaseOpponent(i, eventid){
    typeoppo=Torn;
}


};
class QueenOfCards:public BaseOpponent{



public:
QueenOfCards(int i,int eventid):BaseOpponent(i, eventid){
    typeoppo=Queen;
}

};
class NinaDeRings:public BaseOpponent{


public:
    NinaDeRings(){
        typeoppo=Nina;
        levelo=0;
        baseDame=0;
        gil_receive=0;

    }

    
};
class DurianGarden:public BaseOpponent{



public:
    DurianGarden()
    {   
        typeoppo=Durian;
        levelo=0;
        baseDame=0;
        gil_receive=0;  
    }
};
class OmegaWeapon:public BaseOpponent{

public:
OmegaWeapon()
    {   
        typeoppo=Omega;
        levelo=0;
        baseDame=0;
        gil_receive=0;  
    }

};
class Hades:public BaseOpponent{

public:
    Hades()
    {   
        typeoppo=Had;
        levelo=0;
        baseDame=0;
        gil_receive=0;  
    }
};


enum KnightType { PALADIN = 0, LANCELOT, DRAGON, NORMAL };


class BaseKnight {
protected:
    int id;
    int hp;    
    int maxhp;  
    int level;
    int gil;  //gil là tiền
    int antidote;
    bool poison; // trúng độc
    BaseBag * bag;
    KnightType knightType;

public:
    // hp
    int gethp(){return hp;}
    void sethp(int hp){this->hp=hp;}
    // maxhp
    int getmaxhp(){return maxhp;}
    //level
    int getlevel(){return level;}
    void setlevel(int level)
    {
        this->level=level;
        if(this->level>10) this->level=10;
    }

    // gil
    int getgil(){return gil;}
    void setgil(int gil){this->gil=gil;}
    
    // antidote
    int getAntidote(){return antidote;}
    void setAntidote(int antidote ){this->antidote=antidote;}

    // Poison
    bool getPoison(){return poison;} 
    void setPoison(bool poison){ this->poison=poison;}
        
    KnightType getKnightType() {return knightType;}

    static BaseKnight * create(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI);  // static có thể gọi mà không cần tạo ra đối tượng
    
    
    string toString() const;

    BaseKnight(int id,int maxhp, int level,int gil,int antidote);

    BaseBag* getBag(){return bag;}
    void setBag(BaseBag * bag){this->bag=bag;}

    bool nhatthuoc(ItemType phoenixType);
};

class PaladinKnight:public BaseKnight {
public:
 PaladinKnight(int id, int maxhp,int level,int gil,int antidote,int phoenixdownI);

};
class LancelotKnight:public BaseKnight {
public:
 LancelotKnight(int id, int maxhp,int level,int gil,int antidote,int phoenixdownI);

};
class DragonKnight:public BaseKnight {
public:
 
 DragonKnight(int id, int maxhp,int level,int gil,int antidote,int phoenixdownI);

};
class NormalKnight:public BaseKnight {
public:
 
NormalKnight(int id, int maxhp,int level,int gil,int antidote,int phoenixdownI);

};



class ArmyKnights {
private: 
    BaseKnight** knight;    

    int numKnight;

    bool ishasPaladinShield = false;
    bool ishasLancelotSpear = false;
    bool ishasGuinevereHair = false; 
    bool isExcaliburSword = false; 

    bool winhades=false;
    bool winomega=false;

// đếm số lần gặp hades

public:

    bool getwinhades(){return winhades;}
    void setwinhades(){winhades=true;}
    bool getwinomega(){return winomega;}
    void setwinomega(){winomega=true;}

    int getNumKnight()
    {
        return numKnight;
    }
    void setNumKnight(int n)
    {
        this->numKnight=n;
    }

    ArmyKnights (const string & file_armyknights);
    ~ArmyKnights();
    bool fight(BaseOpponent * opponent);
    bool fightUltimecia();

    

    bool adventure (Events * events);
    int count() const;
    BaseKnight * lastKnight() const;

    bool hasPaladinShield() const{return ishasPaladinShield;}
    void setPaladinShield(bool own) {ishasPaladinShield=own; }

    bool hasLancelotSpear() const{return ishasLancelotSpear;}
    void setLancelotSpear(bool own){ ishasLancelotSpear=own; }

    bool hasGuinevereHair() const{return ishasGuinevereHair; }
    void setGuinevereHair(bool own){ ishasGuinevereHair=own; }

    bool hasExcaliburSword() const{return isExcaliburSword; }
    void setExcaliburSword(bool own){ isExcaliburSword=own; }

    void printInfo() const;
    void printResult(bool win) const;

    void checkandRetransmitGil();

    void removeKnight(int index);
    void removelastKnight();
};


class BaseItem {
public:
    virtual bool canUse ( BaseKnight * knight ) = 0;
    virtual void use ( BaseKnight * knight ) = 0;
};
class Antidote      :public BaseItem{
    public:
bool canUse(BaseKnight * knight ){
if(knight->getPoison()) return true;
return false;
}
void use ( BaseKnight * knight ) {
    int n=knight->getAntidote();
knight->setAntidote(n-1);
}
};

class PhoenixdownI  :public BaseItem{
 public:
bool canUse(BaseKnight * knight ){
    if(knight->gethp()<=0) return true;
    return false;
}
void use ( BaseKnight * knight ) {
    knight->sethp(knight->getmaxhp());
}
};

class PhoenixdownII :public BaseItem{
 public:
bool canUse(BaseKnight * knight ){
 if(knight->gethp()<((knight->getmaxhp())/4)) return true;
    return false;

}


void use ( BaseKnight * knight ) {
  knight->sethp(knight->getmaxhp());

}
};

class PhoenixdownIII:public BaseItem{
 public:
bool canUse(BaseKnight * knight ){
int maxhp=knight->getmaxhp();
int hp_3=maxhp/3;
if(knight->gethp()< hp_3) return true;
 return false;


}


void use ( BaseKnight * knight ) {

int hp=knight->gethp();
int maxhp=knight->getmaxhp();
int hp_3=maxhp/3;
int hp_4=maxhp/4;
if(hp<hp_3)
{
    if(hp<=0) knight->sethp(hp_3);
    else knight->sethp(hp+hp_4);

}

}
};

class PhoenixdownIV :public BaseItem{
 public:
bool canUse(BaseKnight * knight ){
int maxhp=knight->getmaxhp();
int hp_2=maxhp/2;
int hp=knight->gethp();
if(hp<hp_2) return true;
return false;

}
void use ( BaseKnight * knight ) {
    int maxhp=knight->getmaxhp();
    int hp_2=maxhp/2;
    int hp_5=maxhp/5;
    int hp=knight->gethp();

    if(hp<=0) knight->sethp(hp_2);
    else knight->sethp(hp+hp_5);


}
};

class Events {

private:
    int *event_codes; // mảng lưu trữ mã sự kiện
    int num_events; // số lượng các sự kiện
public:
    Events(const string& file_events) {
        ifstream myfile(file_events); // mở file để đọc
        myfile >> num_events; // đọc số lượng các sự kiện từ file
        event_codes = new int[num_events]; // cấp phát động mảng để lưu trữ mã sự kiện
        for (int i = 0; i < num_events; i++) {
            myfile >> event_codes[i]; // đọc mã sự kiện từ file
        }
        myfile.close(); // đóng file
    }
    
    ~Events() {
        delete[] event_codes; // giải phóng động mảng
    }
    
    // keyword " const " để đánh dấu rằng phương thức(method) này không thay đổi bất kì thuộc tính(attributes) nào của class

    int count() const {
        return num_events; // trả về số lượng các sự kiện
    }
    
    int get(int i) const {
        return event_codes[i]; // trả về mã sự kiện của sự kiện thứ i
        // i+1 hay i gì đó chỗ này cần lưu ý

        //***************************************************************************************** 
    }

    
};

class KnightAdventure {
private:
    ArmyKnights * armyKnights;
    Events * events;

public:
    KnightAdventure();
    
    ~KnightAdventure() 
    {
        delete armyKnights;
        delete events;
    }

    void loadArmyKnights(const string &);
    void loadEvents(const string &);
    void run();

   
};

#endif // __KNIGHT2_H__










