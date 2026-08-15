#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AddNotifyAudioBeforeRenderOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyAudioBeforeRenderOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioBeforeRenderOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions, "Epic.OnlineServices.RTCAudio", "AddNotifyAudioBeforeRenderOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AddNotifyAudioBeforeRenderOptions
struct CORDL_TYPE AddNotifyAudioBeforeRenderOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

 __declspec(property(get=get_UnmixedAudio, put=set_UnmixedAudio)) bool  UnmixedAudio;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method get_UnmixedAudio, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_UnmixedAudio() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UnmixedAudio, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_UnmixedAudio(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyAudioBeforeRenderOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnmixedAudio_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr AddNotifyAudioBeforeRenderOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, bool  _UnmixedAudio_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7935};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <UnmixedAudio>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _UnmixedAudio_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions, _UnmixedAudio_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
