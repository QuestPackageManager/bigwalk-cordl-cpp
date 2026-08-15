#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/JumpFloodSDF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JumpFloodSDF)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class JumpFloodSDF;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::JumpFloodSDF*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::JumpFloodSDF*, "JBooth.MicroVerseCore", "JumpFloodSDF");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.JumpFloodSDF
class CORDL_TYPE JumpFloodSDF : public ::System::Object {
public:
// Declarations
/// @brief Field jumpFloodShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_jumpFloodShader, put=setStaticF_jumpFloodShader)) ::UnityW<::UnityEngine::Shader>  jumpFloodShader;

/// @brief Method CreateTemporaryRT, addr 0x1814305b0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> CreateTemporaryRT(::UnityEngine::Texture*  source, int32_t  channel, float_t  zoom, int32_t  downscale, bool  r8) ;

/// @brief Method Generate, addr 0x1814306c0, size 0x280, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> Generate(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  output, int32_t  channel, float_t  zoom, int32_t  downscale) ;

static inline ::JBooth::MicroVerseCore::JumpFloodSDF* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_jumpFloodShader() ;

static inline void setStaticF_jumpFloodShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JumpFloodSDF() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JumpFloodSDF", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JumpFloodSDF(JumpFloodSDF && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JumpFloodSDF", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JumpFloodSDF(JumpFloodSDF const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::JumpFloodSDF) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
