#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetRawRichTextOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetRawRichTextOptionsInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetRawRichTextOptions;
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
struct PresenceModificationSetRawRichTextOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal, "Epic.OnlineServices.Presence", "PresenceModificationSetRawRichTextOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetRawRichTextOptionsInternal
struct CORDL_TYPE PresenceModificationSetRawRichTextOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f0f90, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetRawRichTextOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetRawRichTextOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RichText", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PresenceModificationSetRawRichTextOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_RichText) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_RichText, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_RichText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal, m_RichText) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
