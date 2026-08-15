#pragma once
// IWYU pragma private; include "System/Resources/IResourceGroveler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResourceGroveler)
// Forward declare root types
namespace System::Resources {
class IResourceGroveler;
}
// Write type traits
MARK_REF_T(::System::Resources::IResourceGroveler*);
DEFINE_IL2CPP_CLASS(::System::Resources::IResourceGroveler*, "System.Resources", "IResourceGroveler");
// Dependencies 
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.IResourceGroveler
class CORDL_TYPE IResourceGroveler {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IResourceGroveler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IResourceGroveler(IResourceGroveler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
