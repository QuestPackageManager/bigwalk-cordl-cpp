#pragma once
// IWYU pragma private; include "HandyCollections/Heap/MinHeap_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MinHeap_1)
namespace HandyCollections::Heap {
template<typename T>
class IMinHeap_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace HandyCollections::Heap {
template<typename T>
class MinHeap_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::HandyCollections::Heap::MinHeap_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::HandyCollections::Heap::MinHeap_1, "HandyCollections.Heap", "MinHeap`1");
// Dependencies System.Object
namespace HandyCollections::Heap {
// cpp template
template<typename T>
// Is value type: false
// CS Name: HandyCollections.Heap.MinHeap`1<T>
class CORDL_TYPE MinHeap_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AllowHeapResize, put=set_AllowHeapResize)) bool  AllowHeapResize;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Minimum)) T  Minimum;

/// @brief Field _allowResize, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowResize, put=__cordl_internal_set__allowResize)) bool  _allowResize;

/// @brief Field _comparer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__comparer, put=__cordl_internal_set__comparer)) ::System::Collections::Generic::IComparer_1<T>*  _comparer;

/// @brief Field _heap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__heap, put=__cordl_internal_set__heap)) ::System::Collections::Generic::List_1<T>*  _heap;

/// @brief Convert operator to "::HandyCollections::Heap::IMinHeap_1<T>"
constexpr operator  ::HandyCollections::Heap::IMinHeap_1<T>*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(T  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::IEnumerable_1<T>*  items) ;

/// @brief Method BubbleUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BubbleUp(int32_t  index) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method DebugCheckHeapProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DebugCheckHeapProperty() ;

/// @brief Method Heapify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Heapify() ;

/// @brief Method Heapify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Heapify(int32_t  mutated) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  item) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(::System::Predicate_1<T>*  predicate) ;

/// @brief Method IsLessThan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsLessThan(T  a, T  b) ;

/// @brief Method LeftChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t LeftChild(int32_t  i) ;

static inline ::HandyCollections::Heap::MinHeap_1<T>* New_ctor() ;

static inline ::HandyCollections::Heap::MinHeap_1<T>* New_ctor(int32_t  capacity) ;

static inline ::HandyCollections::Heap::MinHeap_1<T>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<T>*  comparer) ;

static inline ::HandyCollections::Heap::MinHeap_1<T>* New_ctor(::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method ParentIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t ParentIndex(int32_t  i) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T RemoveAt(int32_t  index) ;

/// @brief Method RemoveMin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T RemoveMin() ;

/// @brief Method RightChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t RightChild(int32_t  i) ;

/// @brief Method SmallestChildSmallerThan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t SmallestChildSmallerThan(int32_t  i, T  item) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Swap(int32_t  a, int32_t  b) ;

/// @brief Method TrickleDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t TrickleDown(int32_t  index) ;

constexpr bool const& __cordl_internal_get__allowResize() const;

constexpr bool& __cordl_internal_get__allowResize() ;

constexpr ::System::Collections::Generic::IComparer_1<T>* const& __cordl_internal_get__comparer() const;

constexpr ::System::Collections::Generic::IComparer_1<T>*& __cordl_internal_get__comparer() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__heap() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__heap() ;

constexpr void __cordl_internal_set__allowResize(bool  value) ;

constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IComparer_1<T>*  value) ;

constexpr void __cordl_internal_set__heap(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method get_AllowHeapResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_AllowHeapResize() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Minimum, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Minimum() ;

/// @brief Convert to "::HandyCollections::Heap::IMinHeap_1<T>"
constexpr ::HandyCollections::Heap::IMinHeap_1<T>* i___HandyCollections__Heap__IMinHeap_1_T_() noexcept;

/// @brief Method set_AllowHeapResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_AllowHeapResize(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinHeap_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinHeap_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinHeap_1(MinHeap_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinHeap_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinHeap_1(MinHeap_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16775};

/// @brief Field _heap, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ____heap;

/// @brief Field _comparer, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<T>*  ____comparer;

/// @brief Field _allowResize, offset: 0x20, size: 0x1, def value: None
 bool  ____allowResize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HandyCollections::Heap
