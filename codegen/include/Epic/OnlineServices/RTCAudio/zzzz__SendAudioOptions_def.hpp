#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/SendAudioOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioBuffer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SendAudioOptions)
namespace Epic::OnlineServices::RTCAudio {
struct AudioBuffer;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct SendAudioOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::SendAudioOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::SendAudioOptions, "Epic.OnlineServices.RTCAudio", "SendAudioOptions");
// Dependencies Epic.OnlineServices.RTCAudio.AudioBuffer, System.Nullable`1<T>
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.SendAudioOptions
struct CORDL_TYPE SendAudioOptions {
public:
// Declarations
 __declspec(property(get=get_Buffer, put=set_Buffer)) ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>  Buffer;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Method get_Buffer, addr 0x180347870, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer> get_Buffer() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method set_Buffer, addr 0x1804f67e0, size 0x20, virtual false, abstract: false, final false
inline void set_Buffer(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendAudioOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Buffer_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>", modifiers: "", def_value: None }]
constexpr SendAudioOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>  _Buffer_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <Buffer>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>  _Buffer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SendAudioOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SendAudioOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::SendAudioOptions, _Buffer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::SendAudioOptions) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
