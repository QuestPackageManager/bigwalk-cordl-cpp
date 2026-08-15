#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/SerializeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SerializeAttribute)
// Forward declare root types
namespace Rewired::Utils::Libraries::TinyJson {
class SerializeAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Libraries::TinyJson::SerializeAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::TinyJson::SerializeAttribute*, "Rewired.Utils.Libraries.TinyJson", "SerializeAttribute");
// Dependencies System.Attribute
namespace Rewired::Utils::Libraries::TinyJson {
// Is value type: false
// CS Name: Rewired.Utils.Libraries.TinyJson.SerializeAttribute
class CORDL_TYPE SerializeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::Rewired::Utils::Libraries::TinyJson::SerializeAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeAttribute(SerializeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeAttribute(SerializeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2956};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Libraries::TinyJson::SerializeAttribute, ___Name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Libraries::TinyJson::SerializeAttribute) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::TinyJson
