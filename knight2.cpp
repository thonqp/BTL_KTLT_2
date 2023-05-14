#include "knight2.h"

/* * * BEGIN implementation of class BaseBag * * */

BaseBag::BaseBag(BaseKnight *&knightx, int phoenixdownIin, int antidotein)
{
    knightx->setBag(this);

    item_in_bag = phoenixdownIin + antidotein;

    if ((phoenixdownIin <= 0) && (antidotein <= 0))

    {
        head = nullptr;
    }

    if ((phoenixdownIin > 0) && (antidotein > 0))

    {
        head = createNode(antidotee);
        node *current = head;

        for (int i = 0; i < antidotein - 1; i++)
        {
            node *ship1 = createNode(antidotee);
            current->setNext(ship1);
            current = ship1;
        }
        node *phoedautien = createNode(PhoenixI);
        current->setNext(phoedautien);
        current = phoedautien;

        for (int j = 0; j < phoenixdownIin - 1; j++)
        {
            node *ship2 = createNode(PhoenixI);
            current->setNext(ship2);
            current = ship2;
        }

        current->setNext(nullptr);
    }

    else if ((phoenixdownIin > 0) && (antidotein <= 0))

    {

        head = createNode(PhoenixI);
        node *cur = head;
        for (int i = 0; i < phoenixdownIin - 1; i++)
        {
            node *ship = createNode(PhoenixI);
            cur->setNext(ship);
            cur = ship;
        }
        cur->setNext(nullptr);
    }
    else if ((phoenixdownIin <= 0) && (antidotein > 0))
    {
        head = createNode(antidotee);
        node *curr = head;

        for (int i = 0; i < antidotein - 1; i++)
        {
            node *ship3 = createNode(antidotee);
            curr->setNext(ship3);
            curr = ship3;
        }
        curr->setNext(nullptr);
    }
}

DragonBag::DragonBag(BaseKnight *knightx, int phoenixdownIin)
{
    knight->setBag(this);
    int item_in_bag = phoenixdownIin;

    if (phoenixdownIin <= 0)
        head = nullptr;
    else
    {
        head = createNode(PhoenixI);
        node *cur = head;
        for (int i = 0; i < phoenixdownIin - 1; i++)
        {
            node *ship = createNode(PhoenixI);
            cur->setNext(ship);
            cur = ship;
        }
        cur->setNext(nullptr);
    }
}

bool BaseBag::insertFirst(BaseItem *item)
{

    if (PhoenixdownI *pheonixDown = dynamic_cast<PhoenixdownI *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownI

        node *newnode = this->createNode(PhoenixI);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownII *pheonixDown = dynamic_cast<PhoenixdownII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownII

        node *newnode = this->createNode(PhoenixII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIII *pheonixDown = dynamic_cast<PhoenixdownIII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIII

        node *newnode = this->createNode(PhoenixIII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIV *pheonixDown = dynamic_cast<PhoenixdownIV *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIV

        node *newnode = this->createNode(PhoenixIV);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (Antidote *pheonixDown = dynamic_cast<Antidote *>(item))
    {
        // itemx trỏ đến đối tượng của lớp khác

        node *newnode = this->createNode(antidotee);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    item_in_bag++;
    return true;
}

bool PaladinBag::insertFirst(BaseItem *item)
{

    if (PhoenixdownI *pheonixDown = dynamic_cast<PhoenixdownI *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownI

        node *newnode = this->createNode(PhoenixI);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownII *pheonixDown = dynamic_cast<PhoenixdownII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownII

        node *newnode = this->createNode(PhoenixII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIII *pheonixDown = dynamic_cast<PhoenixdownIII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIII

        node *newnode = this->createNode(PhoenixIII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIV *pheonixDown = dynamic_cast<PhoenixdownIV *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIV

        node *newnode = this->createNode(PhoenixIV);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (Antidote *pheonixDown = dynamic_cast<Antidote *>(item))
    {
        // itemx trỏ đến đối tượng của lớp khác

        node *newnode = this->createNode(antidotee);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    item_in_bag++;
    return true;
}

bool LancelotBag::insertFirst(BaseItem *item)
{

    if (item_in_bag >= capacity)
        return false;

    if (PhoenixdownI *pheonixDown = dynamic_cast<PhoenixdownI *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownI

        node *newnode = this->createNode(PhoenixI);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownII *pheonixDown = dynamic_cast<PhoenixdownII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownII

        node *newnode = this->createNode(PhoenixII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIII *pheonixDown = dynamic_cast<PhoenixdownIII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIII

        node *newnode = this->createNode(PhoenixIII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIV *pheonixDown = dynamic_cast<PhoenixdownIV *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIV

        node *newnode = this->createNode(PhoenixIV);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (Antidote *pheonixDown = dynamic_cast<Antidote *>(item))
    {
        // itemx trỏ đến đối tượng của lớp khác

        node *newnode = this->createNode(antidotee);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    item_in_bag++;
    return true;
}

bool DragonBag::insertFirst(BaseItem *item)
{

    if (item_in_bag >= capacity)
        return false;

    if (PhoenixdownI *pheonixDown = dynamic_cast<PhoenixdownI *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownI

        node *newnode = this->createNode(PhoenixI);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownII *pheonixDown = dynamic_cast<PhoenixdownII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownII

        node *newnode = this->createNode(PhoenixII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIII *pheonixDown = dynamic_cast<PhoenixdownIII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIII

        node *newnode = this->createNode(PhoenixIII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIV *pheonixDown = dynamic_cast<PhoenixdownIV *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIV

        node *newnode = this->createNode(PhoenixIV);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (Antidote *pheonixDown = dynamic_cast<Antidote *>(item))
    {
        // itemx trỏ đến đối tượng của lớp khác

        node *newnode = this->createNode(antidotee);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    item_in_bag++;
    return true;
}

bool NormalBag::insertFirst(BaseItem *item)
{

    if (item_in_bag >= capacity)
        return false;

    if (PhoenixdownI *pheonixDown = dynamic_cast<PhoenixdownI *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownI

        node *newnode = this->createNode(PhoenixI);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownII *pheonixDown = dynamic_cast<PhoenixdownII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownII

        node *newnode = this->createNode(PhoenixII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIII *pheonixDown = dynamic_cast<PhoenixdownIII *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIII

        node *newnode = this->createNode(PhoenixIII);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (PhoenixdownIV *pheonixDown = dynamic_cast<PhoenixdownIV *>(item))
    {
        // itemx trỏ đến đối tượng của lớp PhoenixdownIV

        node *newnode = this->createNode(PhoenixIV);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    else if (Antidote *pheonixDown = dynamic_cast<Antidote *>(item))
    {
        // itemx trỏ đến đối tượng của lớp khác

        node *newnode = this->createNode(antidotee);
        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
    }
    item_in_bag++;
    return true;
}

string BaseBag::toString() const
{

    int number = this->item_in_bag;

    string typeString[5] = {"Antidote", "PhoenixI", "PhoenixII", "PhoenixIII", "PhoenixIV"};

    string s("");

    s += "Bag[count=" + to_string(number) + ";";
    for (int i = 1; i <= number; i++)
    {
        if (this->head->getItemType() == antidotee)
        {
            s += typeString[0];
        }
        else if (this->head->getItemType() == PhoenixI)
        {
            s += typeString[1];
        }
        else if (this->head->getItemType() == PhoenixII)
        {
            s += typeString[2];
        }
        else if (this->head->getItemType() == PhoenixIII)
        {
            s += typeString[3];
        }
        else if (this->head->getItemType() == PhoenixIV)
        {
            s += typeString[4];
        }

        if (i != number)
            s += ",";
    }
    s += "]";
    return s;
}

void BaseBag::remove(int index)
{
    if (head == nullptr)
        return;

    if (index == 1)
    {
        node *temp = head;
        head = head->getNext();
        delete temp;
        item_in_bag--;
    }
    else if (index == item_in_bag)
    {
        node *previous = nullptr;
        node *after = head;

        while (after->getNext() != nullptr)
        {
            previous = after;
            after = after->getNext();
        }

        if (previous == nullptr)
        {
            head = nullptr;
        }
        else
        {
            previous->setNext(nullptr);
        }

        delete after;
        item_in_bag--;
    }
    else
    {
        node *previous = nullptr;
        node *after = head;

        for (int i = 1; i < index; i++)
        {
            previous = after;
            after = after->getNext();
        }

        after = previous->getNext();
        previous->setNext(after->getNext());

        delete after;
        item_in_bag--;
    }
}

BaseItem *BaseBag::get(ItemType itemType)
{

    node *cur = head;
    while (cur != NULL)
    {
        if (cur->getItemType() == itemType)
        {

            BaseItem *newitem;
            if (itemType == antidotee)
            {
                newitem = new Antidote();
            }
            else if (itemType == PhoenixI)
            {
                newitem = new PhoenixdownI();
            }
            else if (itemType == PhoenixII)
            {
                newitem = new PhoenixdownII();
            }
            else if (itemType == PhoenixIII)
            {
                newitem = new PhoenixdownIII();
            }
            else if (itemType == PhoenixIV)
            {
                newitem = new PhoenixdownIV();
            }
            return newitem; // tìm thấy node có giá trị data bằng x
        }
        cur->setNext(cur->getNext()); // di chuyển đến node kế tiếp trong danh sách
    }

    return NULL; // không tìm thấy node nào có giá trị data bằng x
}

void BaseBag::removeitem(ItemType item)
{
    if (head == nullptr)
    {

        return;
    }
    node* cur=head;
    while(cur!=nullptr)
    {
        if(cur->getItemType()==item)
        {

            break;
        }

        cur=cur->getNext();
    }

    // TO DO
    cur->setitemtype(head->getItemType());
    head=head->getNext();

    
}

void BaseBag::dungthuoc()
{

    node *current = head;
    BaseItem*item;
    while (current != nullptr)
    {
        if(current->getItemType()==PhoenixI)
        {
            item=new PhoenixdownI();
            if(item->canUse(this->knight)==true)
            {
                item->use(this->knight);
                // xoas phoenix down
                removeitem(PhoenixI);
            }
            break;

        }
        else if(current->getItemType()==PhoenixII)
        {
            item=new PhoenixdownII();
            if(item->canUse(this->knight)==true)
            {
                item->use(this->knight);
                removeitem(PhoenixII);
            }
            break;
        }
        else if(current->getItemType()==PhoenixIII)
        {
            item=new PhoenixdownIII();
            if(item->canUse(this->knight)==true)
            {
                item->use(this->knight);
                removeitem(PhoenixIII);
            }
            break;
        }
        else if(current->getItemType()==PhoenixIV)
        {
            item=new PhoenixdownIV();
            if(item->canUse(this->knight)==true)
            {
                item->use(this->knight);
                removeitem(PhoenixIV);
            }
            break;
        }



        // đi đến node tiếp theo
        current = current->getNext();
    }
}

/* * * END implementation of class BaseBag * * */

/* * * BEGIN implementation of class BaseKnight * * */
string BaseKnight::toString() const
{
    string typeString[4] = {"PALADIN", "LANCELOT", "DRAGON", "NORMAL"};
    // inefficient version, students can change these code
    //      but the format output must be the same
    string s("");
    s += "[Knight:id:" + to_string(id) + ",hp:" + to_string(hp) + ",maxhp:" + to_string(maxhp) + ",level:" + to_string(level) + ",gil:" + to_string(gil) + "," + bag->toString() + ",knight_type:" + typeString[knightType] + "]";
    return s;
}

BaseKnight *BaseKnight::create(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI)
{

    BaseKnight *knight;
    if (maxhp == 888)
    {
        knight = new LancelotKnight(id, maxhp, level, gil, antidote, phoenixdownI);
    }
    else if (maxhp == 345 || maxhp == 354 || maxhp == 453 || maxhp == 435 || maxhp == 543 || maxhp == 534)
    {
        knight = new DragonKnight(id, maxhp, level, gil, antidote, phoenixdownI);
    }
    else
    {
        int count = 0;

        for (int i = 1; i < maxhp; i++)
        {
            if (maxhp % i == 0)
                count++;
        }
        if (count == 1)
            knight = new PaladinKnight(id, maxhp, level, gil, antidote, phoenixdownI);

        else
            knight = new NormalKnight(id, maxhp, level, gil, antidote, phoenixdownI);
    }
    return knight;
}

BaseKnight::BaseKnight(int id, int maxhp, int level, int gil, int antidote)
{

    this->id = id;
    this->hp = maxhp;
    this->maxhp = maxhp;
    this->level = level;
    this->gil = gil;
    this->antidote = antidote;
    this->poison = false;
    this->knightType = NORMAL;
}

/* * * END implementation of class BaseKnight * * */

/* * * BEGIN implementation of class ArmyKnights * * */

int ArmyKnights::count() const
{
    return numKnight;
}
BaseKnight *ArmyKnights::lastKnight() const
{
    if (this->count() > 0)
        return knight[this->count() - 1];
    else
        return NULL;
}

void ArmyKnights::printInfo() const
{
    cout << "No. knights: " << this->count();
    if (this->count() > 0)
    {
        BaseKnight *lknight = lastKnight(); // last knight
        cout << ";" << lknight->toString();
    }
    cout << ";PaladinShield:" << this->hasPaladinShield()
         << ";LancelotSpear:" << this->hasLancelotSpear()
         << ";GuinevereHair:" << this->hasGuinevereHair()
         << ";ExcaliburSword:" << this->hasExcaliburSword()
         << endl
         << string(50, '-') << endl;
}

void ArmyKnights::printResult(bool win) const
{
    cout << (win ? "WIN" : "LOSE") << endl;
}

ArmyKnights::ArmyKnights(const string &file_armyknights)
{

    ifstream inFile(file_armyknights);

    if (!inFile.is_open())
    {
        cerr << "Failed to open file: " << file_armyknights << endl;
        return;
    }

    int num;
    inFile >> num;

    inFile.ignore();
    numKnight = num;

    knight = new BaseKnight *[num];
    for (int i = 0; i < num; i++)
    {
        int maxhp, level, phoenixdownI, gil, antidote;
        inFile >> maxhp >> level >> phoenixdownI >> gil >> antidote;
        inFile.ignore();

        knight[i] = BaseKnight ::create(i + 1, maxhp, level, gil, antidote, phoenixdownI);
    }

    inFile.close();
}

ArmyKnights::~ArmyKnights()
{
    for (int i = 0; i < numKnight; i++)
    {
        delete knight[i];
    }
    delete[] knight;
}

bool ArmyKnights::fight(BaseOpponent *opponent)
{

    BaseKnight *knightcurrent = this->knight[this->getNumKnight() - 1];

    int level = knightcurrent->getlevel();

    // số lượng hiệp sĩ -1 là địa chỉ của hiệp sĩ cuối cùng
    // nếu có hiệp sĩ hi sinh thì xóa bớt mảng nên biến số lượng hiệp sĩ -1 sẽ thay đổi theo

    // từ 1 đến 5-------------------------------------------
    if (opponent->getTypeOpponent() == nor)

    {
        if ((knightcurrent->getKnightType() == LANCELOT) || (knightcurrent->getKnightType() == PALADIN))
        {
            int gil = opponent->getgil();
            knightcurrent->setgil(knightcurrent->getgil()+gil);
        }
        else
        {

            int leveloo = opponent->getlevelo();
            int gil = opponent->getgil();
            if (level >= leveloo)
            {
                knightcurrent->setgil(knightcurrent->getgil()+gil);
            }
            if (level < leveloo)
            {
                int baseDamage = opponent->getbaseDame();
                int HP_hientai = knightcurrent->gethp();
                int newHP = HP_hientai - baseDamage * (leveloo - level);
                knightcurrent->sethp(newHP);
            }
            
        }
    }

    else if (opponent->getTypeOpponent() == Torn)
    {
        int leveloo = opponent->getlevelo();
        if (level >= leveloo)
            knightcurrent->setlevel(level + 1);
        else
        {
            if (knightcurrent->getKnightType() != DRAGON)
            {
                int so_antidote = knightcurrent->getAntidote();
                if (so_antidote >= 1)
                {
                    knightcurrent->setAntidote(so_antidote - 1);
                // con trỏ knightcurrent->
                // đang trỏ tới loại hiệp sĩ nào thì sử dụng loại túi đồ đó
                // đa hình

                // xử lý loại bỏ 1 antidote trong túi đồ
                 knightcurrent->getBag()->removeitem(antidotee);
                }
                else
                {
                    // knightcurrent->setPoison(true);

                    // rơi 3 món đồ
                    knightcurrent->getBag()->remove(1);
                    knightcurrent->getBag()->remove(1);
                    knightcurrent->getBag()->remove(1);
                    // hp giảm 10
                    knightcurrent->sethp(knightcurrent->gethp() - 10);
                }
            }
        }
    }

    else if (opponent->getTypeOpponent() == Queen)
    {

        int leveloo = opponent->getlevelo();
        if (level >= leveloo)
        {
            int gilduocnhan = 2 * (knightcurrent->getgil());

            knightcurrent->setgil(gilduocnhan);
        }
        else
        {
            if (knightcurrent->getKnightType() != PALADIN)
            {
                int gil = knightcurrent->getgil();
                int gilbigiam = gil / 2;
                knightcurrent->setgil(gilbigiam);
            }
        }
    }
    else if (opponent->getTypeOpponent() == Nina)

    {
        int gil = knightcurrent->getgil();
        if (gil >= 50)
        {
            int maxhp = knightcurrent->getmaxhp();
            int maxhp_3 = maxhp / 3;
            int maxhp_5 = maxhp / 5;
            if (knightcurrent->gethp() < maxhp_3)
            {
                knightcurrent->sethp((knightcurrent->gethp()) + maxhp_5);
                knightcurrent->setgil((knightcurrent->getgil()) - 50);
            }
        }
    }

    else if (opponent->getTypeOpponent() == Durian)
    {
        knightcurrent->sethp(knightcurrent->getmaxhp());
    }
    else if (opponent->getTypeOpponent() == Omega)
    {
        int level = knightcurrent->getlevel();
        int hp = knightcurrent->gethp();
        int maxhp = knightcurrent->getmaxhp();
        if ((level == 10 && hp == maxhp) || (knightcurrent->getKnightType() == DRAGON))
        {
            knightcurrent->setlevel(10);
            knightcurrent->setgil(999);
            this->setwinomega();
        }
        else
        {
            knightcurrent->sethp(0);
        }
    }
    else if (opponent->getTypeOpponent() == Had)
    {

        if (knightcurrent->getKnightType() == PALADIN || knightcurrent->getlevel() == 10)
        {
            if (this->hasPaladinShield() == false)
            {
                this->setPaladinShield(true);
            }
            this->setwinhades();
        }
        else
        {
            knightcurrent->sethp(0);

           
        }
    }

    knightcurrent->getBag()->dungthuoc();
    if(knightcurrent->gethp()>0) return true;
    else return false;
}

void ArmyKnights::checkandRetransmitGil()
{

    for (int i = 1; i <= (this->getNumKnight()); i++)
    {

        int gil = this->knight[this->getNumKnight() - i]->getgil();

        if (gil > 999)
        {
            int gil_du = gil - 999;
            this->knight[this->getNumKnight() - i]->setgil(999);
            if (this->getNumKnight() != i)
            {
                this->knight[this->getNumKnight() - i - 1]->setgil(gil_du);
            }
        }
        else
            break;
    }
}

void ArmyKnights::removelastKnight()
{

    if (this->knight[this->getNumKnight() - 1]->gethp() <= 0)
    {
        int n = this->getNumKnight();
        if (n > 0)
        {
            delete this->knight[n - 1];
            this->setNumKnight(n - 1);
        }
    }
}

void ArmyKnights::removeKnight(int index)
{
    // Kiểm tra nếu chỉ có một phần tử trong mảng
    int num = this->getNumKnight();
    if (num == 1)
    {
        delete this->knight[0];
        delete[] knight;
        num = 0;
        knight = NULL;
        return;
    }

    // Tạo một mảng mới với kích thước nhỏ hơn mảng knight một đơn vị
    BaseKnight **new_knight = new BaseKnight *[num - 1];

    // Sao chép các phần tử của mảng knight vào mảng new_knight
    int j = 0;
    for (int i = 0; i < num; i++)
    {
        if (i == index)
        {
            // Xóa phần tử tại vị trí index
            delete this->knight[i];
            continue;
        }
        new_knight[j] = this->knight[i];
        j++;
    }

    // Giải phóng bộ nhớ của mảng knight ban đầu
    delete[] knight;

    // Gán mảng mới cho mảng knight và giảm số lượng phần tử đi 1

    this->setNumKnight(num - 1);

    knight = new_knight;
}

bool ArmyKnights::fightUltimecia()
{
    if (this->hasExcaliburSword() == true)
        return true;
    int numKnight = this->getNumKnight();

    bool bauvat1 = this->hasGuinevereHair();
    bool bauvat2 = this->hasLancelotSpear();
    bool bauvat3 = this->hasPaladinShield();
    bool bauvat = bauvat1 && bauvat2 && bauvat3;

    if ((this->hasExcaliburSword() == false) && (bauvat))
    {
        int HPultimecia = 5000;

        for (int i = numKnight; i > 0; i--)
        {
            BaseKnight *knightcur = this->knight[numKnight - i - 1];
            KnightType type = knightcur->getKnightType();
            if (type == LANCELOT)
            {
                int damage = (knightcur->gethp()) * (knightcur->getlevel()) * 0.05;
                HPultimecia -= damage;
            }
            else if (type == PALADIN)
            {
                int damage = (knightcur->gethp()) * (knightcur->getlevel()) * 0.06;
                HPultimecia -= damage;
            }
            else if (type == DRAGON)
            {
                int damage = (knightcur->gethp()) * (knightcur->getlevel()) * 0.075;
                HPultimecia -= damage;
            }

            if (HPultimecia > 0)
            {
                this->removeKnight(i);
            }

            if ((HPultimecia <= 0) && this->getNumKnight() > 0)
            {
                return true;
            }
        }
    }
    else if ((this->hasExcaliburSword() == false) && (!bauvat))
    {
        for (int i = 0; i < numKnight; i++)
        {
            delete this->knight[i];
        }
        delete this->knight;
        this->setNumKnight(0);
        return false;
    }

    if (this->getNumKnight() > 0)
    {
        return true;
    }

    return false;
}

/* * * END implementation of class ArmyKnights * * */

/* * * BEGIN implementation of class KnightAdventure * * */
KnightAdventure::KnightAdventure()
{
    armyKnights = nullptr;
    events = nullptr;
}

void KnightAdventure::loadArmyKnights(const string &file_armyknights)
{
    this->armyKnights = new ArmyKnights(file_armyknights);
}

void KnightAdventure::loadEvents(const string &file_events)
{
    this->events = new Events(file_events);
}

void KnightAdventure::run()
{
    int soluongevent = this->events->count();
    bool WIN = false;
    for (int i = 1; i <= soluongevent; i++)
    {
        if ((this->events->get(i - 1)) == 1)
        {
           bool fight = this->armyKnights->fight(new MadBear(i - 1, 1));
           while(fight!=true)
           {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new MadBear(i - 1, 1));
           }
        }
        else if ((this->events->get(i - 1)) == 2)
        {
            bool fight =this->armyKnights->fight(new Bandit(i - 1, 2));
            while(fight!=true)
           {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new Bandit(i - 1, 2));
           }
        }
        else if ((this->events->get(i - 1)) == 3)
        {
            bool fight =this->armyKnights->fight(new LordLupin(i - 1, 3));
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new LordLupin(i - 1, 3));
           }
        }
        else if ((this->events->get(i - 1)) == 4)
        {
            bool fight =this->armyKnights->fight(new Elf(i - 1, 4));
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new Elf(i - 1, 4));
           }
        }
        else if ((this->events->get(i - 1)) == 5)
        {
            bool fight =this->armyKnights->fight(new Troll(i - 1, 5));
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new Troll(i - 1, 5));
           }
        }
        else if ((this->events->get(i - 1)) == 6)
        {
            bool fight =this->armyKnights->fight(new Tornbery(i - 1, 6));
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new Tornbery(i - 1, 6));
           }
        }
        else if ((this->events->get(i - 1)) == 7)
        {
            bool fight =this->armyKnights->fight(new QueenOfCards(i - 1, 7));
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new QueenOfCards(i - 1, 7));
           }
        }
        else if ((this->events->get(i - 1)) == 8)
        {
            bool fight =this->armyKnights->fight(new NinaDeRings());
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new NinaDeRings());
           }
        }
        else if ((this->events->get(i - 1)) == 9)
        {
            bool fight =this->armyKnights->fight(new DurianGarden());
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new DurianGarden());
           }
        }
        else if ((this->events->get(i - 1)) == 10 && this->armyKnights->getwinomega() == false)
        {
            bool fight =this->armyKnights->fight(new OmegaWeapon());
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new OmegaWeapon());
           }
        }
        else if ((this->events->get(i - 1)) == 11 && this->armyKnights->getwinhades() == false)
        {
            bool fight =this->armyKnights->fight(new Hades());
            {
            
            this->armyKnights->removelastKnight();
             fight = this->armyKnights->fight(new Hades());
           }
        }
        else if ((this->events->get(i - 1)) == 112)
        {
            BaseItem *item = new PhoenixdownII();
            this->armyKnights->lastKnight()->getBag()->insertFirst(item);
        }
        else if ((this->events->get(i - 1)) == 113)
        {
            BaseItem *item = new PhoenixdownIII();
            this->armyKnights->lastKnight()->getBag()->insertFirst(item);
        }
        else if ((this->events->get(i - 1)) == 114)
        {
            BaseItem *item = new PhoenixdownIV();
            this->armyKnights->lastKnight()->getBag()->insertFirst(item);
        }
        else if ((this->events->get(i - 1)) == 95)
        {
            if (this->armyKnights->hasPaladinShield() == false)
            {
                this->armyKnights->setPaladinShield(true);
            }
        }
        else if ((this->events->get(i - 1)) == 96)
        {
            this->armyKnights->setLancelotSpear(true);
        }
        else if ((this->events->get(i - 1)) == 97)
        {
            this->armyKnights->setGuinevereHair(true);
        }
        else if ((this->events->get(i - 1)) == 98)
        {
            bool bauvat1 = this->armyKnights->hasPaladinShield();
            bool bauvat2 = this->armyKnights->hasLancelotSpear();
            bool bauvat3 = this->armyKnights->hasGuinevereHair();

            if (bauvat1 && bauvat2 && bauvat3)

            {
                this->armyKnights->setExcaliburSword(true);
            }
        }
        else if ((this->events->get(i - 1)) == 99)
        {

            WIN = this->armyKnights->fightUltimecia();
        }

        // if đội quân còn sống mới dùng hàm
        // hàm xài thuốc
        
        this->armyKnights->checkandRetransmitGil();
        this->armyKnights->printInfo();
        if (this->armyKnights->getNumKnight() == 0)
        {
            break;
        }
    }
    this->armyKnights->printResult(WIN);
}

/* * * END implementation of class KnightAdventure * * */

// Kế thừa lớp hiệp sĩ
PaladinKnight::PaladinKnight(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI) : BaseKnight(id, maxhp, level, gil, antidote)
{
    this->knightType = PALADIN;
    this->bag = new PaladinBag(this, phoenixdownI, antidote);
}

LancelotKnight::LancelotKnight(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI) : BaseKnight(id, maxhp, level, gil, antidote)
{
    this->knightType = LANCELOT;
    this->bag = new LancelotBag(this, phoenixdownI, antidote);
}

DragonKnight::DragonKnight(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI) : BaseKnight(id, maxhp, level, gil, antidote)
{
    this->knightType = DRAGON;
    this->bag = new DragonBag(this, phoenixdownI);
    this->antidote = 0;
}

NormalKnight::NormalKnight(int id, int maxhp, int level, int gil, int antidote, int phoenixdownI) : BaseKnight(id, maxhp, level, gil, antidote)
{
    this->knightType = NORMAL;
    this->bag = new NormalBag(this, phoenixdownI, antidote);
}
