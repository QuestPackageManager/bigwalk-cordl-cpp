#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StatePool_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StatePool_2)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1,typename T2>
class StateTuple_2;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1,typename T2>
class StatePool_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::StatePool_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::StatePool_2, "Cysharp.Threading.Tasks.Internal", "StatePool`2");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.StatePool`2<T1,T2>
class CORDL_TYPE StatePool_2 : public ::System::Object {
public:
// Declarations
/// @brief Field queue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_queue, put=setStaticF_queue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*  queue;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>* Create(T1  item1, T2  item2) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Return(::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*  tuple) ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>* getStaticF_queue() ;

static inline void setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1,T2>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatePool_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatePool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StatePool_2(StatePool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatePool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatePool_2(StatePool_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14728};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
