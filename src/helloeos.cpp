#include <helloeos.hpp>

void helloworld::hi(eosio::name const & nm)
{
    eosio::print("hello ", nm);
}