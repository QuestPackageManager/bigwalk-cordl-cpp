#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Animancer/Examples/StateMachines/ActionState.hpp"
#include "Animancer/Examples/StateMachines/AttackState.hpp"
#include "Animancer/Examples/StateMachines/BasicCharacterBrain.hpp"
#include "Animancer/Examples/StateMachines/Character.hpp"
#include "Animancer/Examples/StateMachines/CharacterParameters.hpp"
#include "Animancer/Examples/StateMachines/CharacterState.hpp"
#include "Animancer/Examples/StateMachines/CharacterStatePriority.hpp"
#include "Animancer/Examples/StateMachines/EquipState.hpp"
#include "Animancer/Examples/StateMachines/Equipment.hpp"
#include "Animancer/Examples/StateMachines/FlinchState.hpp"
#include "Animancer/Examples/StateMachines/HealthPool.hpp"
#include "Animancer/Examples/StateMachines/IdleState.hpp"
#include "Animancer/Examples/StateMachines/MoveState.hpp"
#include "Animancer/Examples/StateMachines/MovingCharacterBrain.hpp"
#include "Animancer/Examples/StateMachines/RootMotionRedirect.hpp"
#include "Animancer/Examples/StateMachines/Weapon.hpp"
#include "Animancer/Examples/StateMachines/WeaponsCharacterBrain.hpp"
#ifdef __cpp_modules
                    export module StateMachines;
                    #endif
                
