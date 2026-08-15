#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Options)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct Options;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::Options);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::Options, "Epic.OnlineServices.IntegratedPlatform", "Options");
// Dependencies Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.Options
struct CORDL_TYPE Options {
public:
// Declarations
 __declspec(property(get=get_Flags, put=set_Flags)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Flags;

 __declspec(property(get=get_InitOptions, put=set_InitOptions)) ::System::IntPtr  InitOptions;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::Utf8String*  Type;

/// @brief Method get_Flags, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags get_Flags() ;

/// @brief Method get_InitOptions, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_InitOptions() ;

/// @brief Method get_Type, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Type() ;

/// @brief Method set_Flags, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Flags(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  value) ;

/// @brief Method set_InitOptions, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_InitOptions(::System::IntPtr  value) ;

/// @brief Method set_Type, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Options() ;

// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags", modifiers: "", def_value: None }, CppParam { name: "_InitOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Options(::Epic::OnlineServices::Utf8String*  _Type_k__BackingField, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  _Flags_k__BackingField, ::System::IntPtr  _InitOptions_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Type>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Type_k__BackingField;

/// @brief Field <Flags>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  _Flags_k__BackingField;

/// @brief Field <InitOptions>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  _InitOptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::Options, _Type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::Options, _Flags_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::Options, _InitOptions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::Options) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
