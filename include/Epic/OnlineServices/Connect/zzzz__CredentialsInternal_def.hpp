#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CredentialsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialsInternal)
namespace Epic::OnlineServices::Connect {
struct Credentials;
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
struct CredentialsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CredentialsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CredentialsInternal, "Epic.OnlineServices.Connect", "CredentialsInternal");
// Dependencies Epic.OnlineServices.ExternalCredentialType, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CredentialsInternal
struct CORDL_TYPE CredentialsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f3150, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Connect::Credentials>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::Credentials>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__Credentials_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CredentialsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Token", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: None }]
constexpr CredentialsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Token, ::Epic::OnlineServices::ExternalCredentialType  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Token, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Token;

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalCredentialType  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CredentialsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CredentialsInternal, m_Token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CredentialsInternal, m_Type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CredentialsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
