#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/SuppressIldasmAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SuppressIldasmAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class SuppressIldasmAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::SuppressIldasmAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::SuppressIldasmAttribute*, "System.Runtime.CompilerServices", "SuppressIldasmAttribute");
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.SuppressIldasmAttribute
class CORDL_TYPE SuppressIldasmAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Runtime::CompilerServices::SuppressIldasmAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuppressIldasmAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuppressIldasmAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SuppressIldasmAttribute(SuppressIldasmAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuppressIldasmAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuppressIldasmAttribute(SuppressIldasmAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::CompilerServices::SuppressIldasmAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
