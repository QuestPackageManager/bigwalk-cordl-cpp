#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsButtonOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetToggleFriendsButtonOptionsInternal)
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsButtonOptions;
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
struct SetToggleFriendsButtonOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal, "Epic.OnlineServices.UI", "SetToggleFriendsButtonOptionsInternal");
// Dependencies Epic.OnlineServices.UI.InputStateButtonFlags
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.SetToggleFriendsButtonOptionsInternal
struct CORDL_TYPE SetToggleFriendsButtonOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__SetToggleFriendsButtonOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetToggleFriendsButtonOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ButtonCombination", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: None }]
constexpr SetToggleFriendsButtonOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonCombination) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ButtonCombination, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonCombination;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal, m_ButtonCombination) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
