/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_GET_ROLES_HPP
#define IROHA_GET_ROLES_HPP

#include "model/query.hpp"

namespace iroha {
  namespace model {
    /**
     * Get all roles in the current system
     */
    struct GetRoles : Query {
      GetRoles() {}
    };

    /**
     * Get all permissions related to specific role
     */
    struct GetRolePermissions : Query {
      GetRolePermissions() {}

      GetRolePermissions(std::string role_id) : role_id(role_id) {}
      /**
       * Role to query
       */
      std::string role_id{};
    };
  }  // namespace model
}  // namespace iroha

#endif  // IROHA_GET_ROLES_HPP
