#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamOptionsInitOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsSteamOptionsInitOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptionsInitOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, "Epic.OnlineServices.IntegratedPlatform", "WindowsSteamOptionsInitOptions");
// Dependencies 
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.WindowsSteamOptionsInitOptions
struct CORDL_TYPE WindowsSteamOptionsInitOptions {
public:
// Declarations
 __declspec(property(get=get_OverrideLibraryPath, put=set_OverrideLibraryPath)) ::Epic::OnlineServices::Utf8String*  OverrideLibraryPath;

 __declspec(property(get=get_SteamApiInterfaceVersionsArray, put=set_SteamApiInterfaceVersionsArray)) ::Epic::OnlineServices::Utf8String*  SteamApiInterfaceVersionsArray;

 __declspec(property(get=get_SteamApiInterfaceVersionsArrayBytes, put=set_SteamApiInterfaceVersionsArrayBytes)) uint32_t  SteamApiInterfaceVersionsArrayBytes;

 __declspec(property(get=get_SteamMajorVersion, put=set_SteamMajorVersion)) uint32_t  SteamMajorVersion;

 __declspec(property(get=get_SteamMinorVersion, put=set_SteamMinorVersion)) uint32_t  SteamMinorVersion;

/// @brief Method get_OverrideLibraryPath, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OverrideLibraryPath() ;

/// @brief Method get_SteamApiInterfaceVersionsArray, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SteamApiInterfaceVersionsArray() ;

/// @brief Method get_SteamApiInterfaceVersionsArrayBytes, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SteamApiInterfaceVersionsArrayBytes() ;

/// @brief Method get_SteamMajorVersion, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SteamMajorVersion() ;

/// @brief Method get_SteamMinorVersion, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SteamMinorVersion() ;

/// @brief Method set_OverrideLibraryPath, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideLibraryPath(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SteamApiInterfaceVersionsArray, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_SteamApiInterfaceVersionsArray(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SteamApiInterfaceVersionsArrayBytes, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_SteamApiInterfaceVersionsArrayBytes(uint32_t  value) ;

/// @brief Method set_SteamMajorVersion, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_SteamMajorVersion(uint32_t  value) ;

/// @brief Method set_SteamMinorVersion, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_SteamMinorVersion(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsSteamOptionsInitOptions() ;

// Ctor Parameters [CppParam { name: "_OverrideLibraryPath_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SteamMajorVersion_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_SteamMinorVersion_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_SteamApiInterfaceVersionsArray_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SteamApiInterfaceVersionsArrayBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr WindowsSteamOptionsInitOptions(::Epic::OnlineServices::Utf8String*  _OverrideLibraryPath_k__BackingField, uint32_t  _SteamMajorVersion_k__BackingField, uint32_t  _SteamMinorVersion_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SteamApiInterfaceVersionsArray_k__BackingField, uint32_t  _SteamApiInterfaceVersionsArrayBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <OverrideLibraryPath>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OverrideLibraryPath_k__BackingField;

/// @brief Field <SteamMajorVersion>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _SteamMajorVersion_k__BackingField;

/// @brief Field <SteamMinorVersion>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _SteamMinorVersion_k__BackingField;

/// @brief Field <SteamApiInterfaceVersionsArray>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SteamApiInterfaceVersionsArray_k__BackingField;

/// @brief Field <SteamApiInterfaceVersionsArrayBytes>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _SteamApiInterfaceVersionsArrayBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, _OverrideLibraryPath_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, _SteamMajorVersion_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, _SteamMinorVersion_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, _SteamApiInterfaceVersionsArray_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions, _SteamApiInterfaceVersionsArrayBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
