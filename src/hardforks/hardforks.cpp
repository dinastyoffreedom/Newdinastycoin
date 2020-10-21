// Parts are Copyright (c) 2019, The Dinastycoin team
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "hardforks.h"

#undef DINASTYCOIN_DEFAULT_LOG_CATEGORY
#define DINASTYCOIN_DEFAULT_LOG_CATEGORY "blockchain.hardforks"

const hardfork_t mainnet_hard_forks[] = {
    // version 1 from the start of the blockchain
  { 1, 1, 0, 1532344521 },

  // version 2 starts from block 20, which is on or around the 20th of March, 2016. Fork time finalised on 2015-09-20. No fork voting occurs for the v2 fork.
  { 2, 20, 0, 1532345299 },

  // version 3 starts from block 40, which is on or around the 24th of September, 2016. Fork time finalised on 2016-03-21.
  { 3, 40, 0, 1532348216 },

  // version 4 starts from block 60, which is on or around the 5th of January, 2017. Fork time finalised on 2016-09-18.
  { 4, 60, 0, 1532351344 },

  // version 5 starts from block 80, which is on or around the 15th of April, 2017. Fork time finalised on 2017-03-14.
  { 5, 80, 0, 1532352706 },  

  // version 6 starts from block 100, which is on or around the 16th of September, 2017. Fork time finalised on 2017-08-18.
  { 6, 100, 0, 1532353879 },

  // version 7 starts from block 1546000, which is on or around the 6th of April, 2018. Fork time finalised on 2018-03-17.
  { 7, 120, 0, 1532356226 },

  // version 8 starts from block 72875, which is on or around the 18th of October, 2018. Fork time finalised on 2018-09-02.
  { 8, 5800, 0, 1541572216 },

  // version 9 starts from block 73595, which is on or around the 19th of October, 2018. Fork time finalised on 2018-09-02.
  { 9, 5850, 0, 1541846405 },
  // version 10 starts from block 77850
  { 10, 5900, 0, 1542911469 },
  { 11, 5950, 0, 1556115272 },
  { 12, 6000, 0, 1556201672 },
  
  //added code for harfork 13
  //version 13 starts from block 150000 , which is on or around the 19th of NOv, 2020. 
  { 13, 152500, 0, 1605752204 },
};
const size_t num_mainnet_hard_forks = sizeof(mainnet_hard_forks) / sizeof(mainnet_hard_forks[0]);
const uint64_t mainnet_hard_fork_version_1_till = 1009826;

const hardfork_t testnet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  // version 2 starts from block 20, which is on or around the 20th of March, 2016. Fork time finalised on 2015-09-20. No fork voting occurs for the v2 fork.
  { 2, 15, 0, 1442763710 },

  // version 3 starts from block 40, which is on or around the 24th of September, 2016. Fork time finalised on 2016-03-21.
  { 3, 30, 0, 1458558528 },

  // version 4 starts from block 60, which is on or around the 5th of January, 2017. Fork time finalised on 2016-09-18.
  { 4, 45, 0, 1483574400 },

  // version 5 starts from block 80, which is on or around the 15th of April, 2017. Fork time finalised on 2017-03-14.
  { 5, 60, 0, 1489520158 },  

  { 6, 75, 0, 1540190226 },
  { 7, 90, 0, 1540193826 },
  { 8, 105, 0, 1540197426 },
  { 9, 115, 0, 1540201026 },
  // version 10 starts from block 77850
  { 10, 130, 0, 1542903118 },
  { 11, 145, 0, 1554478208 },
  { 12, 160, 0, 1554488208 },
};
const size_t num_testnet_hard_forks = sizeof(testnet_hard_forks) / sizeof(testnet_hard_forks[0]);
const uint64_t testnet_hard_fork_version_1_till = 624633;

const hardfork_t stagenet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  { 2, 20, 0, 1521000000 },
  { 3, 40, 0, 1521120000 },
  { 4, 60, 0, 1521240000 },
  { 5, 80, 0, 1521360000 },
  { 6, 100, 0, 1521480000 },
  { 7, 120, 0, 1521600000 },
  { 8, 140, 0, 1537821770 },
  { 9, 160, 0, 1537821771 },
  { 10, 180, 0, 1542903118 },
  { 11, 200, 0, 1554478208 },
  { 12, 220, 0, 1554488208 },
};
const size_t num_stagenet_hard_forks = sizeof(stagenet_hard_forks) / sizeof(stagenet_hard_forks[0]);
