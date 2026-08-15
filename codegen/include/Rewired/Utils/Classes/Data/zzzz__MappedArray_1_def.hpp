#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/MappedArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MappedArray_1)
namespace Rewired::Utils::Classes::Data {
template<typename >
struct MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam;
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
class Array;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class MappedArray_1;
}
namespace Rewired::Utils::Classes::Data {
template<typename >
struct MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::MappedArray_1);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::MappedArray_1, "Rewired.Utils.Classes.Data", "MappedArray`1");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam, "Rewired.Utils.Classes.Data", "MappedArray`1/dGyyifdYPlfyMnVujBNOjgzRhZam");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename >
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.MappedArray`1/dGyyifdYPlfyMnVujBNOjgzRhZam<>
struct CORDL_TYPE MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam {
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

/// @brief Method ElLCspAJZfCAWZLsrjlZXOhFWNg, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ElLCspAJZfCAWZLsrjlZXOhFWNg() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::MappedArray_1<>*  _cordl_fixed_empty_name_whitespace) ;

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
constexpr MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam() ;

// Ctor Parameters [CppParam { name: "array", ty: "::Rewired::Utils::Classes::Data::MappedArray_1<\u{1}>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty: "\u{1}", modifiers: "", def_value: None }]
constexpr MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam(::Rewired::Utils::Classes::Data::MappedArray_1<>*  array, int32_t  index, int32_t  version,   current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field array, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::MappedArray_1<>*  array;

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
// CS Name: Rewired.Utils.Classes.Data.MappedArray`1<T>
class CORDL_TYPE MappedArray_1 : public ::System::Object {
public:
// Declarations
using dGyyifdYPlfyMnVujBNOjgzRhZam = ::Rewired::Utils::Classes::Data::MappedArray_1_dGyyifdYPlfyMnVujBNOjgzRhZam<T>;

/// @brief Field FVdtewAkgjZwNYeLmjAOXJVwMQeF, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FVdtewAkgjZwNYeLmjAOXJVwMQeF, put=__cordl_internal_set_FVdtewAkgjZwNYeLmjAOXJVwMQeF)) ::System::Func_2<int32_t,int32_t>*  FVdtewAkgjZwNYeLmjAOXJVwMQeF;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field NFMXnWbDaBSLZkHFEmbmXkApFblA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NFMXnWbDaBSLZkHFEmbmXkApFblA, put=__cordl_internal_set_NFMXnWbDaBSLZkHFEmbmXkApFblA)) ::ArrayW<T>  NFMXnWbDaBSLZkHFEmbmXkApFblA;

 __declspec(property(get=sieEGRbnEPAzQkpqZXPHemNtgWseb)) int32_t  System_Collections_Generic_ICollection_T__Count;

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=get_indexMap, put=set_indexMap)) ::System::Func_2<int32_t,int32_t>*  indexMap;

/// @brief Field zHrdhSSWAoyxFXgZgnrxHPqQuoLp, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_zHrdhSSWAoyxFXgZgnrxHPqQuoLp, put=__cordl_internal_set_zHrdhSSWAoyxFXgZgnrxHPqQuoLp)) int32_t  zHrdhSSWAoyxFXgZgnrxHPqQuoLp;

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

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  item) ;

static inline ::Rewired::Utils::Classes::Data::MappedArray_1<T>* New_ctor(::ArrayW<T>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method QfIlaRypgDgWyDPQnAbXnRNEIwTP, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void QfIlaRypgDgWyDPQnAbXnRNEIwTP(int32_t  _cordl_fixed_empty_name_whitespace, T  _cordl_fixed_empty_name_whitespace_param_1) ;

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

/// @brief Method System.Collections.IList.RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

constexpr ::System::Func_2<int32_t,int32_t>* const& __cordl_internal_get_FVdtewAkgjZwNYeLmjAOXJVwMQeF() const;

constexpr ::System::Func_2<int32_t,int32_t>*& __cordl_internal_get_FVdtewAkgjZwNYeLmjAOXJVwMQeF() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_NFMXnWbDaBSLZkHFEmbmXkApFblA() const;

constexpr ::ArrayW<T>& __cordl_internal_get_NFMXnWbDaBSLZkHFEmbmXkApFblA() ;

constexpr int32_t const& __cordl_internal_get_zHrdhSSWAoyxFXgZgnrxHPqQuoLp() const;

constexpr int32_t& __cordl_internal_get_zHrdhSSWAoyxFXgZgnrxHPqQuoLp() ;

constexpr void __cordl_internal_set_FVdtewAkgjZwNYeLmjAOXJVwMQeF(::System::Func_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_NFMXnWbDaBSLZkHFEmbmXkApFblA(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_zHrdhSSWAoyxFXgZgnrxHPqQuoLp(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method gXYyHVCPBebIwbeTMxNQljoKGSVM, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void gXYyHVCPBebIwbeTMxNQljoKGSVM(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_indexMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Func_2<int32_t,int32_t>* get_indexMap() ;

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

/// @brief Method nVKcvIbLsENGNLbjxBMNJLnZgbQjA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool nVKcvIbLsENGNLbjxBMNJLnZgbQjA(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method set_indexMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_indexMap(::System::Func_2<int32_t,int32_t>*  value) ;

/// @brief Method sieEGRbnEPAzQkpqZXPHemNtgWseb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t sieEGRbnEPAzQkpqZXPHemNtgWseb() ;

/// @brief Method skNQfpZeGXFZPQNcBevRiTREDJQlA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t skNQfpZeGXFZPQNcBevRiTREDJQlA(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MappedArray_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MappedArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MappedArray_1(MappedArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MappedArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MappedArray_1(MappedArray_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3020};

/// @brief Field NFMXnWbDaBSLZkHFEmbmXkApFblA, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___NFMXnWbDaBSLZkHFEmbmXkApFblA;

/// @brief Field zHrdhSSWAoyxFXgZgnrxHPqQuoLp, offset: 0x18, size: 0x4, def value: None
 int32_t  ___zHrdhSSWAoyxFXgZgnrxHPqQuoLp;

/// @brief Field FVdtewAkgjZwNYeLmjAOXJVwMQeF, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<int32_t,int32_t>*  ___FVdtewAkgjZwNYeLmjAOXJVwMQeF;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
