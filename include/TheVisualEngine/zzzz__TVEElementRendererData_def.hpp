#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementRendererData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEElementRendererData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEElementRendererSettings;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEElementRendererData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElementRendererData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementRendererData*, "TheVisualEngine", "TVEElementRendererData");
// Dependencies System.Object, TheVisualEngine.TVETextureSize
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElementRendererData
class CORDL_TYPE TVEElementRendererData : public ::System::Object {
public:
// Declarations
/// @brief Field baseCenter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseCenter, put=__cordl_internal_set_baseCenter)) ::UnityW<::UnityEngine::Transform>  baseCenter;

/// @brief Field baseRadius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseRadius, put=__cordl_internal_set_baseRadius)) float_t  baseRadius;

/// @brief Field baseTexture, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTexture, put=__cordl_internal_set_baseTexture)) ::TheVisualEngine::TVETextureSize  baseTexture;

/// @brief Field baseToNearBlend, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseToNearBlend, put=__cordl_internal_set_baseToNearBlend)) float_t  baseToNearBlend;

/// @brief Field nearCenter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearCenter, put=__cordl_internal_set_nearCenter)) ::UnityW<::UnityEngine::Transform>  nearCenter;

/// @brief Field nearRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearRadius, put=__cordl_internal_set_nearRadius)) float_t  nearRadius;

/// @brief Field nearTexture, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearTexture, put=__cordl_internal_set_nearTexture)) ::TheVisualEngine::TVETextureSize  nearTexture;

/// @brief Field rendererOverrides, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rendererOverrides, put=__cordl_internal_set_rendererOverrides)) ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*  rendererOverrides;

static inline ::TheVisualEngine::TVEElementRendererData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_baseCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_baseCenter() ;

constexpr float_t const& __cordl_internal_get_baseRadius() const;

constexpr float_t& __cordl_internal_get_baseRadius() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_baseTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_baseTexture() ;

constexpr float_t const& __cordl_internal_get_baseToNearBlend() const;

constexpr float_t& __cordl_internal_get_baseToNearBlend() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nearCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nearCenter() ;

constexpr float_t const& __cordl_internal_get_nearRadius() const;

constexpr float_t& __cordl_internal_get_nearRadius() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_nearTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_nearTexture() ;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>* const& __cordl_internal_get_rendererOverrides() const;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*& __cordl_internal_get_rendererOverrides() ;

constexpr void __cordl_internal_set_baseCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_baseRadius(float_t  value) ;

constexpr void __cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_baseToNearBlend(float_t  value) ;

constexpr void __cordl_internal_set_nearCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nearRadius(float_t  value) ;

constexpr void __cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_rendererOverrides(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*  value) ;

/// @brief Method .ctor, addr 0x1804b9260, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElementRendererData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElementRendererData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElementRendererData(TVEElementRendererData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElementRendererData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElementRendererData(TVEElementRendererData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19601};

/// @brief Field baseTexture, offset: 0x10, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___baseTexture;

/// @brief Field baseCenter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___baseCenter;

/// @brief Field baseRadius, offset: 0x20, size: 0x4, def value: None
 float_t  ___baseRadius;

/// @brief Field nearTexture, offset: 0x24, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___nearTexture;

/// @brief Field nearCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___nearCenter;

/// @brief Field nearRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___nearRadius;

/// @brief Field baseToNearBlend, offset: 0x34, size: 0x4, def value: None
 float_t  ___baseToNearBlend;

/// @brief Field rendererOverrides, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*  ___rendererOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___baseTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___baseCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___baseRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___nearTexture) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___nearCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___nearRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___baseToNearBlend) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererData, ___rendererOverrides) == 0x38, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementRendererData) == 0x40, "Size mismatch!");

} // namespace end def TheVisualEngine
