#ifndef HELLOEOS
#define HELLOEOS

#include <eos/eosio.hpp>

CONTRACT HELLOEOS : public eosio::contract
{
  public:
    using eosio::contract::contract;
    ACTION hi(eosio::name const & nm);
}

#endif