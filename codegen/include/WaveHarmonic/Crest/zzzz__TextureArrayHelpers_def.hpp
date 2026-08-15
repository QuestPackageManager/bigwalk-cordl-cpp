#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/TextureArrayHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureArrayHelpers)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class TextureArrayHelpers;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::TextureArrayHelpers*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::TextureArrayHelpers*, "WaveHarmonic.Crest", "TextureArrayHelpers");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.TextureArrayHelpers
class CORDL_TYPE TextureArrayHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method CreateTexture2D, addr 0x18256d830, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateTexture2D(::UnityEngine::Color  color, ::UnityEngine::TextureFormat  format) ;

/// @brief Method CreateTexture2DArray, addr 0x18256d760, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2DArray> CreateTexture2DArray(::UnityEngine::Texture2D*  texture, int32_t  depth) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureArrayHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureArrayHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureArrayHelpers(TextureArrayHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureArrayHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureArrayHelpers(TextureArrayHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20156};

/// @brief Field k_SmallTextureSize offset 0xffffffff size 0x4
static constexpr int32_t  k_SmallTextureSize{static_cast<int32_t>(0x4)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::TextureArrayHelpers) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
