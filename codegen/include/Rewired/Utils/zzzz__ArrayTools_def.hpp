#pragma once
// IWYU pragma private; include "Rewired/Utils/ArrayTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayTools)
namespace System {
class Array;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
struct StringComparison;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace Rewired::Utils {
class ArrayTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::ArrayTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ArrayTools*, "Rewired.Utils", "ArrayTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.ArrayTools
class CORDL_TYPE ArrayTools : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Add(::ArrayW<T>  array, T  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t Add(::by_ref<::ArrayW<T>>  array, T  item) ;

/// @brief Method AddIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> AddIfUnique(::ArrayW<T>  array, T  item) ;

/// @brief Method AddIfUnique, addr 0x181901070, size 0xc0, virtual false, abstract: false, final false
static inline int32_t AddIfUnique(::by_ref<::ArrayW<::StringW>>  array, ::StringW  item, bool  ignoreCase) ;

/// @brief Method AddIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t AddIfUnique(::by_ref<::ArrayW<T>>  array, T  item) ;

/// @brief Method Combine, addr 0x181901130, size 0x150, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> Combine(::ArrayW<::StringW>  inArray1, ::ArrayW<::StringW>  inArray2) ;

/// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Combine(::ArrayW<T>  array1, ::ArrayW<T>  array2) ;

/// @brief Method Combine, addr 0x181901370, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> Combine(::ArrayW<float_t>  inArray1, ::ArrayW<float_t>  inArray2) ;

/// @brief Method Combine, addr 0x181901280, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> Combine(::ArrayW<int32_t>  inArray1, ::ArrayW<int32_t>  inArray2) ;

/// @brief Method Combine, addr 0x181901460, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Combine(::ArrayW<uint8_t>  inArray1, ::ArrayW<uint8_t>  inArray2) ;

/// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Combine(::by_ref<::ArrayW<T>>  array1, ::ArrayW<T>  array2) ;

/// @brief Method Compact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Compact(::by_ref<::ArrayW<T>>  array) ;

/// @brief Method Contains, addr 0x181901560, size 0xa0, virtual false, abstract: false, final false
static inline bool Contains(::ArrayW<::StringW>  array, ::StringW  item, bool  ignoreCase) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool Contains(::ArrayW<T>  array, T  item) ;

/// @brief Method ConvertToIntArray, addr 0x181901600, size 0x1f0, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> ConvertToIntArray(::System::Array*  array) ;

/// @brief Method CopyRange, addr 0x181901930, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> CopyRange(::ArrayW<::StringW>  inArray, int32_t  startPos, int32_t  length) ;

/// @brief Method CopyRange, addr 0x1819019f0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> CopyRange(::ArrayW<float_t>  inArray, int32_t  startPos, int32_t  length) ;

/// @brief Method CopyRange, addr 0x1819017f0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> CopyRange(::ArrayW<int32_t>  inArray, int32_t  startPos, int32_t  length) ;

/// @brief Method CopyRange, addr 0x181901890, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CopyRange(::ArrayW<uint8_t>  inArray, int32_t  startPos, int32_t  length) ;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t Count(::ArrayW<T>  array, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method DeepClone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> DeepClone(::ArrayW<T>  array) ;

/// @brief Method Expand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Expand(::by_ref<::ArrayW<T>>  array, int32_t  length) ;

/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Fill(::ArrayW<T>  array, T  value) ;

/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Fill(::ArrayW<T>  array, T  value, int32_t  startIndex) ;

/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Fill(::ArrayW<T>  array, T  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Find(::ArrayW<T>  array, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method IndexOf, addr 0x181901b20, size 0x70, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<::StringW>  array, ::StringW  value) ;

/// @brief Method IndexOf, addr 0x181901bf0, size 0x90, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<::StringW>  array, ::StringW  value, ::System::StringComparison  stringComparison) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::ArrayW<T>  array, T  item) ;

/// @brief Method IndexOf, addr 0x181901b90, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<bool>  array, bool  value) ;

/// @brief Method IndexOf, addr 0x181901a90, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<double_t>  array, double_t  value) ;

/// @brief Method IndexOf, addr 0x181901bc0, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<float_t>  array, float_t  value) ;

/// @brief Method IndexOf, addr 0x181901af0, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<int16_t>  array, int16_t  value) ;

/// @brief Method IndexOf, addr 0x181901ac0, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<int32_t>  array, int32_t  value) ;

/// @brief Method IndexOf, addr 0x181901af0, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<uint16_t>  array, uint16_t  value) ;

/// @brief Method IndexOf, addr 0x181901ac0, size 0x30, virtual false, abstract: false, final false
static inline int32_t IndexOf(::ArrayW<uint32_t>  array, uint32_t  value) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Insert(::ArrayW<T>  array, int32_t  index, T  item) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t Insert(::by_ref<::ArrayW<T>>  array, int32_t  index, T  item) ;

/// @brief Method IsEqual, addr 0x181901c80, size 0x60, virtual false, abstract: false, final false
static inline bool IsEqual(::ArrayW<uint8_t>  a1, ::ArrayW<uint8_t>  a2) ;

/// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrEmpty(::ArrayW<T>  array) ;

/// @brief Method MoveEntryDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void MoveEntryDown(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method MoveEntryUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void MoveEntryUp(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method ParseArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ParseArray(::StringW  line) ;

/// @brief Method Populate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Populate(::ArrayW<T>  array) ;

/// @brief Method Populate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Populate(::ArrayW<T>  array, ::System::Func_1<T>*  instantiator) ;

/// @brief Method Populate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Populate(::ArrayW<T>  array, int32_t  startIndex, int32_t  length) ;

/// @brief Method Populate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Populate(::ArrayW<T>  array, int32_t  startIndex, int32_t  length, ::System::Func_1<T>*  instantiator) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Remove(::ArrayW<T>  array, T  item) ;

/// @brief Method Remove, addr 0x181901e10, size 0x130, virtual false, abstract: false, final false
static inline bool Remove(::by_ref<::ArrayW<::StringW>>  array, ::StringW  item, bool  ignoreCase) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool Remove(::by_ref<::ArrayW<T>>  array, T  item) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> RemoveAt(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool RemoveAt(::by_ref<::ArrayW<T>>  array, int32_t  index) ;

/// @brief Method RemoveDuplicates, addr 0x181901ce0, size 0x130, virtual false, abstract: false, final false
static inline void RemoveDuplicates(::by_ref<::ArrayW<::StringW>>  array, bool  ignoreCase) ;

/// @brief Method ShallowCopy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ShallowCopy(::ArrayW<T>  array) ;

/// @brief Method ShallowCopy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ShallowCopy(::ArrayW<T>  sourceArray, ::ArrayW<T>  targetArray) ;

/// @brief Method ShallowCopy, addr 0x1806d17d0, size 0x37de0, virtual false, abstract: false, final false
static inline void ShallowCopy(::ArrayW<bool>  sourceArray, ::ArrayW<bool>  targetArray) ;

/// @brief Method ShallowCopy, addr 0x1806d17d0, size 0x37de0, virtual false, abstract: false, final false
static inline void ShallowCopy(::ArrayW<float_t>  sourceArray, ::ArrayW<float_t>  targetArray) ;

/// @brief Method ShallowCopy, addr 0x1806d17d0, size 0x37de0, virtual false, abstract: false, final false
static inline void ShallowCopy(::ArrayW<int32_t>  sourceArray, ::ArrayW<int32_t>  targetArray) ;

/// @brief Method SortAscending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> SortAscending(::ArrayW<T>  array, ::by_ref<::ArrayW<int32_t>>  sortedIndices) ;

/// @brief Method SortDescending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> SortDescending(::ArrayW<T>  array, ::by_ref<::ArrayW<int32_t>>  sortedIndices, bool  ascending) ;

/// @brief Method SortNearToFar, addr 0x181901f40, size 0x200, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> SortNearToFar(::ArrayW<::UnityEngine::RaycastHit>  hits) ;

/// @brief Method SubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SubArray(::by_ref<::ArrayW<T>>  array, int32_t  startIndex) ;

/// @brief Method SubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SubArray(::by_ref<::ArrayW<T>>  array, int32_t  startIndex, int32_t  count) ;

/// @brief Method ToBitmask, addr 0x181902140, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ToBitmask(::ArrayW<bool>  array, int32_t  startIndex, int32_t  count) ;

/// @brief Method ToLowerStripSpaces, addr 0x181902200, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> ToLowerStripSpaces(::ArrayW<::StringW>  array) ;

/// @brief Method Trim, addr 0x1819022e0, size 0x70, virtual false, abstract: false, final false
static inline void Trim(::ArrayW<::StringW>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayTools(ArrayTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayTools(ArrayTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::ArrayTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
