//
//  HashTable.hpp
//  NodesInCode
//
//  Created by Hostetter, Brock on 5/5/16.
//  Copyright © 2016 The Skate Badger. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

namespace CTECData
{
    template <class Type>
    class HashTable
    {
    private:
        int capacity;
        double efficiencyPercentage;
        int size;
        Type * internalStorage;
        
        void resize();
        int findPosition(const Type& value);
        int handleCollision(const Type& value);
        void updateSize();
    public:
        HashTable();
        ~HashTable();

        void add(const Type& value);
        bool remove(const Type& value);
        bool contains(const Type& vlaue);
        int getSize();
    };
}

#endif /* HashTable_hpp */
