#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/TextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureLodInputData)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class TextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::TextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::TextureLodInputData*, "WaveHarmonic.Crest", "TextureLodInputData");
// Dependencies UnityEngine.Vector4, WaveHarmonic.Crest.LodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.TextureLodInputData
class CORDL_TYPE TextureLodInputData : public ::WaveHarmonic::Crest::LodInputData {
public:
// Declarations
 __declspec(property(get=get_HasHeightRange)) bool  HasHeightRange;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_Multiplier, put=set_Multiplier)) ::UnityEngine::Vector4  Multiplier;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture>  Texture;

 __declspec(property(get=get_TextureShader)) ::UnityW<::UnityEngine::ComputeShader>  TextureShader;

/// @brief Field _Multiplier, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__Multiplier, put=__cordl_internal_set__Multiplier)) ::UnityEngine::Vector4  _Multiplier;

/// @brief Field _Texture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Texture, put=__cordl_internal_set__Texture)) ::UnityW<::UnityEngine::Texture>  _Texture;

/// @brief Method Draw, addr 0x18257fd30, size 0x520, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Component*  component, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  slices) ;

static inline ::WaveHarmonic::Crest::TextureLodInputData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecalculateBounds, addr 0x182580250, size 0x1d0, virtual true, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateRect, addr 0x182580420, size 0x40, virtual true, abstract: false, final false
inline void RecalculateRect() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__Multiplier() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__Multiplier() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__Texture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__Texture() ;

constexpr void __cordl_internal_set__Multiplier(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__Texture(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x1825750a0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasHeightRange, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_HasHeightRange() ;

/// @brief Method get_IsEnabled, addr 0x1805f3820, size 0x10, virtual true, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_Multiplier, addr 0x181454250, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Multiplier() ;

/// @brief Method get_Texture, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Texture() ;

/// @brief Method get_TextureShader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_TextureShader() ;

/// @brief Method set_Multiplier, addr 0x181a73fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Multiplier(::UnityEngine::Vector4  value) ;

/// @brief Method set_Texture, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureLodInputData(TextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureLodInputData(TextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16570};

/// @brief Field _Texture, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____Texture;

/// @brief Field _Multiplier, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____Multiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::TextureLodInputData, ____Texture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::TextureLodInputData, ____Multiplier) == 0x58, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::TextureLodInputData) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
