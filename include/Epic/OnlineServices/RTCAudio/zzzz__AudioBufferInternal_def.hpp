#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioBufferInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBufferInternal)
namespace Epic::OnlineServices::RTCAudio {
struct AudioBuffer;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct AudioBufferInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioBufferInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, "Epic.OnlineServices.RTCAudio", "AudioBufferInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioBufferInternal
struct CORDL_TYPE AudioBufferInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x1804e6db0, size 0x80, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>  other) ;

/// @brief Method Set, addr 0x1804e6e30, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBuffer>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAudio__AudioBuffer_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::AudioBuffer>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__AudioBuffer_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioBufferInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Frames", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FramesCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SampleRate", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Channels", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AudioBufferInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Frames, uint32_t  m_FramesCount, uint32_t  m_SampleRate, uint32_t  m_Channels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Frames, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Frames;

/// @brief Field m_FramesCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_FramesCount;

/// @brief Field m_SampleRate, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_SampleRate;

/// @brief Field m_Channels, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_Channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, m_Frames) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, m_FramesCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, m_SampleRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal, m_Channels) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioBufferInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
