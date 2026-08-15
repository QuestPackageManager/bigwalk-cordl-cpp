#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AwaiterActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AwaiterActions)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AwaiterActions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AwaiterActions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AwaiterActions*, "Cysharp.Threading.Tasks", "AwaiterActions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AwaiterActions
class CORDL_TYPE AwaiterActions : public ::System::Object {
public:
// Declarations
/// @brief Field InvokeContinuationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvokeContinuationDelegate, put=setStaticF_InvokeContinuationDelegate)) ::System::Action_1<::System::Object*>*  InvokeContinuationDelegate;

/// @brief Method Continuation, addr 0x181e5cd50, size 0x60, virtual false, abstract: false, final false
static inline void Continuation(::System::Object*  state) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_InvokeContinuationDelegate() ;

static inline void setStaticF_InvokeContinuationDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AwaiterActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AwaiterActions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AwaiterActions(AwaiterActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AwaiterActions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AwaiterActions(AwaiterActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AwaiterActions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
