#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/MemoryMonitorCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MemoryMonitorCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct MemoryMonitorCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo, "Epic.OnlineServices.UI", "MemoryMonitorCallbackInfo");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.MemoryMonitorCallbackInfo
struct CORDL_TYPE MemoryMonitorCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_SystemMemoryMonitorReport, put=set_SystemMemoryMonitorReport)) ::System::IntPtr  SystemMemoryMonitorReport;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_SystemMemoryMonitorReport, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_SystemMemoryMonitorReport() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_SystemMemoryMonitorReport, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_SystemMemoryMonitorReport(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MemoryMonitorCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_SystemMemoryMonitorReport_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr MemoryMonitorCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::IntPtr  _SystemMemoryMonitorReport_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <SystemMemoryMonitorReport>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _SystemMemoryMonitorReport_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo, _SystemMemoryMonitorReport_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
