#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ConfigureOnScreenKeyboardOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigureOnScreenKeyboardOptionsInternal)
namespace Epic::OnlineServices::UI {
struct ConfigureOnScreenKeyboardOptions;
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
struct ConfigureOnScreenKeyboardOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal, "Epic.OnlineServices.UI", "ConfigureOnScreenKeyboardOptionsInternal");
// Dependencies Epic.OnlineServices.UI.OnScreenKeyboardBehavior
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.ConfigureOnScreenKeyboardOptionsInternal
struct CORDL_TYPE ConfigureOnScreenKeyboardOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d70f0, size 0x40, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__ConfigureOnScreenKeyboardOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfigureOnScreenKeyboardOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Behavior", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardBehavior", modifiers: "", def_value: None }, CppParam { name: "m_IsDeviceChecksEnabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigureOnScreenKeyboardOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  m_Behavior, int32_t  m_IsDeviceChecksEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Behavior, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  m_Behavior;

/// @brief Field m_IsDeviceChecksEnabled, offset: 0x8, size: 0x4, def value: None
 int32_t  m_IsDeviceChecksEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal, m_Behavior) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal, m_IsDeviceChecksEnabled) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal) == 0xc, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
