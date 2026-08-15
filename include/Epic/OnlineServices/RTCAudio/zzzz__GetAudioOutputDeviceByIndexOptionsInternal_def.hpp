#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/GetAudioOutputDeviceByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetAudioOutputDeviceByIndexOptionsInternal)
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioOutputDeviceByIndexOptions;
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
struct GetAudioOutputDeviceByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal, "Epic.OnlineServices.RTCAudio", "GetAudioOutputDeviceByIndexOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.GetAudioOutputDeviceByIndexOptionsInternal
struct CORDL_TYPE GetAudioOutputDeviceByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__GetAudioOutputDeviceByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetAudioOutputDeviceByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceInfoIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetAudioOutputDeviceByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DeviceInfoIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_DeviceInfoIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_DeviceInfoIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal, m_DeviceInfoIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
