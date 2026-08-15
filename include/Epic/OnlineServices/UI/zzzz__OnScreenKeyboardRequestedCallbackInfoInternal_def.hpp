#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnScreenKeyboardRequestedCallbackInfoInternal)
namespace Epic::OnlineServices::UI {
struct OnScreenKeyboardRequestedCallbackInfo;
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
struct OnScreenKeyboardRequestedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal, "Epic.OnlineServices.UI", "OnScreenKeyboardRequestedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.UI.OnScreenKeyboardType, System.IntPtr
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.OnScreenKeyboardRequestedCallbackInfoInternal
struct CORDL_TYPE OnScreenKeyboardRequestedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804dea00, size 0x1a0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UI__OnScreenKeyboardRequestedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenKeyboardRequestedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardType", modifiers: "", def_value: None }]
constexpr OnScreenKeyboardRequestedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::Epic::OnlineServices::UI::OnScreenKeyboardType  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_Type, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::OnScreenKeyboardType  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal, m_Type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
