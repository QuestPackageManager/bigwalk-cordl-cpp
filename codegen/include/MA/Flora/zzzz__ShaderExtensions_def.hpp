#pragma once
// IWYU pragma private; include "MA/Flora/ShaderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ShaderExtensions)
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace MA::Flora {
class ShaderExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::ShaderExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ShaderExtensions*, "MA.Flora", "ShaderExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ShaderExtensions
class CORDL_TYPE ShaderExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method HasDOTSKeyword, addr 0x18150d420, size 0x90, virtual false, abstract: false, final false
static inline bool HasDOTSKeyword(::UnityEngine::Shader*  shader) ;

/// @brief Method HasLODFadeKeyword, addr 0x18150d4b0, size 0x90, virtual false, abstract: false, final false
static inline bool HasLODFadeKeyword(::UnityEngine::Shader*  shader) ;

/// @brief Method HasOverridableGlobalKeyword, addr 0x18150d540, size 0x90, virtual false, abstract: false, final false
static inline bool HasOverridableGlobalKeyword(::UnityEngine::Shader*  shader, ::StringW  keyword) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderExtensions(ShaderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderExtensions(ShaderExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ShaderExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
