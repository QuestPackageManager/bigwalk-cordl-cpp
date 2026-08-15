#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetDisplayPreferenceOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetDisplayPreferenceOptionsInternal)
namespace Epic::OnlineServices::UI {
struct SetDisplayPreferenceOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct SetDisplayPreferenceOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal, "Epic.OnlineServices.UI", "SetDisplayPreferenceOptionsInternal");
// Dependencies Epic.OnlineServices.UI.NotificationLocation
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.SetDisplayPreferenceOptionsInternal
struct CORDL_TYPE SetDisplayPreferenceOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__SetDisplayPreferenceOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetDisplayPreferenceOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NotificationLocation", ty: "::Epic::OnlineServices::UI::NotificationLocation", modifiers: "", def_value: None }]
constexpr SetDisplayPreferenceOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::NotificationLocation  m_NotificationLocation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_NotificationLocation, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::NotificationLocation  m_NotificationLocation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal, m_NotificationLocation) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::SetDisplayPreferenceOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
