#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeginPlayerSessionOptionsAccountId)
namespace Epic::OnlineServices::Metrics {
struct MetricsAccountIdType;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsAccountId;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId, "Epic.OnlineServices.Metrics", "BeginPlayerSessionOptionsAccountId");
// Dependencies Epic.OnlineServices.Metrics.MetricsAccountIdType
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.BeginPlayerSessionOptionsAccountId
struct CORDL_TYPE BeginPlayerSessionOptionsAccountId {
public:
// Declarations
 __declspec(property(get=get_AccountIdType)) ::Epic::OnlineServices::Metrics::MetricsAccountIdType  AccountIdType;

 __declspec(property(get=get_Epic, put=set_Epic)) ::Epic::OnlineServices::EpicAccountId*  Epic;

 __declspec(property(get=get_External, put=set_External)) ::Epic::OnlineServices::Utf8String*  External;

/// @brief Method get_AccountIdType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::MetricsAccountIdType get_AccountIdType() ;

/// @brief Method get_Epic, addr 0x180504350, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_Epic() ;

/// @brief Method get_External, addr 0x180504370, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_External() ;

/// @brief Method op_Implicit, addr 0x1805043e0, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method op_Implicit, addr 0x180504420, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method op_Implicit, addr 0x180504390, size 0x50, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::StringW  value) ;

/// @brief Method set_Epic, addr 0x180504450, size 0x30, virtual false, abstract: false, final false
inline void set_Epic(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_External, addr 0x180504480, size 0x60, virtual false, abstract: false, final false
inline void set_External(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginPlayerSessionOptionsAccountId() ;

// Ctor Parameters [CppParam { name: "m_Epic", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "m_External", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: None }]
constexpr BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::EpicAccountId*  m_Epic, ::Epic::OnlineServices::Utf8String*  m_External, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Epic, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  m_Epic;

/// @brief Field m_External, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  m_External;

/// @brief Field m_AccountIdType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId, m_Epic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId, m_External) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId, m_AccountIdType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
