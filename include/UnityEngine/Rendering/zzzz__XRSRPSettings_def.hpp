#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRSRPSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSRPSettings)
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class XRSRPSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::XRSRPSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::XRSRPSettings*, "UnityEngine.Rendering", "XRSRPSettings");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.XRSRPSettings
class CORDL_TYPE XRSRPSettings : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::Rendering::XRSRPSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enabled, addr 0x181fce6c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_eyeTextureDesc, addr 0x182065e40, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc() ;

/// @brief Method get_eyeTextureHeight, addr 0x182065e90, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureHeight() ;

/// @brief Method get_eyeTextureWidth, addr 0x182065ec0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureWidth() ;

/// @brief Method get_isDeviceActive, addr 0x182065ef0, size 0x20, virtual false, abstract: false, final false
static inline bool get_isDeviceActive() ;

/// @brief Method get_loadedDeviceName, addr 0x182065f10, size 0x30, virtual false, abstract: false, final false
static inline ::StringW get_loadedDeviceName() ;

/// @brief Method get_mirrorViewMode, addr 0x182065f40, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_mirrorViewMode() ;

/// @brief Method get_occlusionMeshScale, addr 0x182065f70, size 0x50, virtual false, abstract: false, final false
static inline float_t get_occlusionMeshScale() ;

/// @brief Method get_supportedDevices, addr 0x182065fc0, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_supportedDevices() ;

/// @brief Method get_useVisibilityMesh, addr 0x182065ff0, size 0x50, virtual false, abstract: false, final false
static inline bool get_useVisibilityMesh() ;

/// @brief Method set_mirrorViewMode, addr 0x182066040, size 0x30, virtual false, abstract: false, final false
static inline void set_mirrorViewMode(int32_t  value) ;

/// @brief Method set_occlusionMeshScale, addr 0x182066070, size 0x50, virtual false, abstract: false, final false
static inline void set_occlusionMeshScale(float_t  value) ;

/// @brief Method set_useVisibilityMesh, addr 0x1820660c0, size 0x50, virtual false, abstract: false, final false
static inline void set_useVisibilityMesh(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSRPSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSRPSettings(XRSRPSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSRPSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSRPSettings(XRSRPSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::XRSRPSettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
