#pragma once
// IWYU pragma private; include "Rowlan/Genesis/StampSettingsTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/Genesis/zzzz__HeightStampSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StampSettingsTemplate)
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
class StampSettingsTemplate;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::StampSettingsTemplate*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::StampSettingsTemplate*, "Rowlan.Genesis", "StampSettingsTemplate");
// Dependencies Rowlan.Genesis.HeightStampSettings::FalloffType, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.StampSettingsTemplate
class CORDL_TYPE StampSettingsTemplate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field falloffType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_falloffType, put=__cordl_internal_set_falloffType)) ::Rowlan::Genesis::HeightStampSettings_FalloffType  falloffType;

/// @brief Field positionRangeX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionRangeX, put=__cordl_internal_set_positionRangeX)) ::UnityEngine::Vector2  positionRangeX;

/// @brief Field positionRangeY, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionRangeY, put=__cordl_internal_set_positionRangeY)) ::UnityEngine::Vector2  positionRangeY;

/// @brief Field positionRangeZ, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionRangeZ, put=__cordl_internal_set_positionRangeZ)) ::UnityEngine::Vector2  positionRangeZ;

/// @brief Field probability, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_probability, put=__cordl_internal_set_probability)) float_t  probability;

/// @brief Field rotationRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationRange, put=__cordl_internal_set_rotationRange)) ::UnityEngine::Vector2  rotationRange;

/// @brief Field scaleRangeHeight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleRangeHeight, put=__cordl_internal_set_scaleRangeHeight)) ::UnityEngine::Vector2  scaleRangeHeight;

/// @brief Field scaleRangeWidth, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleRangeWidth, put=__cordl_internal_set_scaleRangeWidth)) ::UnityEngine::Vector2  scaleRangeWidth;

/// @brief Field templateName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateName, put=__cordl_internal_set_templateName)) ::StringW  templateName;

/// @brief Field weight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr operator  ::Rowlan::Genesis::ITemplateSettings*() noexcept;

/// @brief Method GetName, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::StringW GetName() ;

static inline ::Rowlan::Genesis::StampSettingsTemplate* New_ctor() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType const& __cordl_internal_get_falloffType() const;

constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType& __cordl_internal_get_falloffType() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionRangeX() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionRangeX() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionRangeY() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionRangeY() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionRangeZ() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionRangeZ() ;

constexpr float_t const& __cordl_internal_get_probability() const;

constexpr float_t& __cordl_internal_get_probability() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rotationRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rotationRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scaleRangeHeight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scaleRangeHeight() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scaleRangeWidth() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scaleRangeWidth() ;

constexpr ::StringW const& __cordl_internal_get_templateName() const;

constexpr ::StringW& __cordl_internal_get_templateName() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_falloffType(::Rowlan::Genesis::HeightStampSettings_FalloffType  value) ;

constexpr void __cordl_internal_set_positionRangeX(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_positionRangeY(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_positionRangeZ(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_probability(float_t  value) ;

constexpr void __cordl_internal_set_rotationRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scaleRangeHeight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scaleRangeWidth(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_templateName(::StringW  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x181abfab0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* i___Rowlan__Genesis__ITemplateSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StampSettingsTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StampSettingsTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StampSettingsTemplate(StampSettingsTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StampSettingsTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StampSettingsTemplate(StampSettingsTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20391};

/// @brief Field templateName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___templateName;

/// @brief Field active, offset: 0x20, size: 0x1, def value: None
 bool  ___active;

/// @brief Field weight, offset: 0x24, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field probability, offset: 0x28, size: 0x4, def value: None
 float_t  ___probability;

/// @brief Field falloffType, offset: 0x2c, size: 0x4, def value: None
 ::Rowlan::Genesis::HeightStampSettings_FalloffType  ___falloffType;

/// @brief Field positionRangeX, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___positionRangeX;

/// @brief Field positionRangeY, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___positionRangeY;

/// @brief Field positionRangeZ, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___positionRangeZ;

/// @brief Field rotationRange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rotationRange;

/// @brief Field scaleRangeWidth, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scaleRangeWidth;

/// @brief Field scaleRangeHeight, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scaleRangeHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___templateName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___weight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___probability) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___falloffType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___positionRangeX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___positionRangeY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___positionRangeZ) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___rotationRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___scaleRangeWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::StampSettingsTemplate, ___scaleRangeHeight) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::StampSettingsTemplate) == 0x60, "Size mismatch!");

} // namespace end def Rowlan::Genesis
