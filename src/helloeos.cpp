#include <helloeos.hpp>

void helloeos::hi(eosio::name const & nm)
{
    eosio::print("hello ", nm);
}