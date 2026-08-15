#pragma once
// IWYU pragma private; include "Boxophobic/Utility/SceneSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SceneSwitch)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Boxophobic::Utility {
class SceneSwitch;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::SceneSwitch*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::SceneSwitch*, "Boxophobic.Utility", "SceneSwitch");
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.SceneSwitch
class CORDL_TYPE SceneSwitch : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
/// @brief Field objectHD, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectHD, put=__cordl_internal_set_objectHD)) ::UnityW<::UnityEngine::GameObject>  objectHD;

/// @brief Field objectStandard, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectStandard, put=__cordl_internal_set_objectStandard)) ::UnityW<::UnityEngine::GameObject>  objectStandard;

/// @brief Field objectUniversal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectUniversal, put=__cordl_internal_set_objectUniversal)) ::UnityW<::UnityEngine::GameObject>  objectUniversal;

/// @brief Field setRenderSettings, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_setRenderSettings, put=__cordl_internal_set_setRenderSettings)) bool  setRenderSettings;

/// @brief Field setupHD, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_setupHD, put=__cordl_internal_set_setupHD)) ::UnityW<::UnityEngine::GameObject>  setupHD;

/// @brief Field setupStandard, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_setupStandard, put=__cordl_internal_set_setupStandard)) ::UnityW<::UnityEngine::GameObject>  setupStandard;

/// @brief Field setupUniversal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_setupUniversal, put=__cordl_internal_set_setupUniversal)) ::UnityW<::UnityEngine::GameObject>  setupUniversal;

/// @brief Field skyboxAmbient, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyboxAmbient, put=__cordl_internal_set_skyboxAmbient)) float_t  skyboxAmbient;

/// @brief Field skyboxMaterial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyboxMaterial, put=__cordl_internal_set_skyboxMaterial)) ::UnityW<::UnityEngine::Material>  skyboxMaterial;

/// @brief Field skyboxReflection, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyboxReflection, put=__cordl_internal_set_skyboxReflection)) float_t  skyboxReflection;

/// @brief Field styledBanner, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_styledBanner, put=__cordl_internal_set_styledBanner)) bool  styledBanner;

/// @brief Field styledSpace, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_styledSpace, put=__cordl_internal_set_styledSpace)) bool  styledSpace;

static inline ::Boxophobic::Utility::SceneSwitch* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804bc9d0, size 0x3c0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectHD() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectHD() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectStandard() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectStandard() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectUniversal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectUniversal() ;

constexpr bool const& __cordl_internal_get_setRenderSettings() const;

constexpr bool& __cordl_internal_get_setRenderSettings() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_setupHD() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_setupHD() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_setupStandard() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_setupStandard() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_setupUniversal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_setupUniversal() ;

constexpr float_t const& __cordl_internal_get_skyboxAmbient() const;

constexpr float_t& __cordl_internal_get_skyboxAmbient() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_skyboxMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_skyboxMaterial() ;

constexpr float_t const& __cordl_internal_get_skyboxReflection() const;

constexpr float_t& __cordl_internal_get_skyboxReflection() ;

constexpr bool const& __cordl_internal_get_styledBanner() const;

constexpr bool& __cordl_internal_get_styledBanner() ;

constexpr bool const& __cordl_internal_get_styledSpace() const;

constexpr bool& __cordl_internal_get_styledSpace() ;

constexpr void __cordl_internal_set_objectHD(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_objectStandard(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_objectUniversal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_setRenderSettings(bool  value) ;

constexpr void __cordl_internal_set_setupHD(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_setupStandard(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_setupUniversal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_skyboxAmbient(float_t  value) ;

constexpr void __cordl_internal_set_skyboxMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_skyboxReflection(float_t  value) ;

constexpr void __cordl_internal_set_styledBanner(bool  value) ;

constexpr void __cordl_internal_set_styledSpace(bool  value) ;

/// @brief Method .ctor, addr 0x1804bcd90, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneSwitch(SceneSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneSwitch(SceneSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21193};

/// @brief Field styledBanner, offset: 0x20, size: 0x1, def value: None
 bool  ___styledBanner;

/// @brief Field setupStandard, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___setupStandard;

/// @brief Field setupUniversal, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___setupUniversal;

/// @brief Field setupHD, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___setupHD;

/// @brief Field objectStandard, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectStandard;

/// @brief Field objectUniversal, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectUniversal;

/// @brief Field objectHD, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectHD;

/// @brief Field setRenderSettings, offset: 0x58, size: 0x1, def value: None
 bool  ___setRenderSettings;

/// @brief Field skyboxMaterial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___skyboxMaterial;

/// @brief Field skyboxAmbient, offset: 0x68, size: 0x4, def value: None
 float_t  ___skyboxAmbient;

/// @brief Field skyboxReflection, offset: 0x6c, size: 0x4, def value: None
 float_t  ___skyboxReflection;

/// @brief Field styledSpace, offset: 0x70, size: 0x1, def value: None
 bool  ___styledSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___styledBanner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___setupStandard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___setupUniversal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___setupHD) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___objectStandard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___objectUniversal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___objectHD) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___setRenderSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___skyboxMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___skyboxAmbient) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___skyboxReflection) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::SceneSwitch, ___styledSpace) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::SceneSwitch) == 0x78, "Size mismatch!");

} // namespace end def Boxophobic::Utility
