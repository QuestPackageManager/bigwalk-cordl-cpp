#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureFormatUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureFormatUtilities)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class TextureFormatUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*, "UnityEngine.Rendering.PostProcessing", "TextureFormatUtilities");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TextureFormatUtilities
class CORDL_TYPE TextureFormatUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field s_FormatAliasMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FormatAliasMap, put=setStaticF_s_FormatAliasMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*  s_FormatAliasMap;

/// @brief Field s_SupportedRenderTextureFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SupportedRenderTextureFormats, put=setStaticF_s_SupportedRenderTextureFormats)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  s_SupportedRenderTextureFormats;

/// @brief Field s_SupportedTextureFormats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SupportedTextureFormats, put=setStaticF_s_SupportedTextureFormats)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  s_SupportedTextureFormats;

/// @brief Method GetUncompressedRenderTextureFormat, addr 0x181fd1bc0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat GetUncompressedRenderTextureFormat(::UnityEngine::Texture*  texture) ;

/// @brief Method IsObsolete, addr 0x181fd1cf0, size 0xc0, virtual false, abstract: false, final false
static inline bool IsObsolete(::System::Object*  value) ;

/// @brief Method IsSupported, addr 0x181fd1e10, size 0x60, virtual false, abstract: false, final false
static inline bool IsSupported(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method IsSupported, addr 0x181fd1db0, size 0x60, virtual false, abstract: false, final false
static inline bool IsSupported(::UnityEngine::TextureFormat  format) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>* getStaticF_s_FormatAliasMap() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* getStaticF_s_SupportedRenderTextureFormats() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* getStaticF_s_SupportedTextureFormats() ;

static inline void setStaticF_s_FormatAliasMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*  value) ;

static inline void setStaticF_s_SupportedRenderTextureFormats(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

static inline void setStaticF_s_SupportedTextureFormats(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureFormatUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureFormatUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureFormatUtilities(TextureFormatUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureFormatUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureFormatUtilities(TextureFormatUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
