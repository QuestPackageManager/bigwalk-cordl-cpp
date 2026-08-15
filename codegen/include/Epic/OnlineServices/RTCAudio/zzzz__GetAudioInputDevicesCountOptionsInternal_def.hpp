#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/GetAudioInputDevicesCountOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetAudioInputDevicesCountOptionsInternal)
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDevicesCountOptions;
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
struct GetAudioInputDevicesCountOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptionsInternal, "Epic.OnlineServices.RTCAudio", "GetAudioInputDevicesCountOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.GetAudioInputDevicesCountOptionsInternal
struct CORDL_TYPE GetAudioInputDevicesCountOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__GetAudioInputDevicesCountOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetAudioInputDevicesCountOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GetAudioInputDevicesCountOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
