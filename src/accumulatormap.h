// Copyright (c) 2017-2018 The PIVX Developers
// Copyright (c) 2018 The RUPEEEVOLUTION Developers 
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RUPEEEVOLUTION_ACCUMULATORMAP_H
#define RUPEEEVOLUTION_ACCUMULATORMAP_H

#include "libzerocoin/Accumulator.h"
#include "libzerocoin/Coin.h"

//A map with an accumulator for each denomination
class AccumulatorMap
{
private:
    libzerocoin::ZerocoinParams* params;
    std::map<libzerocoin::CoinDenomination, std::unique_ptr<libzerocoin::Accumulator> > mapAccumulators;
public:
    explicit AccumulatorMap(libzerocoin::ZerocoinParams* params);
    bool Load(uint256 nCheckpoint);
    bool Accumulate(const libzerocoin::PublicCoin& pubCoin, bool fSkipValidation = false);
    CBigNum GetValue(libzerocoin::CoinDenomination denom);
    uint256 GetCheckpoint();
    void Reset();
    void Reset(libzerocoin::ZerocoinParams* params2);
};
#endif //RUPEEEVOLUTION_ACCUMULATORMAP_H
