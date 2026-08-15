#pragma once
// IWYU pragma private; include "MA/Flora/BurstMonoInteropMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(BurstMonoInteropMethodAttribute)
// Forward declare root types
namespace MA::Flora {
class BurstMonoInteropMethodAttribute;
}
// Write type traits
MARK_REF_T(::MA::Flora::BurstMonoInteropMethodAttribute*);
DEFINE_IL2CPP_CLASS(::MA::Flora::BurstMonoInteropMethodAttribute*, "MA.Flora", "BurstMonoInteropMethodAttribute");
// Dependencies System.Attribute
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BurstMonoInteropMethodAttribute
class CORDL_TYPE BurstMonoInteropMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field MakePublic, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_MakePublic, put=__cordl_internal_set_MakePublic)) bool  MakePublic;

static inline ::MA::Flora::BurstMonoInteropMethodAttribute* New_ctor(bool  makePublic) ;

constexpr bool const& __cordl_internal_get_MakePublic() const;

constexpr bool& __cordl_internal_get_MakePublic() ;

constexpr void __cordl_internal_set_MakePublic(bool  value) ;

/// @brief Method .ctor, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  makePublic) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstMonoInteropMethodAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstMonoInteropMethodAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstMonoInteropMethodAttribute(BurstMonoInteropMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstMonoInteropMethodAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstMonoInteropMethodAttribute(BurstMonoInteropMethodAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13397};

/// @brief Field MakePublic, offset: 0x10, size: 0x1, def value: None
 bool  ___MakePublic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BurstMonoInteropMethodAttribute, ___MakePublic) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BurstMonoInteropMethodAttribute) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
