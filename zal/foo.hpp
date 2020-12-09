#pragma once

#include "Human.hpp"


#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
   std::vector< char > likesAnimals;
    std::list< Human >::reverse_iterator it;
    for (it = people.rbegin(); it != people.rend(); it++)
    {
        it->birthday();

        if (it->isMonster() == true)
        {
            likesAnimals.push_back('n');
        }
        else
        {
            likesAnimals.push_back('y');
        }
    }
    return  { likesAnimals };   
    
}