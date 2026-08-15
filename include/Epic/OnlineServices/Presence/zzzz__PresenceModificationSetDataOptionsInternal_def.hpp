#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetDataOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetDataOptionsInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetDataOptions;
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
struct PresenceModificationSetDataOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal, "Epic.OnlineServices.Presence", "PresenceModificationSetDataOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetDataOptionsInternal
struct CORDL_TYPE PresenceModificationSetDataOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804ff220, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetDataOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetDataOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RecordsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Records", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PresenceModificationSetDataOptionsInternal(int32_t  m_ApiVersion, int32_t  m_RecordsCount, ::System::IntPtr  m_Records) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8239};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_RecordsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  m_RecordsCount;

/// @brief Field m_Records, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Records;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal, m_RecordsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal, m_Records) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
