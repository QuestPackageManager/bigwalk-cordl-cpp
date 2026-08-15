#pragma once
// IWYU pragma private; include "MA/Flora/FloraAdditionalCameraSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloraAdditionalCameraSettings)
namespace UnityEngine::Rendering {
class IAdditionalData;
}
// Forward declare root types
namespace MA::Flora {
class FloraAdditionalCameraSettings;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraAdditionalCameraSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraAdditionalCameraSettings*, "MA.Flora", "FloraAdditionalCameraSettings");
// Dependencies UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraAdditionalCameraSettings
class CORDL_TYPE FloraAdditionalCameraSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AllowGPUOcclusionCulling, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowGPUOcclusionCulling, put=__cordl_internal_set_AllowGPUOcclusionCulling)) bool  AllowGPUOcclusionCulling;

/// @brief Field DisableInstanceRendering, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableInstanceRendering, put=__cordl_internal_set_DisableInstanceRendering)) bool  DisableInstanceRendering;

/// @brief Field LODBiasScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_LODBiasScale, put=__cordl_internal_set_LODBiasScale)) float_t  LODBiasScale;

/// @brief Field Teleported, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Teleported, put=__cordl_internal_set_Teleported)) bool  Teleported;

/// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
constexpr operator  ::UnityEngine::Rendering::IAdditionalData*() noexcept;

static inline ::MA::Flora::FloraAdditionalCameraSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_AllowGPUOcclusionCulling() const;

constexpr bool& __cordl_internal_get_AllowGPUOcclusionCulling() ;

constexpr bool const& __cordl_internal_get_DisableInstanceRendering() const;

constexpr bool& __cordl_internal_get_DisableInstanceRendering() ;

constexpr float_t const& __cordl_internal_get_LODBiasScale() const;

constexpr float_t& __cordl_internal_get_LODBiasScale() ;

constexpr bool const& __cordl_internal_get_Teleported() const;

constexpr bool& __cordl_internal_get_Teleported() ;

constexpr void __cordl_internal_set_AllowGPUOcclusionCulling(bool  value) ;

constexpr void __cordl_internal_set_DisableInstanceRendering(bool  value) ;

constexpr void __cordl_internal_set_LODBiasScale(float_t  value) ;

constexpr void __cordl_internal_set_Teleported(bool  value) ;

/// @brief Method .ctor, addr 0x1814c5c30, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
constexpr ::UnityEngine::Rendering::IAdditionalData* i___UnityEngine__Rendering__IAdditionalData() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraAdditionalCameraSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraAdditionalCameraSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraAdditionalCameraSettings(FloraAdditionalCameraSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraAdditionalCameraSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraAdditionalCameraSettings(FloraAdditionalCameraSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13267};

/// @brief Field AllowGPUOcclusionCulling, offset: 0x20, size: 0x1, def value: None
 bool  ___AllowGPUOcclusionCulling;

/// @brief Field DisableInstanceRendering, offset: 0x21, size: 0x1, def value: None
 bool  ___DisableInstanceRendering;

/// @brief Field LODBiasScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___LODBiasScale;

/// @brief Field Teleported, offset: 0x28, size: 0x1, def value: None
 bool  ___Teleported;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraAdditionalCameraSettings, ___AllowGPUOcclusionCulling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalCameraSettings, ___DisableInstanceRendering) == 0x21, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalCameraSettings, ___LODBiasScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalCameraSettings, ___Teleported) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraAdditionalCameraSettings) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
