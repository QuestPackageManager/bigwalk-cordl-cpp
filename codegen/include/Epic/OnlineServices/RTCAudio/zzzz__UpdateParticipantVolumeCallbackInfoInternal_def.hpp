#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UpdateParticipantVolumeCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateParticipantVolumeCallbackInfoInternal)
namespace Epic::OnlineServices::RTCAudio {
struct UpdateParticipantVolumeCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct UpdateParticipantVolumeCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, "Epic.OnlineServices.RTCAudio", "UpdateParticipantVolumeCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.UpdateParticipantVolumeCallbackInfoInternal
struct CORDL_TYPE UpdateParticipantVolumeCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>*() ;

/// @brief Method Get, addr 0x180502fd0, size 0x120, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__UpdateParticipantVolumeCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateParticipantVolumeCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Volume", ty: "float_t", modifiers: "", def_value: None }]
constexpr UpdateParticipantVolumeCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ParticipantId, float_t  m_Volume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_ParticipantId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

/// @brief Field m_Volume, offset: 0x28, size: 0x4, def value: None
 float_t  m_Volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_RoomName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_ParticipantId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal, m_Volume) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
