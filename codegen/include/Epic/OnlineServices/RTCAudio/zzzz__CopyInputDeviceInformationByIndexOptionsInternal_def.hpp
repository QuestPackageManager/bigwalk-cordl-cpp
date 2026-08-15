#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/CopyInputDeviceInformationByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyInputDeviceInformationByIndexOptionsInternal)
namespace Epic::OnlineServices::RTCAudio {
struct CopyInputDeviceInformationByIndexOptions;
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
struct CopyInputDeviceInformationByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal, "Epic.OnlineServices.RTCAudio", "CopyInputDeviceInformationByIndexOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.CopyInputDeviceInformationByIndexOptionsInternal
struct CORDL_TYPE CopyInputDeviceInformationByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__CopyInputDeviceInformationByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyInputDeviceInformationByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyInputDeviceInformationByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DeviceIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_DeviceIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_DeviceIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal, m_DeviceIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
