#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreatePlayerSanctionAppealOptionsInternal)
namespace Epic::OnlineServices::Sanctions {
struct CreatePlayerSanctionAppealOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct CreatePlayerSanctionAppealOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal, "Epic.OnlineServices.Sanctions", "CreatePlayerSanctionAppealOptionsInternal");
// Dependencies Epic.OnlineServices.Sanctions.SanctionAppealReason, System.IntPtr
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.CreatePlayerSanctionAppealOptionsInternal
struct CORDL_TYPE CreatePlayerSanctionAppealOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7660, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sanctions__CreatePlayerSanctionAppealOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreatePlayerSanctionAppealOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Reason", ty: "::Epic::OnlineServices::Sanctions::SanctionAppealReason", modifiers: "", def_value: None }, CppParam { name: "m_ReferenceId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CreatePlayerSanctionAppealOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Sanctions::SanctionAppealReason  m_Reason, ::System::IntPtr  m_ReferenceId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Reason, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Sanctions::SanctionAppealReason  m_Reason;

/// @brief Field m_ReferenceId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ReferenceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal, m_Reason) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal, m_ReferenceId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
