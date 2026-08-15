#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Internal/zzzz__MinimumQueue_1_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class ArrayPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::ArrayPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::ArrayPool_1, "Cysharp.Threading.Tasks.Internal", "ArrayPool`1");
// Dependencies Cysharp.Threading.Tasks.Internal.MinimumQueue`1<T>, System.Object, System.Threading.SpinLock
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ArrayPool`1<T>
class CORDL_TYPE ArrayPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyArray, put=setStaticF_EmptyArray)) ::ArrayW<T>  EmptyArray;

/// @brief Field Shared, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Shared, put=setStaticF_Shared)) ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  Shared;

/// @brief Field buckets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buckets, put=__cordl_internal_set_buckets)) ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>  buckets;

/// @brief Field locks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_locks, put=__cordl_internal_set_locks)) ::ArrayW<::System::Threading::SpinLock>  locks;

/// @brief Method CalculateSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t CalculateSize(int32_t  size) ;

/// @brief Method GetQueueIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetQueueIndex(int32_t  size) ;

static inline ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* New_ctor() ;

/// @brief Method Rent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> Rent(int32_t  minimumLength) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return(::ArrayW<T>  array, bool  clearArray) ;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*> const& __cordl_internal_get_buckets() const;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>& __cordl_internal_get_buckets() ;

constexpr ::ArrayW<::System::Threading::SpinLock> const& __cordl_internal_get_locks() const;

constexpr ::ArrayW<::System::Threading::SpinLock>& __cordl_internal_get_locks() ;

constexpr void __cordl_internal_set_buckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>  value) ;

constexpr void __cordl_internal_set_locks(::ArrayW<::System::Threading::SpinLock>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<T> getStaticF_EmptyArray() ;

static inline ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* getStaticF_Shared() ;

static inline void setStaticF_EmptyArray(::ArrayW<T>  value) ;

static inline void setStaticF_Shared(::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

/// @brief Field DefaultMaxNumberOfArraysPerBucket offset 0xffffffff size 0x4
static constexpr int32_t  DefaultMaxNumberOfArraysPerBucket{static_cast<int32_t>(0x32)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14709};

/// @brief Field buckets, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::ArrayW<T>>*>  ___buckets;

/// @brief Field locks, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Threading::SpinLock>  ___locks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
