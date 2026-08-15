#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/GenericListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericListExtensions)
namespace Shipmate::Utils::Extensions {
template<typename T>
class GenericListExtensions___c__DisplayClass40_0_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
// Forward declare root types
namespace Shipmate::Utils::Extensions {
class GenericListExtensions;
}
namespace Shipmate::Utils::Extensions {
template<typename T>
class GenericListExtensions___c__DisplayClass40_0_1;
}
// Write type traits
MARK_REF_T(::Shipmate::Utils::Extensions::GenericListExtensions*);
MARK_GEN_REF_T_PTR(::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1);
DEFINE_IL2CPP_CLASS(::Shipmate::Utils::Extensions::GenericListExtensions*, "Shipmate.Utils.Extensions", "GenericListExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1, "Shipmate.Utils.Extensions", "GenericListExtensions/<>c__DisplayClass40_0`1");
// Dependencies System.Object
namespace Shipmate::Utils::Extensions {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Shipmate.Utils.Extensions.GenericListExtensions/<>c__DisplayClass40_0`1<T>
class CORDL_TYPE GenericListExtensions___c__DisplayClass40_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field copy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_copy, put=__cordl_internal_set_copy)) ::System::Collections::Generic::List_1<T>*  copy;

static inline ::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>* New_ctor() ;

/// @brief Method <CopyList>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _CopyList_b__0(T  item) ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_copy() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_copy() ;

constexpr void __cordl_internal_set_copy(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericListExtensions___c__DisplayClass40_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericListExtensions___c__DisplayClass40_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericListExtensions___c__DisplayClass40_0_1(GenericListExtensions___c__DisplayClass40_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericListExtensions___c__DisplayClass40_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericListExtensions___c__DisplayClass40_0_1(GenericListExtensions___c__DisplayClass40_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21381};

/// @brief Field copy, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___copy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Utils::Extensions
// Dependencies System.Object
namespace Shipmate::Utils::Extensions {
// Is value type: false
// CS Name: Shipmate.Utils.Extensions.GenericListExtensions
class CORDL_TYPE GenericListExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using __c__DisplayClass40_0_1 = ::Shipmate::Utils::Extensions::GenericListExtensions___c__DisplayClass40_0_1<T>;

/// @brief Method CopyList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* CopyList(::System::Collections::Generic::List_1<T>*  aList) ;

/// @brief Method CustomAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomAll(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename Y>
static inline bool CustomAll(::ArrayW<T>  aList, ::System::Func_3<T,Y,bool>*  aFindFunc, Y  aParameter) ;

/// @brief Method CustomAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomAll(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename Y>
static inline bool CustomAll(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,Y,bool>*  aFindFunc, Y  aParameter) ;

/// @brief Method CustomAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomAny(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline bool CustomAny(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aParameter) ;

/// @brief Method CustomAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomAny(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline bool CustomAny(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aParameter) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomContains(::ArrayW<T>  aList, T  aToFind) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomContains(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aToFindFunc) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline bool CustomContains(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aToFindFunc, U  aToFind) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomContains(::System::Collections::Generic::List_1<T>*  aList, T  aToFind) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool CustomContains(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aToFindFunc) ;

/// @brief Method CustomContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline bool CustomContains(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aToFindFunc, U  aToFind) ;

/// @brief Method CustomCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t CustomCount(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline int32_t CustomCount(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aToFind) ;

/// @brief Method CustomFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CustomFirstOrDefault(::ArrayW<T>  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline T CustomFirstOrDefault(::ArrayW<T>  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aCustomParameter) ;

/// @brief Method CustomFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aFindFunc) ;

/// @brief Method CustomFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline T CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aFindFunc, U  aCustomParameter) ;

/// @brief Method CustomFirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U,typename V>
static inline T CustomFirstOrDefault(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_4<T,U,V,bool>*  aFindFunc, U  aCustomParam1, V  aCustomParam2) ;

/// @brief Method CustomForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CustomForEach(::ArrayW<T>  aList, ::System::Action_1<T>*  aActionToApplyToList) ;

/// @brief Method CustomForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void CustomForEach(::ArrayW<T>  aList, ::System::Action_2<T,U>*  aActionToApplyToList, U  aParameter) ;

/// @brief Method CustomForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U,typename V>
static inline void CustomForEach(::ArrayW<T>  aList, ::System::Action_3<T,U,V>*  aActionToApplyToList, U  aParam1, V  aParam2) ;

/// @brief Method CustomForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CustomForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_1<T>*  aActionToApplyToList) ;

/// @brief Method CustomForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline void CustomForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_2<T,U>*  aActionToApplyToList, U  aParameter) ;

/// @brief Method CustomInvertedForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CustomInvertedForEach(::ArrayW<T>  aList, ::System::Action_1<T>*  aActionToApplyToList) ;

/// @brief Method CustomInvertedForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CustomInvertedForEach(::System::Collections::Generic::List_1<T>*  aList, ::System::Action_1<T>*  aActionToApplyToList) ;

/// @brief Method CustomSelect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename Y>
static inline ::System::Collections::Generic::List_1<Y>* CustomSelect(::System::Collections::Generic::IList_1<T>*  aList, ::System::Func_2<T,Y>*  aWhereFunc) ;

/// @brief Method CustomSelectNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline void CustomSelectNonAlloc(::System::Collections::Generic::IList_1<T1>*  aList, ::System::Collections::Generic::List_1<T3>*  aListToFill, ::System::Func_3<T1,T2,T3>*  aWhereFunc, T2  aParam) ;

/// @brief Method CustomWhere, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* CustomWhere(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aWhereFunc) ;

/// @brief Method CustomWhereNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename Y>
static inline void CustomWhereNonAlloc(::System::Collections::Generic::List_1<T>*  aList, ::System::Collections::Generic::List_1<T>*  aListToFill, ::System::Func_3<T,Y,bool>*  aWhereFunc, Y  aParam) ;

/// @brief Method GetRandomItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetRandomItem(::ArrayW<T>  aArray) ;

/// @brief Method GetRandomItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetRandomItem(::System::Collections::Generic::List_1<T>*  aList) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_2<T,bool>*  aValidator) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline int32_t IndexOf(::System::Collections::Generic::List_1<T>*  aList, ::System::Func_3<T,U,bool>*  aValidator, U  aParameter) ;

/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Pop(::System::Collections::Generic::List_1<T>*  aList) ;

/// @brief Method Shift, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Shift(::System::Collections::Generic::List_1<T>*  aList) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::ArrayW<T>  list) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::ArrayW<T>  list, int32_t  seed) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::List_1<T>*  list, int32_t  seed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericListExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericListExtensions(GenericListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericListExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericListExtensions(GenericListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Utils::Extensions::GenericListExtensions) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Utils::Extensions
