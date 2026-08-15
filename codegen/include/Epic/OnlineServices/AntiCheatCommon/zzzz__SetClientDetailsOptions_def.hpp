#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/SetClientDetailsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientFlags_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientInput_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetClientDetailsOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientFlags;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientInput;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetClientDetailsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions, "Epic.OnlineServices.AntiCheatCommon", "SetClientDetailsOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientFlags, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientInput, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.SetClientDetailsOptions
struct CORDL_TYPE SetClientDetailsOptions {
public:
// Declarations
 __declspec(property(get=get_ClientFlags, put=set_ClientFlags)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  ClientFlags;

 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_ClientInputMethod, put=set_ClientInputMethod)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  ClientInputMethod;

/// @brief Method get_ClientFlags, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags get_ClientFlags() ;

/// @brief Method get_ClientHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_ClientInputMethod, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput get_ClientInputMethod() ;

/// @brief Method set_ClientFlags, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ClientFlags(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  value) ;

/// @brief Method set_ClientHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_ClientInputMethod, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_ClientInputMethod(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetClientDetailsOptions() ;

// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ClientFlags_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags", modifiers: "", def_value: None }, CppParam { name: "_ClientInputMethod_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput", modifiers: "", def_value: None }]
constexpr SetClientDetailsOptions(::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  _ClientFlags_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  _ClientInputMethod_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ClientHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <ClientFlags>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  _ClientFlags_k__BackingField;

/// @brief Field <ClientInputMethod>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  _ClientInputMethod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions, _ClientHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions, _ClientFlags_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions, _ClientInputMethod_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
