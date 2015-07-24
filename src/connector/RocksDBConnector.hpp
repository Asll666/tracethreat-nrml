#ifndef CONNECTOR_ROCKSDB_CONNECTOR
#define CONNECTOR_ROCKSDB_CONNECTOR

/*
* Copyright 2014 Chatsiri Rattana.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*  Titles			                                          Authors	         Date
 * - Support rocksDB                                      R.Chatsiri
 */

#include <rocksdb/db.h>
#include <rocksdb/slice.h>
#include <rocksdb/options.h>

namespace connector
{

    class RocksDBConnector
    {

        public:

            bool kDBPath(const char *path);

            bool connection(rocks::Options& options);

        private:

            const char *path;

    };

}

#endif /* CONNECTOR_ROCKSDB_CONNECTOR */