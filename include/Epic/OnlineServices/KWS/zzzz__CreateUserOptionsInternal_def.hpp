#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/CreateUserOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateUserOptionsInternal)
namespace Epic::OnlineServices::KWS {
struct CreateUserOptions;
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
struct CreateUserOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::CreateUserOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::CreateUserOptionsInternal, "Epic.OnlineServices.KWS", "CreateUserOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.CreateUserOptionsInternal
struct CORDL_TYPE CreateUserOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CreateUserOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CreateUserOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f7510, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::KWS::CreateUserOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CreateUserOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::KWS::CreateUserOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__KWS__CreateUserOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateUserOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DateOfBirth", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParentEmail", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CreateUserOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_DateOfBirth, ::System::IntPtr  m_ParentEmail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_DateOfBirth, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DateOfBirth;

/// @brief Field m_ParentEmail, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ParentEmail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptionsInternal, m_DateOfBirth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::CreateUserOptionsInternal, m_ParentEmail) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::CreateUserOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
