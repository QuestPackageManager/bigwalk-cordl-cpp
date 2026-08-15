#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnScreenKeyboardRequestedCallbackInfo)
namespace Epic::OnlineServices::UI {
struct OnScreenKeyboardType;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
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
struct OnScreenKeyboardRequestedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo, "Epic.OnlineServices.UI", "OnScreenKeyboardRequestedCallbackInfo");
// Dependencies Epic.OnlineServices.UI.OnScreenKeyboardType
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.OnScreenKeyboardRequestedCallbackInfo
struct CORDL_TYPE OnScreenKeyboardRequestedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::UI::OnScreenKeyboardType  Type;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_Type, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::OnScreenKeyboardType get_Type() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_Type, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::UI::OnScreenKeyboardType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenKeyboardRequestedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardType", modifiers: "", def_value: None }]
constexpr OnScreenKeyboardRequestedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::UI::OnScreenKeyboardType  _Type_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <Type>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::OnScreenKeyboardType  _Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo, _Type_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
