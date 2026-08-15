#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/RandomColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
CORDL_MODULE_EXPORT(RandomColor)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Mirror::Examples::MultipleAdditiveScenes {
class RandomColor;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::RandomColor*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::RandomColor*, "Mirror.Examples.MultipleAdditiveScenes", "RandomColor");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Color32
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.RandomColor
class CORDL_TYPE RandomColor : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkcolor, put=set_Networkcolor)) ::UnityEngine::Color32  Networkcolor;

/// @brief Field cachedMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedMaterial, put=__cordl_internal_set_cachedMaterial)) ::UnityW<::UnityEngine::Material>  cachedMaterial;

/// @brief Field color, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color32  color;

/// @brief Method DeserializeSyncVars, addr 0x1815625f0, size 0xd0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::RandomColor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181562790, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnStartServer, addr 0x181562860, size 0xc0, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method SerializeSyncVars, addr 0x181562920, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetColor, addr 0x181562970, size 0xf0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color32  _, ::UnityEngine::Color32  newColor) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_cachedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_cachedMaterial() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_color() ;

constexpr void __cordl_internal_set_cachedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color32  value) ;

/// @brief Method .ctor, addr 0x181562a60, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkcolor, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 get_Networkcolor() ;

/// @brief Method set_Networkcolor, addr 0x181562aa0, size 0x70, virtual false, abstract: false, final false
inline void set_Networkcolor(::ByRefConst<::UnityEngine::Color32>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomColor(RandomColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomColor(RandomColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19325};

/// @brief Field color, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::Color32  ___color;

/// @brief Field cachedMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___cachedMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::RandomColor, ___color) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::RandomColor, ___cachedMaterial) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::RandomColor) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
