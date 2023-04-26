#include "composite.h"

using namespace std;

CItem::CItem(string _name, int _size, bool readOnly = false, bool hidden = false){
    name = _name;
    size = _size;
    readOnly_Attribute = readOnly;
    hidden_Attribute = hidden;
}

string CItem::getName() {
    return name;
}

int CItem::getSize() {
    return size;
}

bool CItem::isReadOnly() {
    return readOnly_Attribute;
}

bool CItem::isHidden() {
    return hidden_Attribute;
}

void CItem::setHidden(bool isHidden, bool isAlsoApplyToChildren) {
    hidden_Attribute = isHidden;
    if (isAlsoApplyToChildren) {
        setHidden(isHidden, true);
    }
}

CFile::CFile(string _name, int _size) : CItem(_name, _size, false , false) {}

void CFile::print(bool isPrint_hiddenItems) {
    if (!isHidden() || isPrint_hiddenItems) {
        cout << "- " << name << " (" << size << " bytes)";
            if (readOnly_Attribute) {
                cout << " -Read Only";
            }
            if (hidden_Attribute) {
                cout << " -Hidden";
            }

        cout << endl;
    }
}

Composite::Composite(string _name) : CItem(_name, 0) {}

Composite:: ~Composite() {
        for (int i = 0; i < size; i ++){
            delete items[i];
        } 
    }

void Composite::add(CItem* item) {
    items.push_back(item);
    size += item->getSize();
}

CItem* Composite::removeByName(string _name) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->getName() == _name) {
            CItem* item = *it;
            items.erase(it);
            size -= item->getSize();
            return item;
        }
    }

return nullptr;
}

CItem* Composite::findByName(string _name) {
    for (CItem* item : items) {
        if (item->getName() == _name) {
            return item;
        }

        if (Composite* composite = dynamic_cast<Composite*>(item)) {
            CItem* found = composite->findByName(name);

            if (found){
                return found;
            }
        }
    }
    return nullptr;
}

void Composite::print(bool isPrint_hiddenItems) {
    if (!isHidden() || isPrint_hiddenItems) {
        cout << " + " << name << " (" << size << " bytes)";
        if (hidden_Attribute) {
            cout << " -hidden";
        }
        cout << endl;
    }

    for (CItem* item : items){
        item->print(isPrint_hiddenItems);
    }
}

CFolder::CFolder(string _name) : Composite(_name) {}