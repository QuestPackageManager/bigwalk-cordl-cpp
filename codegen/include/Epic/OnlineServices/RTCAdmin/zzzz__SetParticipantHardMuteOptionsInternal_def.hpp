#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/SetParticipantHardMuteOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetParticipantHardMuteOptionsInternal)
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal, "Epic.OnlineServices.RTCAdmin", "SetParticipantHardMuteOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.SetParticipantHardMuteOptionsInternal
struct CORDL_TYPE SetParticipantHardMuteOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805028b0, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__SetParticipantHardMuteOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetParticipantHardMuteOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Mute", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SetParticipantHardMuteOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_TargetUserId, int32_t  m_Mute) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_RoomName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_TargetUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_Mute, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Mute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal, m_RoomName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal, m_TargetUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal, m_Mute) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
