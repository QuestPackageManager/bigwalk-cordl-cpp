#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerSettingsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ScalerTarget_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ScalerVisualImpact_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceScalerSettingsBase)
namespace UnityEngine::AdaptivePerformance {
struct ScalerTarget;
}
namespace UnityEngine::AdaptivePerformance {
struct ScalerVisualImpact;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerSettingsBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceScalerSettingsBase");
// Dependencies System.Object, UnityEngine.AdaptivePerformance.ScalerTarget, UnityEngine.AdaptivePerformance.ScalerVisualImpact
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
class CORDL_TYPE AdaptivePerformanceScalerSettingsBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Field m_Enabled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Enabled, put=__cordl_internal_set_m_Enabled)) bool  m_Enabled;

/// @brief Field m_MaxBound, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxBound, put=__cordl_internal_set_m_MaxBound)) float_t  m_MaxBound;

/// @brief Field m_MaxLevel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxLevel, put=__cordl_internal_set_m_MaxLevel)) int32_t  m_MaxLevel;

/// @brief Field m_MinBound, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinBound, put=__cordl_internal_set_m_MinBound)) float_t  m_MinBound;

/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Scale, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Scale, put=__cordl_internal_set_m_Scale)) float_t  m_Scale;

/// @brief Field m_Target, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityEngine::AdaptivePerformance::ScalerTarget  m_Target;

/// @brief Field m_VisualImpact, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VisualImpact, put=__cordl_internal_set_m_VisualImpact)) ::UnityEngine::AdaptivePerformance::ScalerVisualImpact  m_VisualImpact;

 __declspec(property(get=get_maxBound, put=set_maxBound)) float_t  maxBound;

 __declspec(property(get=get_maxLevel, put=set_maxLevel)) int32_t  maxLevel;

 __declspec(property(get=get_minBound, put=set_minBound)) float_t  minBound;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_scale, put=set_scale)) float_t  scale;

 __declspec(property(get=get_target, put=set_target)) ::UnityEngine::AdaptivePerformance::ScalerTarget  target;

 __declspec(property(get=get_visualImpact, put=set_visualImpact)) ::UnityEngine::AdaptivePerformance::ScalerVisualImpact  visualImpact;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Enabled() const;

constexpr bool& __cordl_internal_get_m_Enabled() ;

constexpr float_t const& __cordl_internal_get_m_MaxBound() const;

constexpr float_t& __cordl_internal_get_m_MaxBound() ;

constexpr int32_t const& __cordl_internal_get_m_MaxLevel() const;

constexpr int32_t& __cordl_internal_get_m_MaxLevel() ;

constexpr float_t const& __cordl_internal_get_m_MinBound() const;

constexpr float_t& __cordl_internal_get_m_MinBound() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr float_t const& __cordl_internal_get_m_Scale() const;

constexpr float_t& __cordl_internal_get_m_Scale() ;

constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget const& __cordl_internal_get_m_Target() const;

constexpr ::UnityEngine::AdaptivePerformance::ScalerTarget& __cordl_internal_get_m_Target() ;

constexpr ::UnityEngine::AdaptivePerformance::ScalerVisualImpact const& __cordl_internal_get_m_VisualImpact() const;

constexpr ::UnityEngine::AdaptivePerformance::ScalerVisualImpact& __cordl_internal_get_m_VisualImpact() ;

constexpr void __cordl_internal_set_m_Enabled(bool  value) ;

constexpr void __cordl_internal_set_m_MaxBound(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_MinBound(float_t  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_Scale(float_t  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityEngine::AdaptivePerformance::ScalerTarget  value) ;

constexpr void __cordl_internal_set_m_VisualImpact(::UnityEngine::AdaptivePerformance::ScalerVisualImpact  value) ;

/// @brief Method .ctor, addr 0x18221dee0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enabled, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_maxBound, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxBound() ;

/// @brief Method get_maxLevel, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_maxLevel() ;

/// @brief Method get_minBound, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_minBound() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_scale, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_scale() ;

/// @brief Method get_target, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ScalerTarget get_target() ;

/// @brief Method get_visualImpact, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ScalerVisualImpact get_visualImpact() ;

/// @brief Method set_enabled, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_maxBound, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_maxBound(float_t  value) ;

/// @brief Method set_maxLevel, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_maxLevel(int32_t  value) ;

/// @brief Method set_minBound, addr 0x180bb44a0, size 0x3450, virtual false, abstract: false, final false
inline void set_minBound(float_t  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_scale, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_scale(float_t  value) ;

/// @brief Method set_target, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_target(::UnityEngine::AdaptivePerformance::ScalerTarget  value) ;

/// @brief Method set_visualImpact, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_visualImpact(::UnityEngine::AdaptivePerformance::ScalerVisualImpact  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceScalerSettingsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerSettingsBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceScalerSettingsBase(AdaptivePerformanceScalerSettingsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerSettingsBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceScalerSettingsBase(AdaptivePerformanceScalerSettingsBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19434};

/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// @brief Field m_Enabled, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Enabled;

/// @brief Field m_Scale, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_Scale;

/// @brief Field m_VisualImpact, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::ScalerVisualImpact  ___m_VisualImpact;

/// @brief Field m_Target, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::ScalerTarget  ___m_Target;

/// @brief Field m_MaxLevel, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_MaxLevel;

/// @brief Field m_MinBound, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_MinBound;

/// @brief Field m_MaxBound, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_MaxBound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_Enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_Scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_VisualImpact) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_Target) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_MaxLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_MinBound) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase, ___m_MaxBound) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettingsBase) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
