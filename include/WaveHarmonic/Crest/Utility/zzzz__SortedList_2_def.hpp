#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/SortedList_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_2)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Utility::SortedList_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Utility::SortedList_2, "WaveHarmonic.Crest.Utility", "SortedList`2");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.SortedList`2<TKey,TValue>
class CORDL_TYPE SortedList_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _BackingList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BackingList, put=__cordl_internal_set__BackingList)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  _BackingList;

/// @brief Field _Comparison, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Comparison, put=__cordl_internal_set__Comparison)) ::System::Comparison_1<TKey>*  _Comparison;

/// @brief Field _NeedsSorting, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__NeedsSorting, put=__cordl_internal_set__NeedsSorting)) bool  _NeedsSorting;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Comparison, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Comparison(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  x, ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  y) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(TValue  value) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>> GetEnumerator() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<TKey,TValue>* New_ctor(::System::Comparison_1<TKey>*  comparison) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(TValue  value) ;

/// @brief Method ResortArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResortArrays() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* const& __cordl_internal_get__BackingList() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*& __cordl_internal_get__BackingList() ;

constexpr ::System::Comparison_1<TKey>* const& __cordl_internal_get__Comparison() const;

constexpr ::System::Comparison_1<TKey>*& __cordl_internal_get__Comparison() ;

constexpr bool const& __cordl_internal_get__NeedsSorting() const;

constexpr bool& __cordl_internal_get__NeedsSorting() ;

constexpr void __cordl_internal_set__BackingList(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  value) ;

constexpr void __cordl_internal_set__Comparison(::System::Comparison_1<TKey>*  value) ;

constexpr void __cordl_internal_set__NeedsSorting(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Comparison_1<TKey>*  comparison) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortedList_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortedList_2(SortedList_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortedList_2(SortedList_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20164};

/// @brief Field _BackingList, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  ____BackingList;

/// @brief Field _Comparison, offset: 0x18, size: 0x8, def value: None
 ::System::Comparison_1<TKey>*  ____Comparison;

/// @brief Field _NeedsSorting, offset: 0x20, size: 0x1, def value: None
 bool  ____NeedsSorting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Utility
