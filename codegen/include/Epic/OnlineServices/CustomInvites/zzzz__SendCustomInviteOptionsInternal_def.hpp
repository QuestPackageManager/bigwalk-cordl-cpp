#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendCustomInviteOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendCustomInviteOptionsInternal)
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomInviteOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomInviteOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal, "Epic.OnlineServices.CustomInvites", "SendCustomInviteOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.SendCustomInviteOptionsInternal
struct CORDL_TYPE SendCustomInviteOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052bb20, size 0x140, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__SendCustomInviteOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SendCustomInviteOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SendCustomInviteOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserIds, uint32_t  m_TargetUserIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserIds, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserIds;

/// @brief Field m_TargetUserIdsCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_TargetUserIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal, m_TargetUserIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal, m_TargetUserIdsCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
