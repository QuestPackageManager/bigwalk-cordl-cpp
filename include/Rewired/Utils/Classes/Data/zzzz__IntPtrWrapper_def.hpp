#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntPtrWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IntPtrWrapper)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class IntPtrWrapper;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::IntPtrWrapper*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::IntPtrWrapper*, "Rewired.Utils.Classes.Data", "IntPtrWrapper");
// Dependencies System.IntPtr, System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.IntPtrWrapper
class CORDL_TYPE IntPtrWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field eFQKlqkUirJQBbOBJAQfWmfdtFct, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_eFQKlqkUirJQBbOBJAQfWmfdtFct, put=__cordl_internal_set_eFQKlqkUirJQBbOBJAQfWmfdtFct)) ::System::IntPtr  eFQKlqkUirJQBbOBJAQfWmfdtFct;

/// @brief Method Clear, addr 0x1819541b0, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::Utils::Classes::Data::IntPtrWrapper* New_ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::IntPtr const& __cordl_internal_get_eFQKlqkUirJQBbOBJAQfWmfdtFct() const;

constexpr ::System::IntPtr& __cordl_internal_get_eFQKlqkUirJQBbOBJAQfWmfdtFct() ;

constexpr void __cordl_internal_set_eFQKlqkUirJQBbOBJAQfWmfdtFct(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_IsValid, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method op_Implicit, addr 0x180912770, size 0x59cf0, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Data::IntPtrWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntPtrWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntPtrWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntPtrWrapper(IntPtrWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntPtrWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntPtrWrapper(IntPtrWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3039};

/// @brief Field eFQKlqkUirJQBbOBJAQfWmfdtFct, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___eFQKlqkUirJQBbOBJAQfWmfdtFct;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::IntPtrWrapper, ___eFQKlqkUirJQBbOBJAQfWmfdtFct) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::IntPtrWrapper) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
