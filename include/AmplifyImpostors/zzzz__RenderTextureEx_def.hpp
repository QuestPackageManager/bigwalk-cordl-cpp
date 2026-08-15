#pragma once
// IWYU pragma private; include "AmplifyImpostors/RenderTextureEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderTextureEx)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace AmplifyImpostors {
class RenderTextureEx;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::RenderTextureEx*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::RenderTextureEx*, "AmplifyImpostors", "RenderTextureEx");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.RenderTextureEx
class CORDL_TYPE RenderTextureEx : public ::System::Object {
public:
// Declarations
/// @brief Method GetTemporary, addr 0x1802d9d90, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTexture*  renderTexture) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTextureEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureEx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTextureEx(RenderTextureEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureEx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTextureEx(RenderTextureEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::RenderTextureEx) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
