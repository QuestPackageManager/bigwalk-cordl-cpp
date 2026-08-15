#pragma once
// IWYU pragma private; include "Animancer/SpriteRendererTextureSwap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteRendererTextureSwap)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Animancer {
class SpriteRendererTextureSwap;
}
// Write type traits
MARK_REF_T(::Animancer::SpriteRendererTextureSwap*);
DEFINE_IL2CPP_CLASS(::Animancer::SpriteRendererTextureSwap*, "Animancer", "SpriteRendererTextureSwap");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer {
// Is value type: false
// CS Name: Animancer.SpriteRendererTextureSwap
class CORDL_TYPE SpriteRendererTextureSwap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::SpriteRenderer>  Renderer;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture2D>  Texture;

/// @brief Field TextureToSpriteMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TextureToSpriteMap, put=setStaticF_TextureToSpriteMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*  TextureToSpriteMap;

/// @brief Field _Renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::UnityW<::UnityEngine::SpriteRenderer>  _Renderer;

/// @brief Field _SpriteMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpriteMap, put=__cordl_internal_set__SpriteMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  _SpriteMap;

/// @brief Field _Texture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Texture, put=__cordl_internal_set__Texture)) ::UnityW<::UnityEngine::Texture2D>  _Texture;

/// @brief Method Awake, addr 0x180315570, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCache, addr 0x180315580, size 0x10, virtual false, abstract: false, final false
inline void ClearCache() ;

/// @brief Method DestroySprites, addr 0x180315590, size 0xb0, virtual false, abstract: false, final false
static inline void DestroySprites(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  spriteMap) ;

/// @brief Method DestroySprites, addr 0x180315640, size 0x130, virtual false, abstract: false, final false
static inline void DestroySprites(::UnityEngine::Texture2D*  texture) ;

/// @brief Method GetSpriteMap, addr 0x180315770, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* GetSpriteMap(::UnityEngine::Texture2D*  texture) ;

/// @brief Method LateUpdate, addr 0x180315860, size 0x80, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Animancer::SpriteRendererTextureSwap* New_ctor() ;

/// @brief Method OnValidate, addr 0x180315570, size 0x10, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RefreshSpriteMap, addr 0x1803158e0, size 0x100, virtual false, abstract: false, final false
inline void RefreshSpriteMap() ;

/// @brief Method TrySwapTexture, addr 0x1803159e0, size 0x210, virtual false, abstract: false, final false
static inline bool TrySwapTexture(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  spriteMap, ::UnityEngine::Texture2D*  texture, ::by_ref<::UnityEngine::Sprite*>  sprite) ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__Renderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__Renderer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get__SpriteMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__SpriteMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__Texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__Texture() ;

constexpr void __cordl_internal_set__Renderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set__SpriteMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set__Texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>* getStaticF_TextureToSpriteMap() ;

/// @brief Method get_Renderer, addr 0x1802f4a50, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::UnityW<::UnityEngine::SpriteRenderer>> get_Renderer() ;

/// @brief Method get_Texture, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_Texture() ;

static inline void setStaticF_TextureToSpriteMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*  value) ;

/// @brief Method set_Texture, addr 0x180315c50, size 0x30, virtual false, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteRendererTextureSwap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteRendererTextureSwap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteRendererTextureSwap(SpriteRendererTextureSwap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRendererTextureSwap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteRendererTextureSwap(SpriteRendererTextureSwap const& ) = delete;

/// @brief Field DefaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  DefaultExecutionOrder{static_cast<int32_t>(0x7530)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18198};

/// @brief Field _Renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ____Renderer;

/// @brief Field _Texture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____Texture;

/// @brief Field _SpriteMap, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  ____SpriteMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::SpriteRendererTextureSwap, ____Renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::SpriteRendererTextureSwap, ____Texture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::SpriteRendererTextureSwap, ____SpriteMap) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::SpriteRendererTextureSwap) == 0x38, "Size mismatch!");

} // namespace end def Animancer
