#pragma once
// IWYU pragma private; include "Animancer/FSM/StateBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StateBehaviour)
namespace Animancer::FSM {
class IState;
}
// Forward declare root types
namespace Animancer::FSM {
class StateBehaviour;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::StateBehaviour*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::StateBehaviour*, "Animancer.FSM", "StateBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.StateBehaviour
class CORDL_TYPE StateBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

static inline ::Animancer::FSM::StateBehaviour* New_ctor() ;

/// @brief Method OnEnterState, addr 0x1803038d0, size 0x10, virtual true, abstract: false, final false
inline void OnEnterState() ;

/// @brief Method OnExitState, addr 0x1803038e0, size 0x30, virtual true, abstract: false, final false
inline void OnExitState() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CanExitState, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateBehaviour(StateBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateBehaviour(StateBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::FSM::StateBehaviour) == 0x20, "Size mismatch!");

} // namespace end def Animancer::FSM
