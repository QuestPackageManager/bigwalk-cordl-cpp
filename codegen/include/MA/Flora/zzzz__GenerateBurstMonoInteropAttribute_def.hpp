#pragma once
// IWYU pragma private; include "MA/Flora/GenerateBurstMonoInteropAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(GenerateBurstMonoInteropAttribute)
// Forward declare root types
namespace MA::Flora {
class GenerateBurstMonoInteropAttribute;
}
// Write type traits
MARK_REF_T(::MA::Flora::GenerateBurstMonoInteropAttribute*);
DEFINE_IL2CPP_CLASS(::MA::Flora::GenerateBurstMonoInteropAttribute*, "MA.Flora", "GenerateBurstMonoInteropAttribute");
// Dependencies System.Attribute
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GenerateBurstMonoInteropAttribute
class CORDL_TYPE GenerateBurstMonoInteropAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::MA::Flora::GenerateBurstMonoInteropAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerateBurstMonoInteropAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerateBurstMonoInteropAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerateBurstMonoInteropAttribute(GenerateBurstMonoInteropAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerateBurstMonoInteropAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerateBurstMonoInteropAttribute(GenerateBurstMonoInteropAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GenerateBurstMonoInteropAttribute) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
