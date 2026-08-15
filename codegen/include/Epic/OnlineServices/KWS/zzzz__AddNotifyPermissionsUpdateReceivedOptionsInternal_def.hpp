#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/AddNotifyPermissionsUpdateReceivedOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyPermissionsUpdateReceivedOptionsInternal)
namespace Epic::OnlineServices::KWS {
struct AddNotifyPermissionsUpdateReceivedOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct AddNotifyPermissionsUpdateReceivedOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptionsInternal, "Epic.OnlineServices.KWS", "AddNotifyPermissionsUpdateReceivedOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.AddNotifyPermissionsUpdateReceivedOptionsInternal
struct CORDL_TYPE AddNotifyPermissionsUpdateReceivedOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__KWS__AddNotifyPermissionsUpdateReceivedOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyPermissionsUpdateReceivedOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddNotifyPermissionsUpdateReceivedOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::AddNotifyPermissionsUpdateReceivedOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
