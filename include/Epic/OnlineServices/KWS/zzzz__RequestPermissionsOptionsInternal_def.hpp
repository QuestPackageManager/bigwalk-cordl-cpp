#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/RequestPermissionsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestPermissionsOptionsInternal)
namespace Epic::OnlineServices::KWS {
struct RequestPermissionsOptions;
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
struct RequestPermissionsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal, "Epic.OnlineServices.KWS", "RequestPermissionsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.RequestPermissionsOptionsInternal
struct CORDL_TYPE RequestPermissionsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::RequestPermissionsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::RequestPermissionsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051de40, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::RequestPermissionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::RequestPermissionsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__KWS__RequestPermissionsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RequestPermissionsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PermissionKeyCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_PermissionKeys", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RequestPermissionsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_PermissionKeyCount, ::System::IntPtr  m_PermissionKeys) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PermissionKeyCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_PermissionKeyCount;

/// @brief Field m_PermissionKeys, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_PermissionKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal, m_PermissionKeyCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal, m_PermissionKeys) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::RequestPermissionsOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
