#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStateMachineRunner)
namespace System {
class Action;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunner;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*, "Cysharp.Threading.Tasks.CompilerServices", "IStateMachineRunner");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
class CORDL_TYPE IStateMachineRunner {
public:
// Declarations
 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_ReturnAction)) ::System::Action*  ReturnAction;

/// @brief Method Return, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Return() ;

/// @brief Method get_MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_ReturnAction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action* get_ReturnAction() ;

// Ctor Parameters [CppParam { name: "", ty: "IStateMachineRunner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStateMachineRunner(IStateMachineRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
