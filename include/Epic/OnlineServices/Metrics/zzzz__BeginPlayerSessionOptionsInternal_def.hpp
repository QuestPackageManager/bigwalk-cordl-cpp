#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountIdInternal_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeginPlayerSessionOptionsInternal)
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, "Epic.OnlineServices.Metrics", "BeginPlayerSessionOptionsInternal");
// Dependencies Epic.OnlineServices.Metrics.BeginPlayerSessionOptionsAccountIdInternal, Epic.OnlineServices.Metrics.MetricsAccountIdType, Epic.OnlineServices.Metrics.UserControllerType, System.IntPtr
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.BeginPlayerSessionOptionsInternal
struct CORDL_TYPE BeginPlayerSessionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1805044e0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180504530, size 0x1c0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__BeginPlayerSessionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginPlayerSessionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ControllerType", ty: "::Epic::OnlineServices::Metrics::UserControllerType", modifiers: "", def_value: None }, CppParam { name: "m_ServerIp", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_GameSessionId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr BeginPlayerSessionOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal  m_AccountId, ::System::IntPtr  m_DisplayName, ::Epic::OnlineServices::Metrics::UserControllerType  m_ControllerType, ::System::IntPtr  m_ServerIp, ::System::IntPtr  m_GameSessionId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AccountIdType, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType;

/// @brief Field m_AccountId, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal  m_AccountId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_ControllerType, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Metrics::UserControllerType  m_ControllerType;

/// @brief Field m_ServerIp, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ServerIp;

/// @brief Field m_GameSessionId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_GameSessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_AccountIdType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_AccountId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_ControllerType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_ServerIp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal, m_GameSessionId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
