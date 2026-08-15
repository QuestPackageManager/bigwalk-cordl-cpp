#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompletedTasks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompletedTasks)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class CompletedTasks;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CompletedTasks*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompletedTasks*, "Cysharp.Threading.Tasks", "CompletedTasks");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTask`1<T>, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompletedTasks
class CORDL_TYPE CompletedTasks : public ::System::Object {
public:
// Declarations
/// @brief Field AsyncUnit, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_AsyncUnit, put=setStaticF_AsyncUnit)) ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>  AsyncUnit;

/// @brief Field False, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_False, put=setStaticF_False)) ::Cysharp::Threading::Tasks::UniTask_1<bool>  False;

/// @brief Field MinusOne, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MinusOne, put=setStaticF_MinusOne)) ::Cysharp::Threading::Tasks::UniTask_1<int32_t>  MinusOne;

/// @brief Field One, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_One, put=setStaticF_One)) ::Cysharp::Threading::Tasks::UniTask_1<int32_t>  One;

/// @brief Field True, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_True, put=setStaticF_True)) ::Cysharp::Threading::Tasks::UniTask_1<bool>  True;

/// @brief Field Zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::Cysharp::Threading::Tasks::UniTask_1<int32_t>  Zero;

static inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit> getStaticF_AsyncUnit() ;

static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> getStaticF_False() ;

static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> getStaticF_MinusOne() ;

static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> getStaticF_One() ;

static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> getStaticF_True() ;

static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> getStaticF_Zero() ;

static inline void setStaticF_AsyncUnit(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

static inline void setStaticF_False(::Cysharp::Threading::Tasks::UniTask_1<bool>  value) ;

static inline void setStaticF_MinusOne(::Cysharp::Threading::Tasks::UniTask_1<int32_t>  value) ;

static inline void setStaticF_One(::Cysharp::Threading::Tasks::UniTask_1<int32_t>  value) ;

static inline void setStaticF_True(::Cysharp::Threading::Tasks::UniTask_1<bool>  value) ;

static inline void setStaticF_Zero(::Cysharp::Threading::Tasks::UniTask_1<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompletedTasks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompletedTasks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompletedTasks(CompletedTasks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompletedTasks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompletedTasks(CompletedTasks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CompletedTasks) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
