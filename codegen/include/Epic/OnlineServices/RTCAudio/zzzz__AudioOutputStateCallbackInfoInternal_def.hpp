#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioOutputStateCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioOutputStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioOutputStateCallbackInfoInternal)
namespace Epic::OnlineServices::RTCAudio {
struct AudioOutputStateCallbackInfo;
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
struct AudioOutputStateCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal, "Epic.OnlineServices.RTCAudio", "AudioOutputStateCallbackInfoInternal");
// Dependencies Epic.OnlineServices.RTCAudio.RTCAudioOutputStatus, System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioOutputStateCallbackInfoInternal
struct CORDL_TYPE AudioOutputStateCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804e7160, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioOutputStateCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioOutputStateCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus", modifiers: "", def_value: None }]
constexpr AudioOutputStateCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus  m_Status) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_Status, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::RTCAudio::RTCAudioOutputStatus  m_Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal, m_Status) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
