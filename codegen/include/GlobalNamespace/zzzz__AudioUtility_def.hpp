#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioUtility)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioUtility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioUtility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioUtility*, "", "AudioUtility");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioUtility
class CORDL_TYPE AudioUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_alphaMapLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_alphaMapLookup, put=setStaticF_s_alphaMapLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*  s_alphaMapLookup;

/// @brief Field s_detailMapLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_detailMapLookup, put=setStaticF_s_detailMapLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*  s_detailMapLookup;

/// @brief Method GetTerrainDetailDensity, addr 0x18032a4b0, size 0x330, virtual false, abstract: false, final false
static inline int32_t GetTerrainDetailDensity(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector3  testPos, int32_t  detailIndex, bool  debug) ;

/// @brief Method GetTerrainTexture, addr 0x18032a7e0, size 0x390, virtual false, abstract: false, final false
static inline void GetTerrainTexture(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector3  testPos, ::by_ref<int32_t>  largestIndex, ::by_ref<int32_t>  secondLargestIndex, ::by_ref<float_t>  largestProportion, ::by_ref<float_t>  secondLargestProportion, bool  debug) ;

/// @brief Method GetTextureColor, addr 0x18032ab70, size 0x110, virtual false, abstract: false, final false
static inline bool GetTextureColor(::UnityEngine::Terrain*  terrain, ::UnityEngine::Texture2D*  tex, ::UnityEngine::Vector3  worldPos, ::by_ref<::UnityEngine::Color>  color) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>* getStaticF_s_alphaMapLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>* getStaticF_s_detailMapLookup() ;

static inline void setStaticF_s_alphaMapLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*  value) ;

static inline void setStaticF_s_detailMapLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtility(AudioUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtility(AudioUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioUtility) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
