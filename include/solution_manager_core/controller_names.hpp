// This is a modified version of the original code. The former one was designed for kuka robots only.
// The original copyright is kept as below. 
// Copyright 2024 Aron Svastits
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SOLUTION_MANAGER_CORE__CONTROLLER_NAMES_HPP_
#define SOLUTION_MANAGER_CORE__CONTROLLER_NAMES_HPP_

namespace solution_manager_core
{
/* Fixed controller names */
static constexpr char JOINT_STATE_BROADCASTER[] = "joint_state_broadcaster";
static constexpr char EXTERNAL_TORQUE_BROADCASTER[] = "external_torque_broadcaster";

static constexpr char CONTROL_MODE_HANDLER[] = "control_mode_handler";
static constexpr char EVENT_BROADCASTER[] = "event_broadcaster";
static constexpr char FRI_CONFIGURATION_CONTROLLER[] = "fri_configuration_controller";
static constexpr char FRI_STATE_BROADCASTER[] = "fri_state_broadcaster";

// Controller names with default values
static constexpr char JOINT_TRAJECTORY_CONTROLLER[] = "joint_trajectory_controller";
static constexpr char JOINT_GROUP_IMPEDANCE_CONTROLLER[] = "joint_group_impedance_controller";
}  // namespace solution_manager_core

#endif  // SOLUTION_MANAGER_CORE__CONTROLLER_NAMES_HPP_
