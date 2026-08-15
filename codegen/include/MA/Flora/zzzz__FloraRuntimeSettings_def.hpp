#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraCullingPipeline_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraRuntimeSettings)
namespace MA::Flora {
struct FloraCullingPipeline;
}
namespace MA::Flora {
struct FloraRuntimeSettings_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace MA::Flora {
struct FloraRuntimeSettings_Version;
}
namespace MA::Flora {
class FloraRuntimeSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraRuntimeSettings_Version);
MARK_REF_T(::MA::Flora::FloraRuntimeSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRuntimeSettings_Version, "MA.Flora", "FloraRuntimeSettings/Version");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRuntimeSettings*, "MA.Flora", "FloraRuntimeSettings");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraRuntimeSettings/Version
struct CORDL_TYPE FloraRuntimeSettings_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraRuntimeSettings_Version_Unwrapped
enum struct __FloraRuntimeSettings_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RenameClass = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
__E_Last = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraRuntimeSettings_Version_Unwrapped () const noexcept {
return static_cast<__FloraRuntimeSettings_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraRuntimeSettings_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraRuntimeSettings_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(2)
static ::MA::Flora::FloraRuntimeSettings_Version const Count;

/// @brief Field Initial value: I32(0)
static ::MA::Flora::FloraRuntimeSettings_Version const Initial;

/// @brief Field Last value: I32(1)
static ::MA::Flora::FloraRuntimeSettings_Version const Last;

/// @brief Field RenameClass value: I32(1)
static ::MA::Flora::FloraRuntimeSettings_Version const RenameClass;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRuntimeSettings_Version, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRuntimeSettings_Version) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraCullingPipeline, MA.Flora.FloraRuntimeSettings::Version, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRuntimeSettings
class CORDL_TYPE FloraRuntimeSettings : public ::System::Object {
public:
// Declarations
using Version = ::MA::Flora::FloraRuntimeSettings_Version;

 __declspec(property(get=get_DefaultCullingPipeline, put=set_DefaultCullingPipeline)) ::MA::Flora::FloraCullingPipeline  DefaultCullingPipeline;

 __declspec(property(get=get_DisableGPUOcclusionCulling, put=set_DisableGPUOcclusionCulling)) bool  DisableGPUOcclusionCulling;

 __declspec(property(get=get_DisableLegacyLightProbes, put=set_DisableLegacyLightProbes)) bool  DisableLegacyLightProbes;

 __declspec(property(get=get_DisablePerObjectMotionVectors, put=set_DisablePerObjectMotionVectors)) bool  DisablePerObjectMotionVectors;

 __declspec(property(get=get_isAvailableInPlayerBuild)) bool  isAvailableInPlayerBuild;

/// @brief Field m_DefaultCullingPipeline, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultCullingPipeline, put=__cordl_internal_set_m_DefaultCullingPipeline)) ::MA::Flora::FloraCullingPipeline  m_DefaultCullingPipeline;

/// @brief Field m_DisableGPUOcclusionCulling, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableGPUOcclusionCulling, put=__cordl_internal_set_m_DisableGPUOcclusionCulling)) bool  m_DisableGPUOcclusionCulling;

/// @brief Field m_DisableLegacyLightProbes, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableLegacyLightProbes, put=__cordl_internal_set_m_DisableLegacyLightProbes)) bool  m_DisableLegacyLightProbes;

/// @brief Field m_DisablePerObjectMotionVectors, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisablePerObjectMotionVectors, put=__cordl_internal_set_m_DisablePerObjectMotionVectors)) bool  m_DisablePerObjectMotionVectors;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::MA::Flora::FloraRuntimeSettings_Version  m_Version;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::MA::Flora::FloraRuntimeSettings* New_ctor() ;

constexpr ::MA::Flora::FloraCullingPipeline const& __cordl_internal_get_m_DefaultCullingPipeline() const;

constexpr ::MA::Flora::FloraCullingPipeline& __cordl_internal_get_m_DefaultCullingPipeline() ;

constexpr bool const& __cordl_internal_get_m_DisableGPUOcclusionCulling() const;

constexpr bool& __cordl_internal_get_m_DisableGPUOcclusionCulling() ;

constexpr bool const& __cordl_internal_get_m_DisableLegacyLightProbes() const;

constexpr bool& __cordl_internal_get_m_DisableLegacyLightProbes() ;

constexpr bool const& __cordl_internal_get_m_DisablePerObjectMotionVectors() const;

constexpr bool& __cordl_internal_get_m_DisablePerObjectMotionVectors() ;

constexpr ::MA::Flora::FloraRuntimeSettings_Version const& __cordl_internal_get_m_Version() const;

constexpr ::MA::Flora::FloraRuntimeSettings_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_DefaultCullingPipeline(::MA::Flora::FloraCullingPipeline  value) ;

constexpr void __cordl_internal_set_m_DisableGPUOcclusionCulling(bool  value) ;

constexpr void __cordl_internal_set_m_DisableLegacyLightProbes(bool  value) ;

constexpr void __cordl_internal_set_m_DisablePerObjectMotionVectors(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::MA::Flora::FloraRuntimeSettings_Version  value) ;

/// @brief Method .ctor, addr 0x1814f8700, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCullingPipeline, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::FloraCullingPipeline get_DefaultCullingPipeline() ;

/// @brief Method get_DisableGPUOcclusionCulling, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableGPUOcclusionCulling() ;

/// @brief Method get_DisableLegacyLightProbes, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableLegacyLightProbes() ;

/// @brief Method get_DisablePerObjectMotionVectors, addr 0x1805c5560, size 0x10, virtual false, abstract: false, final false
inline bool get_DisablePerObjectMotionVectors() ;

/// @brief Method get_isAvailableInPlayerBuild, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_isAvailableInPlayerBuild() ;

/// @brief Method get_version, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_DefaultCullingPipeline, addr 0x1814f8720, size 0x30, virtual false, abstract: false, final false
inline void set_DefaultCullingPipeline(::MA::Flora::FloraCullingPipeline  value) ;

/// @brief Method set_DisableGPUOcclusionCulling, addr 0x1814f8750, size 0x30, virtual false, abstract: false, final false
inline void set_DisableGPUOcclusionCulling(bool  value) ;

/// @brief Method set_DisableLegacyLightProbes, addr 0x1814f8780, size 0x30, virtual false, abstract: false, final false
inline void set_DisableLegacyLightProbes(bool  value) ;

/// @brief Method set_DisablePerObjectMotionVectors, addr 0x1814f87b0, size 0x30, virtual false, abstract: false, final false
inline void set_DisablePerObjectMotionVectors(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRuntimeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRuntimeSettings(FloraRuntimeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRuntimeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRuntimeSettings(FloraRuntimeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13365};

/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::FloraRuntimeSettings_Version  ___m_Version;

/// @brief Field m_DefaultCullingPipeline, offset: 0x14, size: 0x4, def value: None
 ::MA::Flora::FloraCullingPipeline  ___m_DefaultCullingPipeline;

/// @brief Field m_DisableGPUOcclusionCulling, offset: 0x18, size: 0x1, def value: None
 bool  ___m_DisableGPUOcclusionCulling;

/// @brief Field m_DisableLegacyLightProbes, offset: 0x19, size: 0x1, def value: None
 bool  ___m_DisableLegacyLightProbes;

/// @brief Field m_DisablePerObjectMotionVectors, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_DisablePerObjectMotionVectors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRuntimeSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeSettings, ___m_DefaultCullingPipeline) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeSettings, ___m_DisableGPUOcclusionCulling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeSettings, ___m_DisableLegacyLightProbes) == 0x19, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRuntimeSettings, ___m_DisablePerObjectMotionVectors) == 0x1a, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRuntimeSettings) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
