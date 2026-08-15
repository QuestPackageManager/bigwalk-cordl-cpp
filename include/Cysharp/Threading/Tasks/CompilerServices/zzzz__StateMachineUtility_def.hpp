#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/StateMachineUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StateMachineUtility)
namespace Cysharp::Threading::Tasks::CompilerServices {
class StateMachineUtility___c;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
class StateMachineUtility;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
class StateMachineUtility___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility*);
MARK_REF_T(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility*, "Cysharp.Threading.Tasks.CompilerServices", "StateMachineUtility");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c*, "Cysharp.Threading.Tasks.CompilerServices", "StateMachineUtility/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility/<>c
class CORDL_TYPE StateMachineUtility___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__0_0;

static inline ::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c* New_ctor() ;

/// @brief Method <GetState>b__0_0, addr 0x181e89180, size 0x50, virtual false, abstract: false, final false
inline bool _GetState_b__0_0(::System::Reflection::FieldInfo*  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachineUtility___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachineUtility___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachineUtility___c(StateMachineUtility___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineUtility___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachineUtility___c(StateMachineUtility___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14765};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility
class CORDL_TYPE StateMachineUtility : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c;

/// @brief Method GetState, addr 0x181e89030, size 0x150, virtual false, abstract: false, final false
static inline int32_t GetState(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachineUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachineUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachineUtility(StateMachineUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachineUtility(StateMachineUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
