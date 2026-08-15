#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomPriorityQueue_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPriorityQueue_2)
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement,typename TPriority>
class CustomPriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CustomPriorityQueue_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CustomPriorityQueue_2, "", "CustomPriorityQueue`2");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TElement,typename TPriority>
// Is value type: false
// CS Name: CustomPriorityQueue`2<TElement,TPriority>
class CORDL_TYPE CustomPriorityQueue_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _capacity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) int32_t  _capacity;

/// @brief Field _count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _elements, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__elements, put=__cordl_internal_set__elements)) ::ArrayW<TElement>  _elements;

/// @brief Field _priorities, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__priorities, put=__cordl_internal_set__priorities)) ::ArrayW<TPriority>  _priorities;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TElement Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(TElement  element, TPriority  priority) ;

/// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Grow() ;

static inline ::GlobalNamespace::CustomPriorityQueue_2<TElement,TPriority>* New_ctor(int32_t  initialCapacity) ;

/// @brief Method RemoveRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveRoot() ;

/// @brief Method SiftDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SiftDown(int32_t  index, TElement  element, TPriority  priority) ;

/// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryDequeue(::by_ref<TElement>  element, ::by_ref<TPriority>  priority) ;

/// @brief Method TryPeek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPeek(::by_ref<TElement>  element, ::by_ref<TPriority>  priority) ;

constexpr int32_t const& __cordl_internal_get__capacity() const;

constexpr int32_t& __cordl_internal_get__capacity() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::ArrayW<TElement> const& __cordl_internal_get__elements() const;

constexpr ::ArrayW<TElement>& __cordl_internal_get__elements() ;

constexpr ::ArrayW<TPriority> const& __cordl_internal_get__priorities() const;

constexpr ::ArrayW<TPriority>& __cordl_internal_get__priorities() ;

constexpr void __cordl_internal_set__capacity(int32_t  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__elements(::ArrayW<TElement>  value) ;

constexpr void __cordl_internal_set__priorities(::ArrayW<TPriority>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPriorityQueue_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPriorityQueue_2(CustomPriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPriorityQueue_2(CustomPriorityQueue_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17489};

/// @brief Field _elements, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<TElement>  ____elements;

/// @brief Field _priorities, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<TPriority>  ____priorities;

/// @brief Field _count, offset: 0x20, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _capacity, offset: 0x24, size: 0x4, def value: None
 int32_t  ____capacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
