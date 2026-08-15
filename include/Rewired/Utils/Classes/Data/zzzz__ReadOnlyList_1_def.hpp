#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ReadOnlyList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyList_1)
namespace Rewired::Utils::Interfaces {
template<typename T>
class IReadOnlyList_1;
}
namespace Rewired::Utils::Interfaces {
class IReadOnlyList;
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class ReadOnlyList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ReadOnlyList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ReadOnlyList_1, "Rewired.Utils.Classes.Data", "ReadOnlyList`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ReadOnlyList`1<T>
class CORDL_TYPE ReadOnlyList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=YGasPiJmZEwzOJSNdettgOCmDUKiA)) ::System::Object*  Rewired_Utils_Interfaces_IReadOnlyList_Item[];

/// @brief Field vmCuFyYOibsGIZzHmMSxZKAekxLv, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_vmCuFyYOibsGIZzHmMSxZKAekxLv, put=__cordl_internal_set_vmCuFyYOibsGIZzHmMSxZKAekxLv)) ::System::Collections::Generic::IList_1<T>*  vmCuFyYOibsGIZzHmMSxZKAekxLv;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyList"
constexpr operator  ::Rewired::Utils::Interfaces::IReadOnlyList*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyList_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::IReadOnlyList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  value) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::System::Collections::Generic::IList_1<T>*  destination) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  value) ;

static inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<T>* New_ctor(::Rewired::Utils::Classes::Data::ReadOnlyList_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method XWWSaDBeQjYMKjXjQGrBrnLrbcQhA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* XWWSaDBeQjYMKjXjQGrBrnLrbcQhA() ;

/// @brief Method YGasPiJmZEwzOJSNdettgOCmDUKiA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* YGasPiJmZEwzOJSNdettgOCmDUKiA(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Collections::Generic::IList_1<T>* const& __cordl_internal_get_vmCuFyYOibsGIZzHmMSxZKAekxLv() const;

constexpr ::System::Collections::Generic::IList_1<T>*& __cordl_internal_get_vmCuFyYOibsGIZzHmMSxZKAekxLv() ;

constexpr void __cordl_internal_set_vmCuFyYOibsGIZzHmMSxZKAekxLv(::System::Collections::Generic::IList_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::ReadOnlyList_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyList"
constexpr ::Rewired::Utils::Interfaces::IReadOnlyList* i___Rewired__Utils__Interfaces__IReadOnlyList() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyList_1<T>"
constexpr ::Rewired::Utils::Interfaces::IReadOnlyList_1<T>* i___Rewired__Utils__Interfaces__IReadOnlyList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method kENlnJhZdaVgDErDfMJrEqkmPLMN, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t kENlnJhZdaVgDErDfMJrEqkmPLMN(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nSkPQHdajRBDYitEgqKLdvajfxlqA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool nSkPQHdajRBDYitEgqKLdvajfxlqA(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyList_1(ReadOnlyList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyList_1(ReadOnlyList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3018};

/// @brief Field vmCuFyYOibsGIZzHmMSxZKAekxLv, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<T>*  ___vmCuFyYOibsGIZzHmMSxZKAekxLv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
