#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ClusterInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClusterInfo)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct ClusterInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::ClusterInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ClusterInfo, "UnityEngine.AdaptivePerformance", "ClusterInfo");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.ClusterInfo
struct CORDL_TYPE ClusterInfo {
public:
// Declarations
 __declspec(property(get=get_BigCore)) int32_t  BigCore;

 __declspec(property(get=get_LittleCore)) int32_t  LittleCore;

 __declspec(property(get=get_MediumCore)) int32_t  MediumCore;

/// @brief Method get_BigCore, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_BigCore() ;

/// @brief Method get_LittleCore, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LittleCore() ;

/// @brief Method get_MediumCore, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_MediumCore() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClusterInfo() ;

// Ctor Parameters [CppParam { name: "_BigCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_MediumCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_LittleCore_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClusterInfo(int32_t  _BigCore_k__BackingField, int32_t  _MediumCore_k__BackingField, int32_t  _LittleCore_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <BigCore>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _BigCore_k__BackingField;

/// @brief Field <MediumCore>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _MediumCore_k__BackingField;

/// @brief Field <LittleCore>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _LittleCore_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::ClusterInfo, _BigCore_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::ClusterInfo, _MediumCore_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::ClusterInfo, _LittleCore_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::ClusterInfo) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
