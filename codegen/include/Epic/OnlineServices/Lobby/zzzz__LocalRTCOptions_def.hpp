#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LocalRTCOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalRTCOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LocalRTCOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LocalRTCOptions, "Epic.OnlineServices.Lobby", "LocalRTCOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LocalRTCOptions
struct CORDL_TYPE LocalRTCOptions {
public:
// Declarations
 __declspec(property(get=get_Flags, put=set_Flags)) uint32_t  Flags;

 __declspec(property(get=get_LocalAudioDeviceInputStartsMuted, put=set_LocalAudioDeviceInputStartsMuted)) bool  LocalAudioDeviceInputStartsMuted;

 __declspec(property(get=get_Reserved, put=set_Reserved)) ::System::IntPtr  Reserved;

 __declspec(property(get=get_UseManualAudioInput, put=set_UseManualAudioInput)) bool  UseManualAudioInput;

 __declspec(property(get=get_UseManualAudioOutput, put=set_UseManualAudioOutput)) bool  UseManualAudioOutput;

/// @brief Method get_Flags, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Flags() ;

/// @brief Method get_LocalAudioDeviceInputStartsMuted, addr 0x180503d20, size 0x10, virtual false, abstract: false, final false
inline bool get_LocalAudioDeviceInputStartsMuted() ;

/// @brief Method get_Reserved, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved() ;

/// @brief Method get_UseManualAudioInput, addr 0x1804bda20, size 0x10, virtual false, abstract: false, final false
inline bool get_UseManualAudioInput() ;

/// @brief Method get_UseManualAudioOutput, addr 0x1804bdb40, size 0x10, virtual false, abstract: false, final false
inline bool get_UseManualAudioOutput() ;

/// @brief Method set_Flags, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Flags(uint32_t  value) ;

/// @brief Method set_LocalAudioDeviceInputStartsMuted, addr 0x180503d30, size 0x10, virtual false, abstract: false, final false
inline void set_LocalAudioDeviceInputStartsMuted(bool  value) ;

/// @brief Method set_Reserved, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved(::System::IntPtr  value) ;

/// @brief Method set_UseManualAudioInput, addr 0x1804bda30, size 0x10, virtual false, abstract: false, final false
inline void set_UseManualAudioInput(bool  value) ;

/// @brief Method set_UseManualAudioOutput, addr 0x1804bdb60, size 0x10, virtual false, abstract: false, final false
inline void set_UseManualAudioOutput(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalRTCOptions() ;

// Ctor Parameters [CppParam { name: "_Flags_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_UseManualAudioInput_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_UseManualAudioOutput_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_LocalAudioDeviceInputStartsMuted_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LocalRTCOptions(uint32_t  _Flags_k__BackingField, bool  _UseManualAudioInput_k__BackingField, bool  _UseManualAudioOutput_k__BackingField, bool  _LocalAudioDeviceInputStartsMuted_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Flags>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _Flags_k__BackingField;

/// @brief Field <UseManualAudioInput>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _UseManualAudioInput_k__BackingField;

/// @brief Field <UseManualAudioOutput>k__BackingField, offset: 0x5, size: 0x1, def value: None
 bool  _UseManualAudioOutput_k__BackingField;

/// @brief Field <LocalAudioDeviceInputStartsMuted>k__BackingField, offset: 0x6, size: 0x1, def value: None
 bool  _LocalAudioDeviceInputStartsMuted_k__BackingField;

/// @brief Field <Reserved>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _Reserved_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptions, _Flags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptions, _UseManualAudioInput_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptions, _UseManualAudioOutput_k__BackingField) == 0x5, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptions, _LocalAudioDeviceInputStartsMuted_k__BackingField) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptions, _Reserved_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LocalRTCOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
