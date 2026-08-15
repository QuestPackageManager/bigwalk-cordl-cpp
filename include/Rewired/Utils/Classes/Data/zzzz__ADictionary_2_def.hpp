#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ADictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ADictionary_2)
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ADictionary_2_Entry;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ADictionary_2_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2_KeyCollection;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2_ValueCollection;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct KeyCollection_ADictionary_2_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ValueCollection_ADictionary_2_Enumerator;
}
namespace Rewired::Utils::Interfaces {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2_KeyCollection;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2_ValueCollection;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ADictionary_2_Entry;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ADictionary_2_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct KeyCollection_ADictionary_2_Enumerator;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
struct ValueCollection_ADictionary_2_Enumerator;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ADictionary_2);
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection);
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::ADictionary_2_Entry);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ADictionary_2, "Rewired.Utils.Classes.Data", "ADictionary`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection, "Rewired.Utils.Classes.Data", "ADictionary`2/KeyCollection");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection, "Rewired.Utils.Classes.Data", "ADictionary`2/ValueCollection");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::ADictionary_2_Entry, "Rewired.Utils.Classes.Data", "ADictionary`2/Entry");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator, "Rewired.Utils.Classes.Data", "ADictionary`2/Enumerator");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator, "Rewired.Utils.Classes.Data", "ADictionary`2/KeyCollection/Enumerator");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator, "Rewired.Utils.Classes.Data", "ADictionary`2/ValueCollection/Enumerator");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/Entry<TKey,TValue>
struct CORDL_TYPE ADictionary_2_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ADictionary_2_Entry() ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
constexpr ADictionary_2_Entry(int32_t  hashCode, int32_t  next, TKey  key, TValue  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  hashCode;

/// @brief Field next, offset: 0x4, size: 0x4, def value: None
 int32_t  next;

/// @brief Field key, offset: 0x8, size: 0x8, def value: None
 TKey  key;

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 TValue  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/Enumerator<TKey,TValue>
struct CORDL_TYPE ADictionary_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  Current;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Entry)) ::System::Collections::DictionaryEntry  System_Collections_IDictionaryEnumerator_Entry;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Key)) ::System::Object*  System_Collections_IDictionaryEnumerator_Key;

 __declspec(property(get=System_Collections_IDictionaryEnumerator_get_Value)) ::System::Object*  System_Collections_IDictionaryEnumerator_Value;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() ;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Key() ;

/// @brief Method System.Collections.IDictionaryEnumerator.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Value() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ADictionary_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "NWZUqNgHeQcgfKRObCFPGxiihqjmA", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "UoefZOFTgBndgcZJCopDDcJwAqSGc", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MURGLbhRpUHxAsuJRdQKRQqRYvuF", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PZSdsDSzjhldYxzKqYOLtcHRbdeU", ty: "::System::Collections::Generic::KeyValuePair_2<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "CAefsiEnyDlJDHJUrqOBfJZlzLZHA", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  NWZUqNgHeQcgfKRObCFPGxiihqjmA, int32_t  UoefZOFTgBndgcZJCopDDcJwAqSGc, int32_t  MURGLbhRpUHxAsuJRdQKRQqRYvuF, ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  PZSdsDSzjhldYxzKqYOLtcHRbdeU, int32_t  CAefsiEnyDlJDHJUrqOBfJZlzLZHA) noexcept;

/// @brief Field DictEntry offset 0xffffffff size 0x4
static constexpr int32_t  DictEntry{static_cast<int32_t>(0x1)};

/// @brief Field KeyValuePair offset 0xffffffff size 0x4
static constexpr int32_t  KeyValuePair{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2999};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field NWZUqNgHeQcgfKRObCFPGxiihqjmA, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  NWZUqNgHeQcgfKRObCFPGxiihqjmA;

/// @brief Field UoefZOFTgBndgcZJCopDDcJwAqSGc, offset: 0x8, size: 0x4, def value: None
 int32_t  UoefZOFTgBndgcZJCopDDcJwAqSGc;

/// @brief Field MURGLbhRpUHxAsuJRdQKRQqRYvuF, offset: 0xc, size: 0x4, def value: None
 int32_t  MURGLbhRpUHxAsuJRdQKRQqRYvuF;

/// @brief Field PZSdsDSzjhldYxzKqYOLtcHRbdeU, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  PZSdsDSzjhldYxzKqYOLtcHRbdeU;

/// @brief Field CAefsiEnyDlJDHJUrqOBfJZlzLZHA, offset: 0x20, size: 0x4, def value: None
 int32_t  CAefsiEnyDlJDHJUrqOBfJZlzLZHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/KeyCollection/Enumerator<TKey,TValue>
struct CORDL_TYPE KeyCollection_ADictionary_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) TKey  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TKey>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TKey get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* i___System__Collections__Generic__IEnumerator_1_TKey_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyCollection_ADictionary_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "IVpHtjxtMavPPCnBQfWccbBnDQWgb", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "EatBKMBseInRGEhVirFssaHayPbFe", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jEOYPhBoSSKudxmlDfsimqRZpXlD", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "QKYOAAUkdfFPhLSPgBrdPaFlwoQn", ty: "TKey", modifiers: "", def_value: None }]
constexpr KeyCollection_ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  IVpHtjxtMavPPCnBQfWccbBnDQWgb, int32_t  EatBKMBseInRGEhVirFssaHayPbFe, int32_t  jEOYPhBoSSKudxmlDfsimqRZpXlD, TKey  QKYOAAUkdfFPhLSPgBrdPaFlwoQn) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3000};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field IVpHtjxtMavPPCnBQfWccbBnDQWgb, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  IVpHtjxtMavPPCnBQfWccbBnDQWgb;

/// @brief Field EatBKMBseInRGEhVirFssaHayPbFe, offset: 0x8, size: 0x4, def value: None
 int32_t  EatBKMBseInRGEhVirFssaHayPbFe;

/// @brief Field jEOYPhBoSSKudxmlDfsimqRZpXlD, offset: 0xc, size: 0x4, def value: None
 int32_t  jEOYPhBoSSKudxmlDfsimqRZpXlD;

/// @brief Field QKYOAAUkdfFPhLSPgBrdPaFlwoQn, offset: 0x10, size: 0x8, def value: None
 TKey  QKYOAAUkdfFPhLSPgBrdPaFlwoQn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/KeyCollection<TKey,TValue>
class CORDL_TYPE ADictionary_2_KeyCollection : public ::System::Object {
public:
// Declarations
using Enumerator = ::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey, TValue>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=bGfpLoqVyyBoacKRChHGKpogYdfq)) bool  System_Collections_Generic_ICollection_TKey__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Field ldXSFijsAzrSXEWoENSNdKRIeDvf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ldXSFijsAzrSXEWoENSNdKRIeDvf, put=__cordl_internal_set_ldXSFijsAzrSXEWoENSNdKRIeDvf)) ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  ldXSFijsAzrSXEWoENSNdKRIeDvf;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
constexpr operator  ::System::Collections::Generic::ICollection_1<TKey>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<TKey>  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue> GetEnumerator() ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* New_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method WVVLjGVbHthSMhdpQKXjtSYmbSew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TKey>* WVVLjGVbHthSMhdpQKXjtSYmbSew() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* const& __cordl_internal_get_ldXSFijsAzrSXEWoENSNdKRIeDvf() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*& __cordl_internal_get_ldXSFijsAzrSXEWoENSNdKRIeDvf() ;

constexpr void __cordl_internal_set_ldXSFijsAzrSXEWoENSNdKRIeDvf(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method bGfpLoqVyyBoacKRChHGKpogYdfq, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool bGfpLoqVyyBoacKRChHGKpogYdfq() ;

/// @brief Method dvslIFVqHIXjbImYFbSBhCPeJfpCA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool dvslIFVqHIXjbImYFbSBhCPeJfpCA(TKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method exJZAxiPDAVDYXdcnUukvHXKCIHr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void exJZAxiPDAVDYXdcnUukvHXKCIHr() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
constexpr ::System::Collections::Generic::ICollection_1<TKey>* i___System__Collections__Generic__ICollection_1_TKey_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method qYprkHOscgGJxIAlCZvHYRMqkWjp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool qYprkHOscgGJxIAlCZvHYRMqkWjp(TKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method tpOZlImeIgbcdFgkLWeWJRhAssnKA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void tpOZlImeIgbcdFgkLWeWJRhAssnKA(TKey  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ADictionary_2_KeyCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2_KeyCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ADictionary_2_KeyCollection(ADictionary_2_KeyCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2_KeyCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ADictionary_2_KeyCollection(ADictionary_2_KeyCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3001};

/// @brief Field ldXSFijsAzrSXEWoENSNdKRIeDvf, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  ___ldXSFijsAzrSXEWoENSNdKRIeDvf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/ValueCollection/Enumerator<TKey,TValue>
struct CORDL_TYPE ValueCollection_ADictionary_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ValueCollection_ADictionary_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "VvbOXOzXVMYlFCpmzAYgJcEwLPiB", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "IkgcnHFvCqnfwCPdXXJHUlXQurjJA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lCttPdLKpxfymbmJdLyhYbDdXoDR", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zlrjWygLiVFRQFRPpGHJQSIyBBPU", ty: "TValue", modifiers: "", def_value: None }]
constexpr ValueCollection_ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  VvbOXOzXVMYlFCpmzAYgJcEwLPiB, int32_t  IkgcnHFvCqnfwCPdXXJHUlXQurjJA, int32_t  lCttPdLKpxfymbmJdLyhYbDdXoDR, TValue  zlrjWygLiVFRQFRPpGHJQSIyBBPU) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field VvbOXOzXVMYlFCpmzAYgJcEwLPiB, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  VvbOXOzXVMYlFCpmzAYgJcEwLPiB;

/// @brief Field IkgcnHFvCqnfwCPdXXJHUlXQurjJA, offset: 0x8, size: 0x4, def value: None
 int32_t  IkgcnHFvCqnfwCPdXXJHUlXQurjJA;

/// @brief Field lCttPdLKpxfymbmJdLyhYbDdXoDR, offset: 0xc, size: 0x4, def value: None
 int32_t  lCttPdLKpxfymbmJdLyhYbDdXoDR;

/// @brief Field zlrjWygLiVFRQFRPpGHJQSIyBBPU, offset: 0x10, size: 0x8, def value: None
 TValue  zlrjWygLiVFRQFRPpGHJQSIyBBPU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2/ValueCollection<TKey,TValue>
class CORDL_TYPE ADictionary_2_ValueCollection : public ::System::Object {
public:
// Declarations
using Enumerator = ::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey, TValue>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=TNKUCTPJTkgpZCayPxMusBYJjdFIb)) bool  System_Collections_Generic_ICollection_TValue__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Field ultXOkqQZPsGulODqDchejTbhJhEb, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ultXOkqQZPsGulODqDchejTbhJhEb, put=__cordl_internal_set_ultXOkqQZPsGulODqDchejTbhJhEb)) ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  ultXOkqQZPsGulODqDchejTbhJhEb;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
constexpr operator  ::System::Collections::Generic::ICollection_1<TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AKqSsIEdOxfkVAMujIPAuZTYYGbeA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool AKqSsIEdOxfkVAMujIPAuZTYYGbeA(TValue  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ANyUzdhznNkbFVgWDzuLRqTBpTFw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ANyUzdhznNkbFVgWDzuLRqTBpTFw(TValue  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<TValue>  array, int32_t  index) ;

/// @brief Method FBSkTiPpGKYviuAFMOvEDvqLpMix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void FBSkTiPpGKYviuAFMOvEDvqLpMix(TValue  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue> GetEnumerator() ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* New_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OIWGlKOdCzQffmcoaSjhkqAnQBix, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* OIWGlKOdCzQffmcoaSjhkqAnQBix() ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TNKUCTPJTkgpZCayPxMusBYJjdFIb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TNKUCTPJTkgpZCayPxMusBYJjdFIb() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* const& __cordl_internal_get_ultXOkqQZPsGulODqDchejTbhJhEb() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*& __cordl_internal_get_ultXOkqQZPsGulODqDchejTbhJhEb() ;

constexpr void __cordl_internal_set_ultXOkqQZPsGulODqDchejTbhJhEb(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
constexpr ::System::Collections::Generic::ICollection_1<TValue>* i___System__Collections__Generic__ICollection_1_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method wTSmRATtvyIhtxjvLLzDrdZqUfWN, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void wTSmRATtvyIhtxjvLLzDrdZqUfWN() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ADictionary_2_ValueCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2_ValueCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ADictionary_2_ValueCollection(ADictionary_2_ValueCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2_ValueCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ADictionary_2_ValueCollection(ADictionary_2_ValueCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3003};

/// @brief Field ultXOkqQZPsGulODqDchejTbhJhEb, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  ___ultXOkqQZPsGulODqDchejTbhJhEb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies Rewired.Utils.Classes.Data.ADictionary`2::Entry<TKey, TValue>, System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ADictionary`2<TKey,TValue>
class CORDL_TYPE ADictionary_2 : public ::System::Object {
public:
// Declarations
using Entry = ::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey, TValue>;

using Enumerator = ::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey, TValue>;

using KeyCollection = ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey, TValue>;

using ValueCollection = ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey, TValue>;

/// @brief Field CeNIYJzQRdpwNeWZVRvUbEYaazCK, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK, put=setStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK)) bool  CeNIYJzQRdpwNeWZVRvUbEYaazCK;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IndexOfFirst)) int32_t  IndexOfFirst;

 __declspec(property(get=get_IndexOfLast)) int32_t  IndexOfLast;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

 __declspec(property(get=get_KeyComparer, put=set_KeyComparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  KeyComparer;

 __declspec(property(get=get_Keys)) ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*  Keys;

/// @brief Field LpxFIFYTWWaJZdTWSbIpVhjCFjUib, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LpxFIFYTWWaJZdTWSbIpVhjCFjUib, put=__cordl_internal_set_LpxFIFYTWWaJZdTWSbIpVhjCFjUib)) ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*  LpxFIFYTWWaJZdTWSbIpVhjCFjUib;

 __declspec(property(get=LpDoeunhyUeKpEMkWeDpheGKDNuzB)) ::System::Collections::Generic::ICollection_1<TKey>*  Rewired_Utils_Interfaces_IReadOnlyDictionary_TKey_TValue__Keys;

 __declspec(property(get=WTjoKambgELjwtIKQBXqsuVyjnkv)) ::System::Collections::Generic::ICollection_1<TValue>*  Rewired_Utils_Interfaces_IReadOnlyDictionary_TKey_TValue__Values;

/// @brief Field SgPXyZZMJNwGIjQOdmAmAVehfUmm, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SgPXyZZMJNwGIjQOdmAmAVehfUmm, put=__cordl_internal_set_SgPXyZZMJNwGIjQOdmAmAVehfUmm)) ::System::Object*  SgPXyZZMJNwGIjQOdmAmAVehfUmm;

/// @brief Field SisCxQfhUnCEBovCyHkpkOBfrPYEb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SisCxQfhUnCEBovCyHkpkOBfrPYEb, put=__cordl_internal_set_SisCxQfhUnCEBovCyHkpkOBfrPYEb)) ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*  SisCxQfhUnCEBovCyHkpkOBfrPYEb;

 __declspec(property(get=NxNBDcSTOdgQCiscOYQcIHtJGUxKA)) bool  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

 __declspec(property(get=YfDSuHZaYTVOIQzCmvXDSiRbsoG)) ::System::Collections::Generic::ICollection_1<TKey>*  System_Collections_Generic_IDictionary_TKey_TValue__Keys;

 __declspec(property(get=BhyHAukjuQcqxGyvqvaYimffGQamA)) ::System::Collections::Generic::ICollection_1<TValue>*  System_Collections_Generic_IDictionary_TKey_TValue__Values;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize)) bool  System_Collections_IDictionary_IsFixedSize;

 __declspec(property(get=System_Collections_IDictionary_get_IsReadOnly)) bool  System_Collections_IDictionary_IsReadOnly;

 __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item)) ::System::Object*  System_Collections_IDictionary_Item[];

 __declspec(property(get=System_Collections_IDictionary_get_Keys)) ::System::Collections::ICollection*  System_Collections_IDictionary_Keys;

 __declspec(property(get=System_Collections_IDictionary_get_Values)) ::System::Collections::ICollection*  System_Collections_IDictionary_Values;

 __declspec(property(get=get_TotalCount)) int32_t  TotalCount;

/// @brief Field UyJCrDxEWEkAYxWJBKCMzdvZOIqe, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_UyJCrDxEWEkAYxWJBKCMzdvZOIqe, put=__cordl_internal_set_UyJCrDxEWEkAYxWJBKCMzdvZOIqe)) ::System::Collections::Generic::IEqualityComparer_1<TValue>*  UyJCrDxEWEkAYxWJBKCMzdvZOIqe;

 __declspec(property(get=get_ValueComparer, put=set_ValueComparer)) ::System::Collections::Generic::IEqualityComparer_1<TValue>*  ValueComparer;

 __declspec(property(get=get_Values)) ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*  Values;

/// @brief Field _count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries, put=__cordl_internal_set__entries)) ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>  _entries;

/// @brief Field cFFijWqVtdCQGOXBxMqrnWXCcqZQ, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cFFijWqVtdCQGOXBxMqrnWXCcqZQ, put=__cordl_internal_set_cFFijWqVtdCQGOXBxMqrnWXCcqZQ)) ::ArrayW<int32_t>  cFFijWqVtdCQGOXBxMqrnWXCcqZQ;

/// @brief Field lZhhwkLlPZjYOCpxxqayCDNRhgpW, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lZhhwkLlPZjYOCpxxqayCDNRhgpW, put=__cordl_internal_set_lZhhwkLlPZjYOCpxxqayCDNRhgpW)) int32_t  lZhhwkLlPZjYOCpxxqayCDNRhgpW;

/// @brief Field nPSPOpsKmVdvBbQqxRrBNIPBWLRm, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_nPSPOpsKmVdvBbQqxRrBNIPBWLRm, put=__cordl_internal_set_nPSPOpsKmVdvBbQqxRrBNIPBWLRm)) int32_t  nPSPOpsKmVdvBbQqxRrBNIPBWLRm;

/// @brief Field sVSNVvCHwCPAdxYqdbKZnniPBRXz, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sVSNVvCHwCPAdxYqdbKZnniPBRXz, put=__cordl_internal_set_sVSNVvCHwCPAdxYqdbKZnniPBRXz)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  sVSNVvCHwCPAdxYqdbKZnniPBRXz;

/// @brief Field ukXOHtSenXBDZGftsNvOMboejccS, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ukXOHtSenXBDZGftsNvOMboejccS, put=__cordl_internal_set_ukXOHtSenXBDZGftsNvOMboejccS)) int32_t  ukXOHtSenXBDZGftsNvOMboejccS;

/// @brief Field yDOFVbQAOporojJgOikCnhSUSBPq, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_yDOFVbQAOporojJgOikCnhSUSBPq, put=setStaticF_yDOFVbQAOporojJgOikCnhSUSBPq)) bool  yDOFVbQAOporojJgOikCnhSUSBPq;

/// @brief Field zFqEmzckBssyvKUBjjYckQrfmjdfA, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_zFqEmzckBssyvKUBjjYckQrfmjdfA, put=__cordl_internal_set_zFqEmzckBssyvKUBjjYckQrfmjdfA)) int32_t  zFqEmzckBssyvKUBjjYckQrfmjdfA;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>"
constexpr operator  ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(TKey  key, TValue  value) ;

/// @brief Method BhyHAukjuQcqxGyvqvaYimffGQamA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TValue>* BhyHAukjuQcqxGyvqvaYimffGQamA() ;

/// @brief Method CXYdABEGtjcHnXWRKDIaKMkCGioHb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool CXYdABEGtjcHnXWRKDIaKMkCGioHb(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsValue(TValue  value) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  index) ;

/// @brief Method ERcpglaArQYEYVJCzNDGKJcPMaeF, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ERcpglaArQYEYVJCzNDGKJcPMaeF(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method EpMdqrLfQnTWniPrwpqeJdjfvHPC, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EpMdqrLfQnTWniPrwpqeJdjfvHPC(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method FZxmrxnLQSCFidxcCqaxbNDReYvp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FZxmrxnLQSCFidxcCqaxbNDReYvp(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetEntryAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> GetEntryAt(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue> GetEnumerator() ;

/// @brief Method GetKeyAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TKey GetKeyAt(int32_t  index) ;

/// @brief Method GetNextEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetNextEntry(::by_ref<int32_t>  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry) ;

/// @brief Method GetNextIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetNextIndex(::by_ref<int32_t>  index) ;

/// @brief Method GetNextIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetNextIndex(int32_t  index) ;

/// @brief Method GetNextKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetNextKey(::by_ref<int32_t>  index, ::by_ref<TKey>  key) ;

/// @brief Method GetNextValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetNextValue(::by_ref<int32_t>  index, ::by_ref<TValue>  value) ;

/// @brief Method GetPreviousEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetPreviousEntry(::by_ref<int32_t>  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry) ;

/// @brief Method GetPreviousIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetPreviousIndex(::by_ref<int32_t>  index) ;

/// @brief Method GetPreviousIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetPreviousIndex(int32_t  index) ;

/// @brief Method GetPreviousKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetPreviousKey(::by_ref<int32_t>  index, ::by_ref<TKey>  key) ;

/// @brief Method GetPreviousValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool GetPreviousValue(::by_ref<int32_t>  index, ::by_ref<TValue>  value) ;

/// @brief Method GetValueAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue GetValueAt(int32_t  index) ;

/// @brief Method GetValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue GetValueSafe(TKey  key) ;

/// @brief Method ITjtvVhERLootmOejuvdyiSPufbh, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ITjtvVhERLootmOejuvdyiSPufbh(TKey  _cordl_fixed_empty_name_whitespace, TValue  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method IndexOfKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOfKey(TKey  key) ;

/// @brief Method IndexOfValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOfValue(TValue  value) ;

/// @brief Method IsValidAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsValidAt(int32_t  index) ;

/// @brief Method IxTAJWzZzQNfqgywRFPpMrDpAvET, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool IxTAJWzZzQNfqgywRFPpMrDpAvET(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LpDoeunhyUeKpEMkWeDpheGKDNuzB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* LpDoeunhyUeKpEMkWeDpheGKDNuzB() ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor() ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method NxNBDcSTOdgQCiscOYQcIHtJGUxKA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool NxNBDcSTOdgQCiscOYQcIHtJGUxKA() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(TKey  key) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RemoveAt(int32_t  index) ;

/// @brief Method SYjGbJcnCmpfehzLBLIBuUuCXykjb, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SYjGbJcnCmpfehzLBLIBuUuCXykjb() ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_Contains(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_Remove(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_get_IsReadOnly() ;

/// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys() ;

/// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetEntryAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetEntryAt(int32_t  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry) ;

/// @brief Method TryGetKeyAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetKeyAt(int32_t  index, ::by_ref<TKey>  key) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

/// @brief Method TryGetValueAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValueAt(int32_t  index, ::by_ref<TValue>  value) ;

/// @brief Method WTjoKambgELjwtIKQBXqsuVyjnkv, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TValue>* WTjoKambgELjwtIKQBXqsuVyjnkv() ;

/// @brief Method WvKdRZFQdiaXZugNwODHBavGhYcI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* WvKdRZFQdiaXZugNwODHBavGhYcI() ;

/// @brief Method YfDSuHZaYTVOIQzCmvXDSiRbsoG, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* YfDSuHZaYTVOIQzCmvXDSiRbsoG() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* const& __cordl_internal_get_LpxFIFYTWWaJZdTWSbIpVhjCFjUib() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*& __cordl_internal_get_LpxFIFYTWWaJZdTWSbIpVhjCFjUib() ;

constexpr ::System::Object* const& __cordl_internal_get_SgPXyZZMJNwGIjQOdmAmAVehfUmm() const;

constexpr ::System::Object*& __cordl_internal_get_SgPXyZZMJNwGIjQOdmAmAVehfUmm() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* const& __cordl_internal_get_SisCxQfhUnCEBovCyHkpkOBfrPYEb() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*& __cordl_internal_get_SisCxQfhUnCEBovCyHkpkOBfrPYEb() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue>* const& __cordl_internal_get_UyJCrDxEWEkAYxWJBKCMzdvZOIqe() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue>*& __cordl_internal_get_UyJCrDxEWEkAYxWJBKCMzdvZOIqe() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>> const& __cordl_internal_get__entries() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>& __cordl_internal_get__entries() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_cFFijWqVtdCQGOXBxMqrnWXCcqZQ() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_cFFijWqVtdCQGOXBxMqrnWXCcqZQ() ;

constexpr int32_t const& __cordl_internal_get_lZhhwkLlPZjYOCpxxqayCDNRhgpW() const;

constexpr int32_t& __cordl_internal_get_lZhhwkLlPZjYOCpxxqayCDNRhgpW() ;

constexpr int32_t const& __cordl_internal_get_nPSPOpsKmVdvBbQqxRrBNIPBWLRm() const;

constexpr int32_t& __cordl_internal_get_nPSPOpsKmVdvBbQqxRrBNIPBWLRm() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_sVSNVvCHwCPAdxYqdbKZnniPBRXz() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_sVSNVvCHwCPAdxYqdbKZnniPBRXz() ;

constexpr int32_t const& __cordl_internal_get_ukXOHtSenXBDZGftsNvOMboejccS() const;

constexpr int32_t& __cordl_internal_get_ukXOHtSenXBDZGftsNvOMboejccS() ;

constexpr int32_t const& __cordl_internal_get_zFqEmzckBssyvKUBjjYckQrfmjdfA() const;

constexpr int32_t& __cordl_internal_get_zFqEmzckBssyvKUBjjYckQrfmjdfA() ;

constexpr void __cordl_internal_set_LpxFIFYTWWaJZdTWSbIpVhjCFjUib(::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_SgPXyZZMJNwGIjQOdmAmAVehfUmm(::System::Object*  value) ;

constexpr void __cordl_internal_set_SisCxQfhUnCEBovCyHkpkOBfrPYEb(::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_UyJCrDxEWEkAYxWJBKCMzdvZOIqe(::System::Collections::Generic::IEqualityComparer_1<TValue>*  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__entries(::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>  value) ;

constexpr void __cordl_internal_set_cFFijWqVtdCQGOXBxMqrnWXCcqZQ(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_lZhhwkLlPZjYOCpxxqayCDNRhgpW(int32_t  value) ;

constexpr void __cordl_internal_set_nPSPOpsKmVdvBbQqxRrBNIPBWLRm(int32_t  value) ;

constexpr void __cordl_internal_set_sVSNVvCHwCPAdxYqdbKZnniPBRXz(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_ukXOHtSenXBDZGftsNvOMboejccS(int32_t  value) ;

constexpr void __cordl_internal_set_zFqEmzckBssyvKUBjjYckQrfmjdfA(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method dLwbIrDeNXEsReVPCWdeTPZNqignb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void dLwbIrDeNXEsReVPCWdeTPZNqignb(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method eBDWCTVNeFJsunIvyNWKuduyVYCT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool eBDWCTVNeFJsunIvyNWKuduyVYCT(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

static inline bool getStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK() ;

static inline bool getStaticF_yDOFVbQAOporojJgOikCnhSUSBPq() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IndexOfFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_IndexOfFirst() ;

/// @brief Method get_IndexOfLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_IndexOfLast() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Item(TKey  key) ;

/// @brief Method get_KeyComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEqualityComparer_1<TKey>* get_KeyComparer() ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* get_Keys() ;

/// @brief Method get_TotalCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_TotalCount() ;

/// @brief Method get_ValueComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEqualityComparer_1<TValue>* get_ValueComparer() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* get_Values() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>"
constexpr ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>* i___Rewired__Utils__Interfaces__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK(bool  value) ;

static inline void setStaticF_yDOFVbQAOporojJgOikCnhSUSBPq(bool  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(TKey  key, TValue  value) ;

/// @brief Method set_KeyComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_KeyComparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

/// @brief Method set_ValueComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ValueComparer(::System::Collections::Generic::IEqualityComparer_1<TValue>*  value) ;

/// @brief Method wFybkKERowSdLTnQuFWbdKDvfXqaA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline void wFybkKERowSdLTnQuFWbdKDvfXqaA(::System::Object*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ADictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ADictionary_2(ADictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ADictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ADictionary_2(ADictionary_2 const& ) = delete;

/// @brief Field BPKCZAMIXjKXrKdMpgZPCUmLxTCLA offset 0xffffffff size 0x8
static constexpr ::ConstString  BPKCZAMIXjKXrKdMpgZPCUmLxTCLA{u"HashSize"};

/// @brief Field GbpGYkGUsXPvxnYZxbtILjDSVOIpA offset 0xffffffff size 0x8
static constexpr ::ConstString  GbpGYkGUsXPvxnYZxbtILjDSVOIpA{u"KeyValuePairs"};

/// @brief Field HvrtbidFOtBtaEgPaGVlJKgCTDfNA offset 0xffffffff size 0x8
static constexpr ::ConstString  HvrtbidFOtBtaEgPaGVlJKgCTDfNA{u"Version"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3004};

/// @brief Field wXulHwdrevHLMvemLCoZOPNVBqrT offset 0xffffffff size 0x8
static constexpr ::ConstString  wXulHwdrevHLMvemLCoZOPNVBqrT{u"Comparer"};

/// @brief Field cFFijWqVtdCQGOXBxMqrnWXCcqZQ, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___cFFijWqVtdCQGOXBxMqrnWXCcqZQ;

/// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>  ____entries;

/// @brief Field _count, offset: 0x20, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field ukXOHtSenXBDZGftsNvOMboejccS, offset: 0x24, size: 0x4, def value: None
 int32_t  ___ukXOHtSenXBDZGftsNvOMboejccS;

/// @brief Field nPSPOpsKmVdvBbQqxRrBNIPBWLRm, offset: 0x28, size: 0x4, def value: None
 int32_t  ___nPSPOpsKmVdvBbQqxRrBNIPBWLRm;

/// @brief Field lZhhwkLlPZjYOCpxxqayCDNRhgpW, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___lZhhwkLlPZjYOCpxxqayCDNRhgpW;

/// @brief Field zFqEmzckBssyvKUBjjYckQrfmjdfA, offset: 0x30, size: 0x4, def value: None
 int32_t  ___zFqEmzckBssyvKUBjjYckQrfmjdfA;

/// @brief Field sVSNVvCHwCPAdxYqdbKZnniPBRXz, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___sVSNVvCHwCPAdxYqdbKZnniPBRXz;

/// @brief Field UyJCrDxEWEkAYxWJBKCMzdvZOIqe, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TValue>*  ___UyJCrDxEWEkAYxWJBKCMzdvZOIqe;

/// @brief Field SisCxQfhUnCEBovCyHkpkOBfrPYEb, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*  ___SisCxQfhUnCEBovCyHkpkOBfrPYEb;

/// @brief Field LpxFIFYTWWaJZdTWSbIpVhjCFjUib, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*  ___LpxFIFYTWWaJZdTWSbIpVhjCFjUib;

/// @brief Field SgPXyZZMJNwGIjQOdmAmAVehfUmm, offset: 0x58, size: 0x8, def value: None
 ::System::Object*  ___SgPXyZZMJNwGIjQOdmAmAVehfUmm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
