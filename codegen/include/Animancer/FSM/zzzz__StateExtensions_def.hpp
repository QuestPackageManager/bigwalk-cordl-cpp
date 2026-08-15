#pragma once
// IWYU pragma private; include "Animancer/FSM/StateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StateExtensions)
// Forward declare root types
namespace Animancer::FSM {
class StateExtensions;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::StateExtensions*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::StateExtensions*, "Animancer.FSM", "StateExtensions");
// Dependencies System.Object
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.StateExtensions
class CORDL_TYPE StateExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ForceEnterState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline void ForceEnterState(TState  state) ;

/// @brief Method GetNextState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline TState GetNextState(TState  state) ;

/// @brief Method GetPreviousState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline TState GetPreviousState(TState  state) ;

/// @brief Method IsCurrentState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline bool IsCurrentState(TState  state) ;

/// @brief Method TryEnterState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline bool TryEnterState(TState  state) ;

/// @brief Method TryReEnterState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline bool TryReEnterState(TState  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateExtensions(StateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateExtensions(StateExtensions const& ) = delete;

/// @brief Field APIDocumentationURL offset 0xffffffff size 0x8
static constexpr ::ConstString  APIDocumentationURL{u"https://kybernetik.com.au/animancer/api/Animancer.FSM/"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::FSM::StateExtensions) == 0x10, "Size mismatch!");

} // namespace end def Animancer::FSM
