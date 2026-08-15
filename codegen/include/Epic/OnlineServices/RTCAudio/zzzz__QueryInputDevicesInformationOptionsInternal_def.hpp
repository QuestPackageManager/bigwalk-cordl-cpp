#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/QueryInputDevicesInformationOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryInputDevicesInformationOptionsInternal)
namespace Epic::OnlineServices::RTCAudio {
struct QueryInputDevicesInformationOptions;
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
struct QueryInputDevicesInformationOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptionsInternal, "Epic.OnlineServices.RTCAudio", "QueryInputDevicesInformationOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.QueryInputDevicesInformationOptionsInternal
struct CORDL_TYPE QueryInputDevicesInformationOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAudio__QueryInputDevicesInformationOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryInputDevicesInformationOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QueryInputDevicesInformationOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
