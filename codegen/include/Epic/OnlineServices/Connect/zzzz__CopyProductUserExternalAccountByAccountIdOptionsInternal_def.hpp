#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByAccountIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyProductUserExternalAccountByAccountIdOptionsInternal)
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountIdOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal, "Epic.OnlineServices.Connect", "CopyProductUserExternalAccountByAccountIdOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CopyProductUserExternalAccountByAccountIdOptionsInternal
struct CORDL_TYPE CopyProductUserExternalAccountByAccountIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e6900, size 0x190, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CopyProductUserExternalAccountByAccountIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyProductUserExternalAccountByAccountIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyProductUserExternalAccountByAccountIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_AccountId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_TargetUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_AccountId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal, m_TargetUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal, m_AccountId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
