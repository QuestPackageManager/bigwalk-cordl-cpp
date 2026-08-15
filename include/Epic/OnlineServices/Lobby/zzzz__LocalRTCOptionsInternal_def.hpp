#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LocalRTCOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalRTCOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, "Epic.OnlineServices.Lobby", "LocalRTCOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LocalRTCOptionsInternal
struct CORDL_TYPE LocalRTCOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18050bcc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18050bce0, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::LocalRTCOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LocalRTCOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalRTCOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_UseManualAudioInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UseManualAudioOutput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalAudioDeviceInputStartsMuted", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reserved", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LocalRTCOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_Flags, int32_t  m_UseManualAudioInput, int32_t  m_UseManualAudioOutput, int32_t  m_LocalAudioDeviceInputStartsMuted, ::System::IntPtr  m_Reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Flags, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_Flags;

/// @brief Field m_UseManualAudioInput, offset: 0x8, size: 0x4, def value: None
 int32_t  m_UseManualAudioInput;

/// @brief Field m_UseManualAudioOutput, offset: 0xc, size: 0x4, def value: None
 int32_t  m_UseManualAudioOutput;

/// @brief Field m_LocalAudioDeviceInputStartsMuted, offset: 0x10, size: 0x4, def value: None
 int32_t  m_LocalAudioDeviceInputStartsMuted;

/// @brief Field m_Reserved, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_Flags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_UseManualAudioInput) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_UseManualAudioOutput) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_LocalAudioDeviceInputStartsMuted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal, m_Reserved) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LocalRTCOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
