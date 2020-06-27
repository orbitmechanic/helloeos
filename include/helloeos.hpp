#ifndef HELLOEOS
#define HELLOEOS

#include <eosio/eosio.hpp>

CONTRACT helloeos : public eosio::contract
{
  public:
    using eosio::contract::contract;
    ACTION hi(eosio::name const & nm);
};

#endif