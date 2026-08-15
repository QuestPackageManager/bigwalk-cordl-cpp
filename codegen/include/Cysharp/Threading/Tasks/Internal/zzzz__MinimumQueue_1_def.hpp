#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/MinimumQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MinimumQueue_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class MinimumQueue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::MinimumQueue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::MinimumQueue_1, "Cysharp.Threading.Tasks.Internal", "MinimumQueue`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.MinimumQueue`1<T>
class CORDL_TYPE MinimumQueue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::ArrayW<T>  array;

/// @brief Field head, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) int32_t  head;

/// @brief Field size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Field tail, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) int32_t  tail;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  item) ;

/// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Grow() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNext(::by_ref<int32_t>  index) ;

static inline ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method ThrowForEmptyQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowForEmptyQueue() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_array() const;

constexpr ::ArrayW<T>& __cordl_internal_get_array() ;

constexpr int32_t const& __cordl_internal_get_head() const;

constexpr int32_t& __cordl_internal_get_head() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr int32_t const& __cordl_internal_get_tail() const;

constexpr int32_t& __cordl_internal_get_tail() ;

constexpr void __cordl_internal_set_array(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_head(int32_t  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

constexpr void __cordl_internal_set_tail(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinimumQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinimumQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinimumQueue_1(MinimumQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinimumQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinimumQueue_1(MinimumQueue_1 const& ) = delete;

/// @brief Field GrowFactor offset 0xffffffff size 0x4
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field MinimumGrow offset 0xffffffff size 0x4
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14717};

/// @brief Field array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___array;

/// @brief Field head, offset: 0x18, size: 0x4, def value: None
 int32_t  ___head;

/// @brief Field tail, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___tail;

/// @brief Field size, offset: 0x20, size: 0x4, def value: None
 int32_t  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
