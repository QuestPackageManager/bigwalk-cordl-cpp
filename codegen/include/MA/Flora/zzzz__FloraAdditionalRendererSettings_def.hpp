#pragma once
// IWYU pragma private; include "MA/Flora/FloraAdditionalRendererSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraAdditionalPerInstanceData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraAdditionalRendererSettings)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace MA::Flora {
class FloraAdditionalRendererSettings;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraAdditionalRendererSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraAdditionalRendererSettings*, "MA.Flora", "FloraAdditionalRendererSettings");
// Dependencies MA.Flora.FloraAdditionalPerInstanceData, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraAdditionalRendererSettings
class CORDL_TYPE FloraAdditionalRendererSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AdditionalPerInstanceData, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_AdditionalPerInstanceData, put=__cordl_internal_set_AdditionalPerInstanceData)) ::MA::Flora::FloraAdditionalPerInstanceData  AdditionalPerInstanceData;

/// @brief Field AffectedByGlobalDensity, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_AffectedByGlobalDensity, put=__cordl_internal_set_AffectedByGlobalDensity)) bool  AffectedByGlobalDensity;

/// @brief Field AffectedByMinimumScreenSize, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_AffectedByMinimumScreenSize, put=__cordl_internal_set_AffectedByMinimumScreenSize)) bool  AffectedByMinimumScreenSize;

/// @brief Field AffectedByRangeDensity, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_AffectedByRangeDensity, put=__cordl_internal_set_AffectedByRangeDensity)) bool  AffectedByRangeDensity;

/// @brief Field InitialVariationColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_InitialVariationColor, put=__cordl_internal_set_InitialVariationColor)) ::UnityEngine::Color  InitialVariationColor;

/// @brief Field MaxRenderDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRenderDistance, put=__cordl_internal_set_MaxRenderDistance)) float_t  MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxShadowDistance, put=__cordl_internal_set_MaxShadowDistance)) float_t  MaxShadowDistance;

/// @brief Field MinShadowLOD, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinShadowLOD, put=__cordl_internal_set_MinShadowLOD)) int32_t  MinShadowLOD;

/// @brief Field RequiresPerInstanceRandomID, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequiresPerInstanceRandomID, put=__cordl_internal_set_RequiresPerInstanceRandomID)) bool  RequiresPerInstanceRandomID;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::MA::Flora::FloraAdditionalRendererSettings* New_ctor() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1814c5c50, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr ::MA::Flora::FloraAdditionalPerInstanceData const& __cordl_internal_get_AdditionalPerInstanceData() const;

constexpr ::MA::Flora::FloraAdditionalPerInstanceData& __cordl_internal_get_AdditionalPerInstanceData() ;

constexpr bool const& __cordl_internal_get_AffectedByGlobalDensity() const;

constexpr bool& __cordl_internal_get_AffectedByGlobalDensity() ;

constexpr bool const& __cordl_internal_get_AffectedByMinimumScreenSize() const;

constexpr bool& __cordl_internal_get_AffectedByMinimumScreenSize() ;

constexpr bool const& __cordl_internal_get_AffectedByRangeDensity() const;

constexpr bool& __cordl_internal_get_AffectedByRangeDensity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_InitialVariationColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_InitialVariationColor() ;

constexpr float_t const& __cordl_internal_get_MaxRenderDistance() const;

constexpr float_t& __cordl_internal_get_MaxRenderDistance() ;

constexpr float_t const& __cordl_internal_get_MaxShadowDistance() const;

constexpr float_t& __cordl_internal_get_MaxShadowDistance() ;

constexpr int32_t const& __cordl_internal_get_MinShadowLOD() const;

constexpr int32_t& __cordl_internal_get_MinShadowLOD() ;

constexpr bool const& __cordl_internal_get_RequiresPerInstanceRandomID() const;

constexpr bool& __cordl_internal_get_RequiresPerInstanceRandomID() ;

constexpr void __cordl_internal_set_AdditionalPerInstanceData(::MA::Flora::FloraAdditionalPerInstanceData  value) ;

constexpr void __cordl_internal_set_AffectedByGlobalDensity(bool  value) ;

constexpr void __cordl_internal_set_AffectedByMinimumScreenSize(bool  value) ;

constexpr void __cordl_internal_set_AffectedByRangeDensity(bool  value) ;

constexpr void __cordl_internal_set_InitialVariationColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_MaxRenderDistance(float_t  value) ;

constexpr void __cordl_internal_set_MaxShadowDistance(float_t  value) ;

constexpr void __cordl_internal_set_MinShadowLOD(int32_t  value) ;

constexpr void __cordl_internal_set_RequiresPerInstanceRandomID(bool  value) ;

/// @brief Method .ctor, addr 0x1814c5c60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraAdditionalRendererSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraAdditionalRendererSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraAdditionalRendererSettings(FloraAdditionalRendererSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraAdditionalRendererSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraAdditionalRendererSettings(FloraAdditionalRendererSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13269};

/// @brief Field AdditionalPerInstanceData, offset: 0x20, size: 0x4, def value: None
 ::MA::Flora::FloraAdditionalPerInstanceData  ___AdditionalPerInstanceData;

/// @brief Field InitialVariationColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___InitialVariationColor;

/// @brief Field MaxRenderDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___MaxShadowDistance;

/// @brief Field MinShadowLOD, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___MinShadowLOD;

/// @brief Field AffectedByGlobalDensity, offset: 0x40, size: 0x1, def value: None
 bool  ___AffectedByGlobalDensity;

/// @brief Field AffectedByRangeDensity, offset: 0x41, size: 0x1, def value: None
 bool  ___AffectedByRangeDensity;

/// @brief Field AffectedByMinimumScreenSize, offset: 0x42, size: 0x1, def value: None
 bool  ___AffectedByMinimumScreenSize;

/// @brief Field RequiresPerInstanceRandomID, offset: 0x43, size: 0x1, def value: None
 bool  ___RequiresPerInstanceRandomID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___AdditionalPerInstanceData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___InitialVariationColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___MaxRenderDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___MaxShadowDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___MinShadowLOD) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___AffectedByGlobalDensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___AffectedByRangeDensity) == 0x41, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___AffectedByMinimumScreenSize) == 0x42, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraAdditionalRendererSettings, ___RequiresPerInstanceRandomID) == 0x43, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraAdditionalRendererSettings) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
