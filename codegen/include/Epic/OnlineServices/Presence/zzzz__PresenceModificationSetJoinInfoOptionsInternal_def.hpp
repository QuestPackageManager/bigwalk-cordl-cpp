#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetJoinInfoOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetJoinInfoOptionsInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetJoinInfoOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetJoinInfoOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal, "Epic.OnlineServices.Presence", "PresenceModificationSetJoinInfoOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetJoinInfoOptionsInternal
struct CORDL_TYPE PresenceModificationSetJoinInfoOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f0f90, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetJoinInfoOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetJoinInfoOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_JoinInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PresenceModificationSetJoinInfoOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_JoinInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_JoinInfo, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_JoinInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal, m_JoinInfo) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
