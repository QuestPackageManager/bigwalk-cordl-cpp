#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioBeforeRenderCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioBeforeRenderCallbackInfoInternal)
namespace Epic::OnlineServices::RTCAudio {
struct AudioBeforeRenderCallbackInfo;
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
struct AudioBeforeRenderCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, "Epic.OnlineServices.RTCAudio", "AudioBeforeRenderCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioBeforeRenderCallbackInfoInternal
struct CORDL_TYPE AudioBeforeRenderCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804e6a90, size 0x1d0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioBeforeRenderCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioBeforeRenderCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr AudioBeforeRenderCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_Buffer, ::System::IntPtr  m_ParticipantId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_Buffer, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Buffer;

/// @brief Field m_ParticipantId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, m_Buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal, m_ParticipantId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
