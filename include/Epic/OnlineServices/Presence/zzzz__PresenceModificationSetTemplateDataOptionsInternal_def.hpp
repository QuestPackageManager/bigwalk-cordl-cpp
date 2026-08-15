#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsValueInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationTemplateType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetTemplateDataOptionsInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptions;
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
struct PresenceModificationSetTemplateDataOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal, "Epic.OnlineServices.Presence", "PresenceModificationSetTemplateDataOptionsInternal");
// Dependencies Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptionsValueInternal, Epic.OnlineServices.Presence.PresenceModificationTemplateType, System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptionsInternal
struct CORDL_TYPE PresenceModificationSetTemplateDataOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804ff310, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804ff340, size 0xc0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetTemplateDataOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal", modifiers: "", def_value: None }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::Presence::PresenceModificationTemplateType", modifiers: "", def_value: None }]
constexpr PresenceModificationSetTemplateDataOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal  m_Value, ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  m_ValueType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Key;

/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal  m_Value;

/// @brief Field m_ValueType, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  m_ValueType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal, m_Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal, m_ValueType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
