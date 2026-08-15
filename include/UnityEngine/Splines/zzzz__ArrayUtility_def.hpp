#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ArrayUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtility)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::Splines {
class ArrayUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ArrayUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ArrayUtility*, "UnityEngine.Splines", "ArrayUtility");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.ArrayUtility
class CORDL_TYPE ArrayUtility : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Add(::by_ref<::ArrayW<T>>  array, T  element) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Remove(::by_ref<::ArrayW<T>>  array, T  element) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveAt(::by_ref<::ArrayW<T>>  array, int32_t  index) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveAt(::by_ref<::ArrayW<T>>  array, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method SortedRemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SortedRemoveAt(::by_ref<::ArrayW<T>>  array, ::System::Collections::Generic::IList_1<int32_t>*  sorted) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayUtility(ArrayUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayUtility(ArrayUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::ArrayUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
