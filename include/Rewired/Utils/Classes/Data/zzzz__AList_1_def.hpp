#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/AList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AList_1)
namespace Rewired::Utils::Classes::Data {
template<typename >
struct AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
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
namespace System::Collections {
class IList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class AList_1;
}
namespace Rewired::Utils::Classes::Data {
template<typename >
struct AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::AList_1);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::AList_1, "Rewired.Utils.Classes.Data", "AList`1");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf, "Rewired.Utils.Classes.Data", "AList`1/yrsHvYzwLrPzkcldKxGyhHOWhUhf");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename >
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.AList`1/yrsHvYzwLrPzkcldKxGyhHOWhUhf<>
struct CORDL_TYPE AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf {
public:
// Declarations
 __declspec(property(get=get_Current))   Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<\u{1}>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method NsFpPDeDlLwASyNujbUZDhFscylL, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool NsFpPDeDlLwASyNujbUZDhFscylL() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::AList_1<>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline  get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<\u{1}>"
constexpr ::System::Collections::Generic::IEnumerator_1<>* i___System__Collections__Generic__IEnumerator_1__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf() ;

// Ctor Parameters [CppParam { name: "list", ty: "::Rewired::Utils::Classes::Data::AList_1<\u{1}>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty: "\u{1}", modifiers: "", def_value: None }]
constexpr AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf(::Rewired::Utils::Classes::Data::AList_1<>*  list, int32_t  index, int32_t  version,   current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field list, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<>*  list;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field version, offset: 0xc, size: 0x4, def value: None
 int32_t  version;

/// @brief Field current, offset: 0x10, size: 0x8, def value: None
   current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.AList`1<T>
class CORDL_TYPE AList_1 : public ::System::Object {
public:
// Declarations
using yrsHvYzwLrPzkcldKxGyhHOWhUhf = ::Rewired::Utils::Classes::Data::AList_1_yrsHvYzwLrPzkcldKxGyhHOWhUhf<T>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_EqualityComparer, put=set_EqualityComparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  EqualityComparer;

 __declspec(property(get=get_FreeSpace)) int32_t  FreeSpace;

/// @brief Field ISkIAwQcHSQPGQXsKjypTduUbcDT, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ISkIAwQcHSQPGQXsKjypTduUbcDT, put=__cordl_internal_set_ISkIAwQcHSQPGQXsKjypTduUbcDT)) ::System::Object*  ISkIAwQcHSQPGQXsKjypTduUbcDT;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field QhRTQqoqpaLqGLsiQENAQQqQDZrDA, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_QhRTQqoqpaLqGLsiQENAQQqQDZrDA, put=__cordl_internal_set_QhRTQqoqpaLqGLsiQENAQQqQDZrDA)) bool  QhRTQqoqpaLqGLsiQENAQQqQDZrDA;

/// @brief Field QjEDFMCHtkbYhBtCAtXKMhwsTKMcc, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_QjEDFMCHtkbYhBtCAtXKMhwsTKMcc, put=__cordl_internal_set_QjEDFMCHtkbYhBtCAtXKMhwsTKMcc)) int32_t  QjEDFMCHtkbYhBtCAtXKMhwsTKMcc;

 __declspec(property(get=EmAaqmfqvetwGnoukptOyyUUcVaG)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field UHLjKbwtGgtxbZfLcTZpfrWSWAib, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UHLjKbwtGgtxbZfLcTZpfrWSWAib, put=setStaticF_UHLjKbwtGgtxbZfLcTZpfrWSWAib)) ::ArrayW<T>  UHLjKbwtGgtxbZfLcTZpfrWSWAib;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _count, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _items, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::ArrayW<T>  _items;

/// @brief Field iGgTUQidNPmOINhTmkqrREAIowwb, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_iGgTUQidNPmOINhTmkqrREAIowwb, put=__cordl_internal_set_iGgTUQidNPmOINhTmkqrREAIowwb)) int32_t  iGgTUQidNPmOINhTmkqrREAIowwb;

/// @brief Field lYupkvKKooYvwGafNdnRhUlicbipA, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_lYupkvKKooYvwGafNdnRhUlicbipA, put=__cordl_internal_set_lYupkvKKooYvwGafNdnRhUlicbipA)) bool  lYupkvKKooYvwGafNdnRhUlicbipA;

/// @brief Field rQnFdVKNUTCeUGcMQAvBGxpioHUOA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rQnFdVKNUTCeUGcMQAvBGxpioHUOA, put=__cordl_internal_set_rQnFdVKNUTCeUGcMQAvBGxpioHUOA)) ::System::Collections::Generic::IEqualityComparer_1<T>*  rQnFdVKNUTCeUGcMQAvBGxpioHUOA;

/// @brief Field rvrYLIeikMDypSemniUCgQSooyLLA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rvrYLIeikMDypSemniUCgQSooyLLA, put=__cordl_internal_set_rvrYLIeikMDypSemniUCgQSooyLLA)) int32_t  rvrYLIeikMDypSemniUCgQSooyLLA;

/// @brief Field stRQMGyFNbtFUkRfmRCZIAGgQGjh, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_stRQMGyFNbtFUkRfmRCZIAGgQGjh, put=__cordl_internal_set_stRQMGyFNbtFUkRfmRCZIAGgQGjh)) int32_t  stRQMGyFNbtFUkRfmRCZIAGgQGjh;

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

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(::ArrayW<T>  items, int32_t  count, int32_t  startIndex, bool  allowPartialAdd) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(::Rewired::Utils::Classes::Data::AList_1<T>*  items, int32_t  count, int32_t  startIndex, bool  allowPartialAdd) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Add(T  item) ;

/// @brief Method AddIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddIfUnique(T  item) ;

/// @brief Method AddToFirstOpenSpace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddToFirstOpenSpace(T  item) ;

/// @brief Method AddToFirstOpenSpace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddToFirstOpenSpace(T  item, T  openSpaceEquals) ;

/// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* AsReadOnly() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<T>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<T>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method CreateFixedLengthList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::AList_1<T>* CreateFixedLengthList(int32_t  capacity) ;

/// @brief Method DDmabMKRtxIZdefrgYEQsMKdJqyVb, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool DDmabMKRtxIZdefrgYEQsMKdJqyVb(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method EmAaqmfqvetwGnoukptOyyUUcVaG, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool EmAaqmfqvetwGnoukptOyyUUcVaG() ;

/// @brief Method Exists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Exists(::System::Predicate_1<T>*  match) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Find(::System::Predicate_1<T>*  match) ;

/// @brief Method FindAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<T>* FindAll(::System::Predicate_1<T>*  match) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(::System::Predicate_1<T>*  match) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(int32_t  startIndex, int32_t  count, ::System::Predicate_1<T>*  match) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(int32_t  startIndex, ::System::Predicate_1<T>*  match) ;

/// @brief Method FindLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T FindLast(::System::Predicate_1<T>*  match) ;

/// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindLastIndex(::System::Predicate_1<T>*  match) ;

/// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindLastIndex(int32_t  startIndex, int32_t  count, ::System::Predicate_1<T>*  match) ;

/// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindLastIndex(int32_t  startIndex, ::System::Predicate_1<T>*  match) ;

/// @brief Method ForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForEach(::System::Action_1<T>*  action) ;

/// @brief Method GEosoJWizUAMTLloBVWVToVdryZV, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GEosoJWizUAMTLloBVWVToVdryZV(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetRandom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetRandom() ;

/// @brief Method GetRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<T>* GetRange(int32_t  index, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  item) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index, int32_t  count) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index, int32_t  count, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Insert(int32_t  index, T  item) ;

/// @brief Method JidGwAFAHIrtJRlFTRoXkMFdzoZi, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void JidGwAFAHIrtJRlFTRoXkMFdzoZi(int32_t  _cordl_fixed_empty_name_whitespace, T  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t LastIndexOf(T  item) ;

/// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t LastIndexOf(T  item, int32_t  index) ;

/// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t LastIndexOf(T  item, int32_t  index, int32_t  count) ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::AList_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method OLthPyBbKfGXlpnEPjTyDMbtqklCb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OLthPyBbKfGXlpnEPjTyDMbtqklCb(::ArrayW<T>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method QIkdTOanGfbOxREVsNAUplfHxiWB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* QIkdTOanGfbOxREVsNAUplfHxiWB() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(T  item) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RemoveAll(::System::Predicate_1<T>*  match) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reverse(int32_t  index, int32_t  count) ;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Sort() ;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Sort(::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Sort(int32_t  index, int32_t  count, ::System::Collections::Generic::IComparer_1<T>*  comparer) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TrimExcess() ;

/// @brief Method TrueForAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrueForAll(::System::Predicate_1<T>*  match) ;

/// @brief Method UJGMwxpzkaUvftbmqaXtndbtCHjs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t UJGMwxpzkaUvftbmqaXtndbtCHjs(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method VtctRShFDGLJZWZQJWwWTybLaniW, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void VtctRShFDGLJZWZQJWwWTybLaniW(T  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Object* const& __cordl_internal_get_ISkIAwQcHSQPGQXsKjypTduUbcDT() const;

constexpr ::System::Object*& __cordl_internal_get_ISkIAwQcHSQPGQXsKjypTduUbcDT() ;

constexpr bool const& __cordl_internal_get_QhRTQqoqpaLqGLsiQENAQQqQDZrDA() const;

constexpr bool& __cordl_internal_get_QhRTQqoqpaLqGLsiQENAQQqQDZrDA() ;

constexpr int32_t const& __cordl_internal_get_QjEDFMCHtkbYhBtCAtXKMhwsTKMcc() const;

constexpr int32_t& __cordl_internal_get_QjEDFMCHtkbYhBtCAtXKMhwsTKMcc() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__items() const;

constexpr ::ArrayW<T>& __cordl_internal_get__items() ;

constexpr int32_t const& __cordl_internal_get_iGgTUQidNPmOINhTmkqrREAIowwb() const;

constexpr int32_t& __cordl_internal_get_iGgTUQidNPmOINhTmkqrREAIowwb() ;

constexpr bool const& __cordl_internal_get_lYupkvKKooYvwGafNdnRhUlicbipA() const;

constexpr bool& __cordl_internal_get_lYupkvKKooYvwGafNdnRhUlicbipA() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& __cordl_internal_get_rQnFdVKNUTCeUGcMQAvBGxpioHUOA() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __cordl_internal_get_rQnFdVKNUTCeUGcMQAvBGxpioHUOA() ;

constexpr int32_t const& __cordl_internal_get_rvrYLIeikMDypSemniUCgQSooyLLA() const;

constexpr int32_t& __cordl_internal_get_rvrYLIeikMDypSemniUCgQSooyLLA() ;

constexpr int32_t const& __cordl_internal_get_stRQMGyFNbtFUkRfmRCZIAGgQGjh() const;

constexpr int32_t& __cordl_internal_get_stRQMGyFNbtFUkRfmRCZIAGgQGjh() ;

constexpr void __cordl_internal_set_ISkIAwQcHSQPGQXsKjypTduUbcDT(::System::Object*  value) ;

constexpr void __cordl_internal_set_QhRTQqoqpaLqGLsiQENAQQqQDZrDA(bool  value) ;

constexpr void __cordl_internal_set_QjEDFMCHtkbYhBtCAtXKMhwsTKMcc(int32_t  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__items(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_iGgTUQidNPmOINhTmkqrREAIowwb(int32_t  value) ;

constexpr void __cordl_internal_set_lYupkvKKooYvwGafNdnRhUlicbipA(bool  value) ;

constexpr void __cordl_internal_set_rQnFdVKNUTCeUGcMQAvBGxpioHUOA(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr void __cordl_internal_set_rvrYLIeikMDypSemniUCgQSooyLLA(int32_t  value) ;

constexpr void __cordl_internal_set_stRQMGyFNbtFUkRfmRCZIAGgQGjh(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::ArrayW<T> getStaticF_UHLjKbwtGgtxbZfLcTZpfrWSWAib() ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_EqualityComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_EqualityComparer() ;

/// @brief Method get_FreeSpace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_FreeSpace() ;

/// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsFixedSize() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Version() ;

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

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

static inline void setStaticF_UHLjKbwtGgtxbZfLcTZpfrWSWAib(::ArrayW<T>  value) ;

/// @brief Method set_EqualityComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_EqualityComparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method uBWqQLnVxqcYGJrWPNeJFuFQErIx, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t uBWqQLnVxqcYGJrWPNeJFuFQErIx(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AList_1(AList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AList_1(AList_1 const& ) = delete;

/// @brief Field TnTPuoywHFIevBjnbUUamCkmpkvH offset 0xffffffff size 0x4
static constexpr int32_t  TnTPuoywHFIevBjnbUUamCkmpkvH{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3017};

/// @brief Field rQnFdVKNUTCeUGcMQAvBGxpioHUOA, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<T>*  ___rQnFdVKNUTCeUGcMQAvBGxpioHUOA;

/// @brief Field _items, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ____items;

/// @brief Field rvrYLIeikMDypSemniUCgQSooyLLA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___rvrYLIeikMDypSemniUCgQSooyLLA;

/// @brief Field _count, offset: 0x24, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field stRQMGyFNbtFUkRfmRCZIAGgQGjh, offset: 0x28, size: 0x4, def value: None
 int32_t  ___stRQMGyFNbtFUkRfmRCZIAGgQGjh;

/// @brief Field QhRTQqoqpaLqGLsiQENAQQqQDZrDA, offset: 0x2c, size: 0x1, def value: None
 bool  ___QhRTQqoqpaLqGLsiQENAQQqQDZrDA;

/// @brief Field QjEDFMCHtkbYhBtCAtXKMhwsTKMcc, offset: 0x30, size: 0x4, def value: None
 int32_t  ___QjEDFMCHtkbYhBtCAtXKMhwsTKMcc;

/// @brief Field lYupkvKKooYvwGafNdnRhUlicbipA, offset: 0x34, size: 0x1, def value: None
 bool  ___lYupkvKKooYvwGafNdnRhUlicbipA;

/// @brief Field iGgTUQidNPmOINhTmkqrREAIowwb, offset: 0x38, size: 0x4, def value: None
 int32_t  ___iGgTUQidNPmOINhTmkqrREAIowwb;

/// @brief Field ISkIAwQcHSQPGQXsKjypTduUbcDT, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___ISkIAwQcHSQPGQXsKjypTduUbcDT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
