#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathSettingsTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/Genesis/zzzz__PathSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PathSettingsTemplate)
namespace Rowlan::Genesis {
class ITemplateSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
class PathSettingsTemplate;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::PathSettingsTemplate*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::PathSettingsTemplate*, "Rowlan.Genesis", "PathSettingsTemplate");
// Dependencies Rowlan.Genesis.PathSettings::Shape, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.PathSettingsTemplate
class CORDL_TYPE PathSettingsTemplate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field closed, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_closed, put=__cordl_internal_set_closed)) bool  closed;

/// @brief Field deformationAngle, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_deformationAngle, put=__cordl_internal_set_deformationAngle)) ::UnityEngine::Vector2  deformationAngle;

/// @brief Field probability, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_probability, put=__cordl_internal_set_probability)) float_t  probability;

/// @brief Field scale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field shape, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::Rowlan::Genesis::PathSettings_Shape  shape;

/// @brief Field subdivisionIterations, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subdivisionIterations, put=__cordl_internal_set_subdivisionIterations)) int32_t  subdivisionIterations;

/// @brief Field subdivisionRange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_subdivisionRange, put=__cordl_internal_set_subdivisionRange)) ::UnityEngine::Vector2  subdivisionRange;

/// @brief Field templateName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateName, put=__cordl_internal_set_templateName)) ::StringW  templateName;

/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr operator  ::Rowlan::Genesis::ITemplateSettings*() noexcept;

/// @brief Method GetName, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::StringW GetName() ;

static inline ::Rowlan::Genesis::PathSettingsTemplate* New_ctor() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr bool const& __cordl_internal_get_closed() const;

constexpr bool& __cordl_internal_get_closed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_deformationAngle() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_deformationAngle() ;

constexpr float_t const& __cordl_internal_get_probability() const;

constexpr float_t& __cordl_internal_get_probability() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr ::Rowlan::Genesis::PathSettings_Shape const& __cordl_internal_get_shape() const;

constexpr ::Rowlan::Genesis::PathSettings_Shape& __cordl_internal_get_shape() ;

constexpr int32_t const& __cordl_internal_get_subdivisionIterations() const;

constexpr int32_t& __cordl_internal_get_subdivisionIterations() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_subdivisionRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_subdivisionRange() ;

constexpr ::StringW const& __cordl_internal_get_templateName() const;

constexpr ::StringW& __cordl_internal_get_templateName() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_closed(bool  value) ;

constexpr void __cordl_internal_set_deformationAngle(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_probability(float_t  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_shape(::Rowlan::Genesis::PathSettings_Shape  value) ;

constexpr void __cordl_internal_set_subdivisionIterations(int32_t  value) ;

constexpr void __cordl_internal_set_subdivisionRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_templateName(::StringW  value) ;

/// @brief Method .ctor, addr 0x181abf510, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* i___Rowlan__Genesis__ITemplateSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathSettingsTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathSettingsTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PathSettingsTemplate(PathSettingsTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathSettingsTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathSettingsTemplate(PathSettingsTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20389};

/// @brief Field templateName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___templateName;

/// @brief Field active, offset: 0x20, size: 0x1, def value: None
 bool  ___active;

/// @brief Field probability, offset: 0x24, size: 0x4, def value: None
 float_t  ___probability;

/// @brief Field shape, offset: 0x28, size: 0x4, def value: None
 ::Rowlan::Genesis::PathSettings_Shape  ___shape;

/// @brief Field closed, offset: 0x2c, size: 0x1, def value: None
 bool  ___closed;

/// @brief Field scale, offset: 0x30, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field deformationAngle, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___deformationAngle;

/// @brief Field subdivisionIterations, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___subdivisionIterations;

/// @brief Field subdivisionRange, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___subdivisionRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___templateName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___probability) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___shape) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___closed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___deformationAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___subdivisionIterations) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettingsTemplate, ___subdivisionRange) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::PathSettingsTemplate) == 0x48, "Size mismatch!");

} // namespace end def Rowlan::Genesis
