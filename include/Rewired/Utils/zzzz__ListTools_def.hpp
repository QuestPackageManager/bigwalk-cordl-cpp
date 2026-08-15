#pragma once
// IWYU pragma private; include "Rewired/Utils/ListTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListTools)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Rewired::Utils {
class ListTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::ListTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ListTools*, "Rewired.Utils", "ListTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.ListTools
class CORDL_TYPE ListTools : public ::System::Object {
public:
// Declarations
/// @brief Method AddAndCreateList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t AddAndCreateList(::by_ref<::System::Collections::Generic::IList_1<T>*>  list, T  item) ;

/// @brief Method AddIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool AddIfUnique(::System::Collections::Generic::IList_1<T>*  list, T  item) ;

/// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* Combine(::System::Collections::Generic::IList_1<T>*  list1, ::System::Collections::Generic::IList_1<T>*  list2) ;

/// @brief Method Concat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Concat(::System::Collections::Generic::IList_1<T>*  list1, ::System::Collections::Generic::IList_1<T>*  list2) ;

/// @brief Method ConvertToObjeclist, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<::System::Object*>* ConvertToObjeclist(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CopyTo(::System::Collections::Generic::IList_1<T>*  fromList, ::System::Collections::Generic::IList_1<T>*  toList) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CopyTo(::System::Collections::Generic::IList_1<T>*  fromList, ::System::Collections::Generic::IList_1<T>*  toList, int32_t  fromListStartIndex) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CopyTo(::System::Collections::Generic::IList_1<T>*  fromList, ::System::Collections::Generic::IList_1<T>*  toList, int32_t  fromListStartIndex, int32_t  count) ;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t Count(::System::Collections::Generic::IList_1<T>*  list, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Find(::System::Collections::Generic::IList_1<T>*  list, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t FindIndex(::System::Collections::Generic::IList_1<T>*  list, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method GawHkGcahutfGOjkvziWxmReAxhhA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline bool GawHkGcahutfGOjkvziWxmReAxhhA(::System::Collections::Generic::IList_1<>*  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrEmpty(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method OffsetAtIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool OffsetAtIndex(::System::Collections::Generic::IList_1<T>*  list, int32_t  index, bool  offsetDown, bool  offsetNow) ;

/// @brief Method ShallowCopy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* ShallowCopy(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ToArray(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method TryClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void TryClear(::System::Collections::Generic::IList_1<T>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListTools(ListTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListTools(ListTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::ListTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
