/*!
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
 *
 * @file state_machine_action.hpp
 * @brief State machine action
 * */

#ifndef AGENT_NETWORK_STATE_MACHINE_ACTION_HPP
#define AGENT_NETWORK_STATE_MACHINE_ACTION_HPP

#include "agent-framework/state_machine/state_machine_thread_action.hpp"

/*! Psme namespace */
namespace agent {
namespace network {

class StateMachineAction final :
            public agent_framework::state_machine::StateMachineThreadAction {
public:
    /*! Default destructor. */
    ~StateMachineAction();

    void execute(const std::string& uuid,
    const agent_framework::state_machine::enums::State state,
    const agent_framework::state_machine::enums::Transition trans) override;
};

}
}
#endif /* */

