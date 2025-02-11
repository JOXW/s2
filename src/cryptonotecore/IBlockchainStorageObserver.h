// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2019, Project Securus
//
// Please see the included LICENSE file for more information.

#pragma once

namespace CryptoNote
{
    class IBlockchainStorageObserver
    {
      public:
        virtual ~IBlockchainStorageObserver() {}

        virtual void blockchainUpdated() = 0;
    };
} // namespace CryptoNote
