#pragma once
// IWYU pragma private; include "Animancer/Key.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Key)
namespace Animancer {
class Key_IListItem;
}
namespace Animancer {
template<typename T>
class Key_KeyedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
struct List_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class Key;
}
namespace Animancer {
class Key_IListItem;
}
namespace Animancer {
template<typename T>
class Key_KeyedList_1;
}
// Write type traits
MARK_REF_T(::Animancer::Key*);
MARK_REF_T(::Animancer::Key_IListItem*);
MARK_GEN_REF_T_PTR(::Animancer::Key_KeyedList_1);
DEFINE_IL2CPP_CLASS(::Animancer::Key*, "Animancer", "Key");
DEFINE_IL2CPP_CLASS(::Animancer::Key_IListItem*, "Animancer", "Key/IListItem");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::Key_KeyedList_1, "Animancer", "Key/KeyedList`1");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Key/IListItem
class CORDL_TYPE Key_IListItem {
public:
// Declarations
 __declspec(property(get=get_Key)) ::Animancer::Key*  Key;

/// @brief Method get_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::Key* get_Key() ;

// Ctor Parameters [CppParam { name: "", ty: "Key_IListItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Key_IListItem(Key_IListItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18077};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.Key/KeyedList`1<T>
class CORDL_TYPE Key_KeyedList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::System::Collections::Generic::List_1<T>*  Items;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(T  item) ;

/// @brief Method AddNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddNew(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1_Enumerator<T> GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  item) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Insert(int32_t  index, T  item) ;

static inline ::Animancer::Key_KeyedList_1<T>* New_ctor() ;

static inline ::Animancer::Key_KeyedList_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(T  item) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveAtSwap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAtSwap(int32_t  index) ;

/// @brief Method RemoveSwap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RemoveSwap(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_Items() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_Items() ;

constexpr void __cordl_internal_set_Items(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Key_KeyedList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Key_KeyedList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Key_KeyedList_1(Key_KeyedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Key_KeyedList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Key_KeyedList_1(Key_KeyedList_1 const& ) = delete;

/// @brief Field NotFound offset 0xffffffff size 0x8
static constexpr ::ConstString  NotFound{u"The specified item does not exist in this KeyedList."};

/// @brief Field SingleUse offset 0xffffffff size 0x8
static constexpr ::ConstString  SingleUse{u"Each item can only be used in one KeyedList at a time."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18078};

/// @brief Field Items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Key
class CORDL_TYPE Key : public ::System::Object {
public:
// Declarations
using IListItem = ::Animancer::Key_IListItem;

template<typename T>
using KeyedList_1 = ::Animancer::Key_KeyedList_1<T>;

 __declspec(property(get=Animancer_Key_IListItem_get_Key)) ::Animancer::Key*  Animancer_Key_IListItem_Key;

/// @brief Field _Index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index, put=__cordl_internal_set__Index)) int32_t  _Index;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Animancer.Key.IListItem.get_Key, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::Animancer::Key* Animancer_Key_IListItem_get_Key() ;

/// @brief Method IndexOf, addr 0x1802f0b00, size 0x20, virtual false, abstract: false, final false
static inline int32_t IndexOf(::Animancer::Key*  key) ;

/// @brief Method IsInList, addr 0x1802f0b20, size 0x20, virtual false, abstract: false, final false
static inline bool IsInList(::Animancer::Key*  key) ;

static inline ::Animancer::Key* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Index() const;

constexpr int32_t& __cordl_internal_get__Index() ;

constexpr void __cordl_internal_set__Index(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802ecc00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Key() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Key(Key && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Key(Key const& ) = delete;

/// @brief Field NotInList offset 0xffffffff size 0x4
static constexpr int32_t  NotInList{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18079};

/// @brief Field _Index, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Key, ____Index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Animancer::Key) == 0x18, "Size mismatch!");

} // namespace end def Animancer
