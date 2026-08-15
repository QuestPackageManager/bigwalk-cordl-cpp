#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/EndPlayerSessionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsAccountIdInternal_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EndPlayerSessionOptionsInternal)
namespace Epic::OnlineServices::Metrics {
struct EndPlayerSessionOptions;
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
struct EndPlayerSessionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal, "Epic.OnlineServices.Metrics", "EndPlayerSessionOptionsInternal");
// Dependencies Epic.OnlineServices.Metrics.EndPlayerSessionOptionsAccountIdInternal, Epic.OnlineServices.Metrics.MetricsAccountIdType
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.EndPlayerSessionOptionsInternal
struct CORDL_TYPE EndPlayerSessionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180504d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180504db0, size 0x200, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__EndPlayerSessionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr EndPlayerSessionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal", modifiers: "", def_value: None }]
constexpr EndPlayerSessionOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal  m_AccountId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AccountIdType, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType;

/// @brief Field m_AccountId, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal  m_AccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal, m_AccountIdType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal, m_AccountId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
