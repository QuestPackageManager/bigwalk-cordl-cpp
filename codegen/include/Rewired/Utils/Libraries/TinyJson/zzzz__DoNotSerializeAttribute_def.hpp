#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/DoNotSerializeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DoNotSerializeAttribute)
// Forward declare root types
namespace Rewired::Utils::Libraries::TinyJson {
class DoNotSerializeAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute*, "Rewired.Utils.Libraries.TinyJson", "DoNotSerializeAttribute");
// Dependencies System.Attribute
namespace Rewired::Utils::Libraries::TinyJson {
// Is value type: false
// CS Name: Rewired.Utils.Libraries.TinyJson.DoNotSerializeAttribute
class CORDL_TYPE DoNotSerializeAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoNotSerializeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoNotSerializeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DoNotSerializeAttribute(DoNotSerializeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoNotSerializeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoNotSerializeAttribute(DoNotSerializeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::TinyJson
