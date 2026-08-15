#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ExpandFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExpandFieldAttribute)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ExpandFieldAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute*, "PlayEveryWare.EpicOnlineServices", "ExpandFieldAttribute");
// Dependencies System.Attribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ExpandFieldAttribute
class CORDL_TYPE ExpandFieldAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpandFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpandFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandFieldAttribute(ExpandFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandFieldAttribute(ExpandFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
