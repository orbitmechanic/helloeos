#ifndef HELLOEOS
#define HELLOEOS

#include <eos/eosio.hpp>

class HELLOEOS
{
  public:
    void hi(eosio::name const & nm);
}

#endif