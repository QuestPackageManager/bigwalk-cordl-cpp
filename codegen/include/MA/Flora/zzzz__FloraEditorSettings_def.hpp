#pragma once
// IWYU pragma private; include "MA/Flora/FloraEditorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraEditorSettings)
namespace MA::Flora {
struct FloraEditorSettings_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace MA::Flora {
struct FloraEditorSettings_Version;
}
namespace MA::Flora {
class FloraEditorSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraEditorSettings_Version);
MARK_REF_T(::MA::Flora::FloraEditorSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraEditorSettings_Version, "MA.Flora", "FloraEditorSettings/Version");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraEditorSettings*, "MA.Flora", "FloraEditorSettings");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraEditorSettings/Version
struct CORDL_TYPE FloraEditorSettings_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraEditorSettings_Version_Unwrapped
enum struct __FloraEditorSettings_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_Count = static_cast<int32_t>(0x1),
__E_Last = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraEditorSettings_Version_Unwrapped () const noexcept {
return static_cast<__FloraEditorSettings_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraEditorSettings_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraEditorSettings_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(1)
static ::MA::Flora::FloraEditorSettings_Version const Count;

/// @brief Field Initial value: I32(0)
static ::MA::Flora::FloraEditorSettings_Version const Initial;

/// @brief Field Last value: I32(0)
static ::MA::Flora::FloraEditorSettings_Version const Last;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraEditorSettings_Version, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraEditorSettings_Version) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraEditorSettings::Version, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraEditorSettings
class CORDL_TYPE FloraEditorSettings : public ::System::Object {
public:
// Declarations
using Version = ::MA::Flora::FloraEditorSettings_Version;

 __declspec(property(get=get_DisableInstanceRenderersInEditMode, put=set_DisableInstanceRenderersInEditMode)) bool  DisableInstanceRenderersInEditMode;

 __declspec(property(get=get_isAvailableInPlayerBuild)) bool  isAvailableInPlayerBuild;

/// @brief Field m_DisableInstanceRenderersInEditMode, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableInstanceRenderersInEditMode, put=__cordl_internal_set_m_DisableInstanceRenderersInEditMode)) bool  m_DisableInstanceRenderersInEditMode;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::MA::Flora::FloraEditorSettings_Version  m_Version;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::MA::Flora::FloraEditorSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_DisableInstanceRenderersInEditMode() const;

constexpr bool& __cordl_internal_get_m_DisableInstanceRenderersInEditMode() ;

constexpr ::MA::Flora::FloraEditorSettings_Version const& __cordl_internal_get_m_Version() const;

constexpr ::MA::Flora::FloraEditorSettings_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_DisableInstanceRenderersInEditMode(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::MA::Flora::FloraEditorSettings_Version  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisableInstanceRenderersInEditMode, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableInstanceRenderersInEditMode() ;

/// @brief Method get_isAvailableInPlayerBuild, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool get_isAvailableInPlayerBuild() ;

/// @brief Method get_version, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_DisableInstanceRenderersInEditMode, addr 0x1814f7cb0, size 0x30, virtual false, abstract: false, final false
inline void set_DisableInstanceRenderersInEditMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraEditorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraEditorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraEditorSettings(FloraEditorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraEditorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraEditorSettings(FloraEditorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13351};

/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::FloraEditorSettings_Version  ___m_Version;

/// @brief Field m_DisableInstanceRenderersInEditMode, offset: 0x14, size: 0x1, def value: None
 bool  ___m_DisableInstanceRenderersInEditMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraEditorSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraEditorSettings, ___m_DisableInstanceRenderersInEditMode) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraEditorSettings) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
