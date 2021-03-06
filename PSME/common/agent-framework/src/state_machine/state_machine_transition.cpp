/*!
 * @section LICENSE
 *
 * @copyright
 * Copyright (c) 2015-2016 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
*/

#include "agent-framework/state_machine/state_machine_transition.hpp"

using namespace agent_framework::state_machine;

namespace {
std::array<const char*, 8> g_transition_names = {
    {
        "IDLE",
        "EXTRACTION",
        "INSERTION",
        "WENT_DOWN",
        "CAME_UP",
        "DISCOVERY_UP",
        "DISCOVERY_DOWN",
        "DISCOVERY_MISSING"
    }
};

}

const char*
StateMachineTransition::get_transition_name(const enums::Transition transition) {
    return g_transition_names[unsigned(transition)];
}
