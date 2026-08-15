#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/LockedObject_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LockedObject_1)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class LockedObject_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::LockedObject_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::LockedObject_1, "Rewired.Utils.Classes.Utility", "LockedObject`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.LockedObject`1<T>
class CORDL_TYPE LockedObject_1 : public ::System::Object {
public:
// Declarations
/// @brief Field DNhlWcNjpqQLwZdKRbqPajuWnWPHA, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_DNhlWcNjpqQLwZdKRbqPajuWnWPHA, put=__cordl_internal_set_DNhlWcNjpqQLwZdKRbqPajuWnWPHA)) bool  DNhlWcNjpqQLwZdKRbqPajuWnWPHA;

/// @brief Field item, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) T  item;

/// @brief Field kuYoptQMkRYJZoFPRxOZYXpCVQgy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_kuYoptQMkRYJZoFPRxOZYXpCVQgy, put=__cordl_internal_set_kuYoptQMkRYJZoFPRxOZYXpCVQgy)) ::System::Object*  kuYoptQMkRYJZoFPRxOZYXpCVQgy;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Lock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Lock() ;

static inline ::Rewired::Utils::Classes::Utility::LockedObject_1<T>* New_ctor() ;

static inline ::Rewired::Utils::Classes::Utility::LockedObject_1<T>* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Unlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Unlock() ;

constexpr bool const& __cordl_internal_get_DNhlWcNjpqQLwZdKRbqPajuWnWPHA() const;

constexpr bool& __cordl_internal_get_DNhlWcNjpqQLwZdKRbqPajuWnWPHA() ;

constexpr T const& __cordl_internal_get_item() const;

constexpr T& __cordl_internal_get_item() ;

constexpr ::System::Object* const& __cordl_internal_get_kuYoptQMkRYJZoFPRxOZYXpCVQgy() const;

constexpr ::System::Object*& __cordl_internal_get_kuYoptQMkRYJZoFPRxOZYXpCVQgy() ;

constexpr void __cordl_internal_set_DNhlWcNjpqQLwZdKRbqPajuWnWPHA(bool  value) ;

constexpr void __cordl_internal_set_item(T  value) ;

constexpr void __cordl_internal_set_kuYoptQMkRYJZoFPRxOZYXpCVQgy(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LockedObject_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LockedObject_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LockedObject_1(LockedObject_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockedObject_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockedObject_1(LockedObject_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2973};

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 T  ___item;

/// @brief Field kuYoptQMkRYJZoFPRxOZYXpCVQgy, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___kuYoptQMkRYJZoFPRxOZYXpCVQgy;

/// @brief Field DNhlWcNjpqQLwZdKRbqPajuWnWPHA, offset: 0x20, size: 0x1, def value: None
 bool  ___DNhlWcNjpqQLwZdKRbqPajuWnWPHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
