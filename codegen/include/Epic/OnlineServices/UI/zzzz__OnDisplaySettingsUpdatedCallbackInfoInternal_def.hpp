#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnDisplaySettingsUpdatedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnDisplaySettingsUpdatedCallbackInfoInternal)
namespace Epic::OnlineServices::UI {
struct OnDisplaySettingsUpdatedCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct OnDisplaySettingsUpdatedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal, "Epic.OnlineServices.UI", "OnDisplaySettingsUpdatedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.OnDisplaySettingsUpdatedCallbackInfoInternal
struct CORDL_TYPE OnDisplaySettingsUpdatedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804dc970, size 0x190, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UI__OnDisplaySettingsUpdatedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnDisplaySettingsUpdatedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsVisible", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsExclusiveInput", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnDisplaySettingsUpdatedCallbackInfoInternal(::System::IntPtr  m_ClientData, int32_t  m_IsVisible, int32_t  m_IsExclusiveInput) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_IsVisible, offset: 0x8, size: 0x4, def value: None
 int32_t  m_IsVisible;

/// @brief Field m_IsExclusiveInput, offset: 0xc, size: 0x4, def value: None
 int32_t  m_IsExclusiveInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal, m_IsVisible) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal, m_IsExclusiveInput) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
