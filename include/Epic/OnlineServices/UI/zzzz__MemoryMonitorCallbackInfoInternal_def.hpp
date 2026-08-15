#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/MemoryMonitorCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MemoryMonitorCallbackInfoInternal)
namespace Epic::OnlineServices::UI {
struct MemoryMonitorCallbackInfo;
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
struct MemoryMonitorCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal, "Epic.OnlineServices.UI", "MemoryMonitorCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.MemoryMonitorCallbackInfoInternal
struct CORDL_TYPE MemoryMonitorCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804dc3f0, size 0x260, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UI__MemoryMonitorCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr MemoryMonitorCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SystemMemoryMonitorReport", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr MemoryMonitorCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_SystemMemoryMonitorReport) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_SystemMemoryMonitorReport, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SystemMemoryMonitorReport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal, m_SystemMemoryMonitorReport) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
